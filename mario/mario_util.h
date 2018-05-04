/*
 * MarioTCP:  Multi Libvent TCP Server  һ�������ܵ�TCP������
 *
 * mario_util.h
 *	
 *  ���ƣ����߷���
 *  ���ܣ��ṩһЩ���÷���
 *  
 *  Created on: 2010-7-1
 *      Author: feng jianhua (johan fong)
 *        Mail: 56683216@qq.com
 *
 *  �޸ļ�¼��
 */

#ifndef MARIO_UTIL_H_
#define MARIO_UTIL_H_

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "mario_type.h"
#include <signal.h>

/*
 * ����sleep
 */
void nsleep(uint32 ns);

/*
 * ���΢��sleep
 */
void susleep(uint32 s, uint32 us);

/*
 ����:����·��
 ����:���ó����̨����
 */
void run_daemon();

/*
 ����:�ź�
 ����:�����źż���
 */
typedef void (*sighandler_t)(int);
void signal_handler(int sig, sighandler_t handler);

#endif /* MARIO_UTIL_H_ */
