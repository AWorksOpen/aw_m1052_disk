/*******************************************************************************
*                                    AWorks
*                         ----------------------------
*                         innovating embedded platform
*
* Copyright (c) 2001-2019 Guangzhou ZHIYUAN Electronics Co., Ltd.
* All rights reserved.
*
* Contact information:
* web site:    https://www.zlg.cn
*******************************************************************************/

/**
 * \file
 * \brief serial device method define
 *
 * \internal
 * \par modification history:
 * - 1.00 12-10-05 zyr, first implemetation
 * \endinternal
 */

#include <apollo.h>
#include <awbus_lite.h>

/** \brief AWBus method, used to get a AWBus ADC service
 *
 *    a driver can implement the method 'awbl_adcserv_get'
 * to provide a AWBus ADC service. The method hander should return 
 * a pointer of a valid AWbus ADC service instance form the argument 'p_arg'.
 *
 * \par ����
 * \code
 * aw_err_t awbl_method_handler_adc_service_get (struct awbl_dev *p_dev, void *p_arg)
 * {
 *      struct awbl_adc_service *p_serv;
 *
 *      // get adc service instance memory
 *      p_serv = __get_adc_serv(p_dev);
 *
 *      // initialize the adc service instance
 *      p_serv->p_servinfo  = __get_adc_serv(p_dev);
 *      p_serv->p_servfuncs = &__g_adc_servfuncs;
 *      p_serv->p_inst      = (void *)p_dev;
 *
 *      // send back the service instance 
 *      *(struct awbl_adc_service **)p_arg = p_serv;
 *      return AW_OK
 * }
 * \endcode
 */
AWBL_METHOD_DEF(awbl_adcserv_get, "awbl_adcserv_get");

/* end of file */
