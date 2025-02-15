#include "clk_provider.h"
#include "imx1050_clk.h"
#include "simple_mux_clk.h"
#include "simple_div_clk.h"
#include "imx1050_ccm_regs.h"
#include "imx1050_reg_base.h"

aw_const static struct simple_mux_desc csi_clk_sel_desc = {
        {
                IMX1050_CLK_OSC_24M,
                IMX1050_CLK_PLL2_PFD2,
                IMX1050_CLK_PLL3_DIV_4,
                IMX1050_CLK_PLL3_PFD1
        },
        4,
        (void *)&CCM->CSCDR3,
        9,
        2
};

SIPMLE_MUX_CLK_DEFS(csi_clk_sel,csi_clk_sel_desc);

struct clk * imx1050_clk_register_csi_clk_sel(
        struct clk *p_csi_clk_sel,
        aw_clk_id_t clk_id,
        const char *name)
{
    return imx_mux_clk_register(
            p_csi_clk_sel,
            clk_id,
            name,
            &csi_clk_sel_ops);
}

aw_const static struct simple_div_clk_desc csi_podf_desc = {
        &CCM->CSCDR3,
        11,
        3,
        1,
        8,
        1,  //����ֵҪ��һ
};

SIPMLE_DIV_CLK_DEFS(csi_podf,csi_podf_desc)

struct clk * imx1050_clk_register_csi_podf(
        struct clk *p_csi_podf,
        aw_clk_id_t clk_id,
        const char *name,
        aw_clk_id_t parent_id)
{
    return imx_clk_register(
            p_csi_podf,
            clk_id,
            name,
            parent_id,
            &csi_podf_ops);
}

