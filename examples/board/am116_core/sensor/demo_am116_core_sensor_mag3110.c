/*******************************************************************************
*                                 AMetal
*                       ----------------------------
*                       innovating embedded platform
*
* Copyright (c) 2001-2018 Guangzhou ZHIYUAN Electronics Co., Ltd.
* All rights reserved.
*
* Contact information:
* web site:    http://www.zlg.cn/
*******************************************************************************/

/**
 * \file
 * \brief ���������� MAG3110 ���̣�ͨ����׼�ӿ�ʵ��(ͨ����ѯ��ʽ��ȡ����)
 *
 * - ʵ������
 *   1. ÿ��һ�룬ͨ�����ڴ�ӡ����Ŵ��������¶ȵ�ֵ
 *
 * \par Դ����
 * \snippet demo_am116_core_sensor_mag3110.c src_am116_core_sensor_mag3110
 *
 * \internal
 * \par Modification history
 * - 1.00 19-07-03  fzb, first implementation
 * \endinternal
 */

#include "am_sensor.h"
#include "am_hwconf_sensor_mag3110.h"
#include "demo_std_entries.h"
#include "demo_am116_core_entries.h"

/**
 * \brief �������������
 */
void demo_am116_core_sensor_mag3110_entry (void)
{
    am_sensor_handle_t handle = am_sensor_mag3110_inst_init();

    demo_std_mag3110_entry(handle);
}


/* end of file */