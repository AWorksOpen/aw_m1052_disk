/*******************************************************************************
*                                 AWorks
*                       ----------------------------
*                       innovating embedded platform
*
* Copyright (c) 2001-2012 Guangzhou ZHIYUAN Electronics Co., Ltd.
* All rights reserved.
*
* Contact information:
* web site:    http://www.zlg.cn/
*******************************************************************************/

/**
 * \file
 * \brief the definition of consts and struct of clock controler module in imx1050
 *
 * \par 1.�����豸
 *
 *  - IMX1050
 *
 * \internal
 * \par modification history
 * - 1.00 2017-09-01  sni, first implementation
 * \endinternal
 */
#include "aworks.h"
#include "imx1050_ccm_regs.h"
#include "imx1050_reg_base.h"
#include "imx1050_ccm.h"
#include "imx1050_xtal_osc24m.h"
#include "imx1050_xtal_osc24m_regs.h"

void ccm_clpcr_set_run_mode(void)
{
    imx1050_ccm_regs_t         *p_ccm_regs;
    uint32_t                    temp;

    p_ccm_regs = (imx1050_ccm_regs_t *)IMX1050_CCM_BASE;
    temp = readl(&p_ccm_regs->CLPCR);
    temp &= (~(0x3 << 0));
    temp |= (0 << 0);
    writel(temp,&p_ccm_regs->CLPCR);

}

void ccm_cgpr_enable_int_memclk_lpm(void)
{
    imx1050_ccm_regs_t         *p_ccm_regs;
    uint32_t                    temp;

    p_ccm_regs = (imx1050_ccm_regs_t *)IMX1050_CCM_BASE;
    temp = readl(&p_ccm_regs->CGPR);
    temp |= (1 << 17);
    writel(temp,&p_ccm_regs->CGPR);

}

void ccm_init_external_clk(void)
{
    imx1050_ccm_analog_regs_t  *p_ccm_analog_regs;
    imx1050_xtal_osc24m_regs_t *p_osc24m_regs;
    uint32_t                    temp;

    p_ccm_analog_regs = (imx1050_ccm_analog_regs_t *)IMX1050_CCM_ANALOG_BASE;
    p_osc24m_regs = (imx1050_xtal_osc24m_regs_t *)IMX1050_XTALOSC24M_BASE;

    /* Power up */
    writel((1<<30),&p_ccm_analog_regs->MISC0_CLR);
    do {
        temp = readl(&p_osc24m_regs->LOWPWR_CTRL);
    } while (0 == (temp & (1 << 16)));

    /* detect freq */
    writel((1<<16),&p_ccm_analog_regs->MISC0_SET);
    do {
        temp = readl(&p_ccm_analog_regs->MISC0);
    }while(0 == (temp &(1 << 15)));

    writel((1<<16),&p_ccm_analog_regs->MISC0_CLR);

}

void ccm_clock_handshake_wait(void)
{
    imx1050_ccm_regs_t         *p_ccm_regs;
    uint32_t                    temp;

    p_ccm_regs = (imx1050_ccm_regs_t *)IMX1050_CCM_BASE;

    do {
        temp = readl(&p_ccm_regs->CDHIPR);
    } while( 0 != temp);

}
