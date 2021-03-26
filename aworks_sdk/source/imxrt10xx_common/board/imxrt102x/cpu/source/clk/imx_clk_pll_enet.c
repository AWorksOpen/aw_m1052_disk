#include "clk_provider.h"
#include "imx1020_clk.h"
#include "imx1020_ccm_regs.h"
#include "imx1020_reg_base.h"
#include "aw_bitops.h"

#define PLL_ENET_LOCK_RATE (500 * 1000000)

static aw_clk_rate_t pll_enet_recalc_rate(
        struct clk *hw,
        aw_clk_rate_t parent_rate)
{
    return PLL_ENET_LOCK_RATE;
}


static aw_err_t pll_enet_enable(struct clk *hw)
{
    imx1020_ccm_analog_regs_t  *p_ccm_analog;

    p_ccm_analog = (imx1020_ccm_analog_regs_t *)IMX1020_CCM_ANALOG_BASE;

    // ��Ҫ�ȸ�pll�ϵ�
    AW_REG_BIT_CLR32(&p_ccm_analog->PLL_ENET,12);
    // �ȴ� PLL lock
    while (!AW_REG_BIT_ISSET32(&p_ccm_analog->PLL_ENET,31)) ;
    AW_REG_BIT_SET32(&p_ccm_analog->PLL_ENET,13);
    AW_REG_BIT_SET32(&p_ccm_analog->PLL_ENET,21);
    AW_REG_BIT_SET32(&p_ccm_analog->PLL_ENET,22);
    // ȡ��enet pll bypass
    AW_REG_BIT_CLR32(&p_ccm_analog->PLL_ENET,16);
    return AW_OK;
}

static aw_err_t pll_enet_disable(struct clk *hw)
{
    imx1020_ccm_analog_regs_t  *p_ccm_analog;

    p_ccm_analog = (imx1020_ccm_analog_regs_t *)IMX1020_CCM_ANALOG_BASE;

    AW_REG_BIT_CLR32(&p_ccm_analog->PLL_ENET,21);
    AW_REG_BIT_CLR32(&p_ccm_analog->PLL_ENET,22);
    AW_REG_BIT_CLR32(&p_ccm_analog->PLL_ENET,13);

    // ������pll�������ʹ��PLL�µ�
    AW_REG_BIT_SET32(&p_ccm_analog->PLL_ENET,12);
    // �ȴ� PLL unlock
    while (AW_REG_BIT_ISSET32(&p_ccm_analog->PLL_ENET,31)) ;

    // ȡ��enet pll bypass
    AW_REG_BIT_CLR32(&p_ccm_analog->PLL_ENET,16);

    return AW_OK;
}



aw_const static struct clk_ops pll_enet_ops = {
        .init = NULL,
        .recalc_rate = pll_enet_recalc_rate,
        .enable = pll_enet_enable,
        .disable = pll_enet_disable,
};


struct clk * imx1020_clk_register_pll_enet(
        struct clk *p_pll_enet,
        aw_clk_id_t clk_id,
        const char *name,
        aw_clk_id_t parent_id)
{
    return imx_clk_register(p_pll_enet,clk_id,name,parent_id,&pll_enet_ops);
}