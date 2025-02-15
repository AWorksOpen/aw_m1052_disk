/*******************************************************************************
*                                    AWorks
*                         ----------------------------
*                         innovating embedded platform
*
* Copyright (c) 2001-2019 Guangzhou ZHIYUAN Electronics Co., Ltd.
* All rights reserved.
*
* Contact information:
* web site:    https:/*www.zlg.cn
*******************************************************************************/

/**
 * \file
 * \brief 
 *
 * \internal
 * \par History
 * - 1.00 14-09-23  orz, first implementation.
 * \endinternal
 */
 
#include "rtk.h"
#include "arch/arm/armv4/asm/io.h"
#include "armv7_context.h"

#ifndef ROUND_DOWN
#define ROUND_DOWN(p, d)        (((int)(p)) & (~((d)-1)))
#endif
#ifndef ROUND_UP
#define ROUND_UP(x, align)      (((int) (x) + ((align) - 1)) & ~((align) - 1))
#endif

#define CPSR_REG_INIT_VALUE     (CPSR_FLAG_FIQ_MASK|CPSR_MODE_SYSTEM)

unsigned int rt_thread_switch_interrupt_flag;


unsigned char *rtk_arch_stack_init(
        void *tentry,
        void *a,
        void *b,
        char *stack_low,
        char *stack_high,
        void *texit,
        rtk_task_option_t option)
{
    uint32_t                    *p;

#if __RTK_ARMV7_USE_FPU
    unsigned long               flag;
#endif

    stack_high -= sizeof(int);
    p = (uint32_t *)ROUND_DOWN(stack_high, 8);
    p --;

    /*
     *  r0-r12, lr, pc
     */
    *p-- = (int)tentry; /* pc */
    *p-- = (int)texit;  /* lr */
    *p-- = 0xcccccccc;  /* r12*/
    *p-- = 0xbbbbbbbb;  /* r11 */
    *p-- = 0xaaaaaaaa;  /* r10 */
    *p-- = 0x99999999;  /* r9 */
    *p-- = 0x88888888;  /* r8 */
    *p-- = 0x77777777;  /* r7 */
    *p-- = 0x66666666;  /* r6 */
    *p-- = 0x55555555;  /* r5 */
    *p-- = 0x44444444;  /* r4*/
    *p-- = 0x33333333;  /* r3*/
    *p-- = 0x22222222;  /* r2*/
    *p-- = (int)b;      /* r1: arg1 of function task_entry_exit */
    *p-- = (int)a;      /* r0: arg0 of function task_entry_exit */

     if ( (int)tentry & 0x00000001 ) {
        *p = CPSR_REG_INIT_VALUE|CPSR_FLAG_THUMB;   /* cpsr */
     } else {
        *p = CPSR_REG_INIT_VALUE;                   /* cpsr */
     }

      /* 线程初始化不使能浮点运算器，使用特权模式*/
#if __RTK_ARMV7_USE_FPU
    flag = 0;
    p--;
   *p = flag;
#endif

    /*
     *  full stack pointer
     */
    return (unsigned char *)p;
}


void armv7_vfp_init(void);

void rtk_arch_init()
{
    armv7_vfp_init();
}

/* end of file*/
