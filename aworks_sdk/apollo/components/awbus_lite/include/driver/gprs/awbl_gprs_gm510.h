/*******************************************************************************
*                                    AWorks
*                         ----------------------------
*                         innovating embedded platform
*
* Copyright (c) 2001-2020 Guangzhou ZHIYUAN Electronics Co., Ltd.
* All rights reserved.
*
* Contact information:
* web site:    https://www.zlg.cn
*******************************************************************************/

/**
 * \file
 * \brief GM510CEFILG ģ������ͷ�ļ�
 */

#ifndef __AWBL_GPRS_GM510_H__
#define __AWBL_GPRS_GM510_H__


#ifdef __cplusplus
extern "C" {
#endif  /* __cplusplus  */

#include "aworks.h"
#include "awbl_gprs.h"

#if AWBL_GPRS_USE_LWIP_2_X
#include "netif/ppp/ppp.h"
#else
#include "ppp/ppp.h"
#endif

#define AWBL_GPRS_GM510_NAME   "gosuncn_gm510"

/** \brief GM510�豸״̬ */
typedef enum gm510_status {
    /** \brief ģ��������λ */
    AWBL_GPRS_GM510_RST_ON             = 0x00000001,
    /** \brief �ڲ�Э��ջ��ppp����  */
    AWBL_GPRS_GM510_GPRS_PPP_OK        = 0x00000001<<3,
    /** \brief gprs��PDP�������  */
    AWBL_GPRS_GM510_GPRS_PDP_OK        = 0x00000001<<5,
    /** \brief SIM������ �����sim���������ź�������ȴ���������ţ���Ƿ�ѣ� */
    AWBL_GPRS_GM510_SIM_OK             = 0x00000001<<6,
} awbl_gprs_gm510_status_e;

/** \brief GM510�豸��Ϣ*/
struct awbl_gprs_gm510_devinfo {

    /** \brief gprs�豸��ΨһID�����ڸ��м���ȡ�豸 */
    int      id;
    char    *buf;
    size_t   buf_size;

    /** \brief gprsģ��Ĳ��� */
    struct awbl_gprs_info       *p_gprs_info;

    /** \brief ���ŵ����ݺ���Ϣ */
    struct aw_gprs_sms_buf      *p_sms_info;

    /** \brief �û�������Ϣ */
    awbl_gprs_usbh_info         *p_usbh_info;
    
    void (*pfn_init) (void);
};

/** \brief GM510�豸���ƽṹ�� */
struct awbl_gprs_gm510_dev {
    struct awbl_dev                       dev;              /**< \brief �����豸*/
    struct awbl_gprs_dev                  gprs;             /**< \brief GPRS�ṹ��*/
    const struct awbl_gprs_gm510_devinfo *p_devinfo;        /**< \brief GM510�豸��Ϣ*/
    int                                   status;           /**< \brief �豸��״̬ */
    void                                 *p_pipe;           /**< \brief GM510 AT�ܵ����*/
    struct ip_addr                        ppp_ipaddr;       /**< \brief ��������� IP��ַ */
    AW_SEMB_DECL(                         lock);            /**< \brief �ź��� */

    uint8_t                               net_mode;
    uint8_t                               init_step;        /**< \brief ��ǰ��ʼ�����ڲ��� */

    /** \brief ʹ���ڲ�Э��ջʱ��socket����    */
    #define __INTERNAL_SOCKET_NUM         5
    /** \brief ʹ���ڲ�Э��ջʱ��socket��ֵ   */
    #define __INTERNAL_SOCKET_VAL         {1,2,3,4,5}
    uint8_t                               socket[__INTERNAL_SOCKET_NUM];
    uint8_t                               socket_used[__INTERNAL_SOCKET_NUM];
    /** \brief GNSS ��ر��� */
    void                                 *gnss_pipe;        /**< \brief GNSS ��عܵ�*/
};

void awbl_gprs_gm510_drv_register (void);


/** @}  grp_aw_if_gprs_gm510 */

#ifdef __cplusplus
}
#endif /* __cplusplus   */

#endif /* __AWBL_GPRS_GM510_H__ */
