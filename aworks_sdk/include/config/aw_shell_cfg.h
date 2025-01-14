/*******************************************************************************
*                                 AWorks
*                       ----------------------------
*                       innovating embedded platform
*
* Copyright (c) 2001-2017 Guangzhou ZHIYUAN Electronics Co., Ltd.
* All rights reserved.
*
* Contact information:
* web site:    http://www.zlg.cn
* e-mail:      support@zlg.cn
*******************************************************************************/

/**
 * @file
 * @brief
 *
 * @internal
 * @par History
 * - 170619, vih, first implementation.
 * @endinternal
 */

#ifndef __AW_SHELL_CFG_H
#define __AW_SHELL_CFG_H

#ifdef __cplusplus
extern "C" {
#endif

/**
 * \addtogroup grp_aw_if_shell_cfg
 * \copydoc aw_shell_cfg.h
 * @{
 */

/** \brief shellʹ�� */ 
#define SHELL_ENABLED               1
#if SHELL_ENABLED
#define AW_SHELL_ENABLED
#endif

/** \brief shell line buf size */
#define AW_SHELL_LINE_SIZE             256

/** \brief Use cursor */
#define SHELL_USE_CURSOR            1
#if SHELL_USE_CURSOR
#define AW_SHELL_USE_CURSOR
#endif

/** \brief Use color */
#define SHELL_USE_COLOR             1
#if SHELL_USE_COLOR
#define AW_SHELL_USE_COLOR
#endif

/** \brief Use string completion */
#define SHELL_USE_COMPLETE          1
#if SHELL_USE_COMPLETE
#define AW_SHELL_USE_COMPLETE
#endif

/** \brief Use chart */
#define SHELL_USE_CHART             1
#if SHELL_USE_CHART
#define AW_SHELL_USE_CHART
#endif

/** \brief Use command set */
#define SHELL_USE_CMDSET            1
#if SHELL_USE_CMDSET
#define AW_SHELL_USE_CMDSET
#endif

/** \brief Use history */
#define SHELL_USE_HISTORY           1
#if SHELL_USE_HISTORY
#define AW_SHELL_USE_HISTORY
#endif

/**< \brief Use history count */
//#define AW_SHELL_HISTORY_COUNT         1000u

/** @} grp_aw_if_shell_cfg */

#ifdef __cplusplus
}
#endif

#endif  /* __AW_SHELL_CFG_H */

/* end of file */

