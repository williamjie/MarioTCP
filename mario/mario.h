/*
 * MarioTCP:  Multi Libvent TCP Server  һ�������ܵ�TCP������
 *
 * mario.h
 *	
 *  ���ƣ�mario�ӿ�ģ��
 *  ���ܣ�mario��Ч���紦���ܵĽӿ�
 *  
 *  Created on: 2010-7-4
 *      Author: feng jianhua (johan fong)
 *        Mail: 56683216@qq.com
 *
 *  �޸ļ�¼��
 */

#ifndef MARIO_H_
#define MARIO_H_
#include "mario_global.h"
#include "mario_type.h"
#include "mario_log.h"
#include "mario_conn.h"
#include "mario_network.h"
#include "mario_akg.h"
#include "mario_util.h"

extern SERVER* init_server(int port, uint16 workernum, uint32 connnum, int read_timeout, int write_timeout);

extern void* start_server(void* arg);

extern void close_err_conn(CONN *c);

extern void close_conn(CONN *c, uint16 akg_id);

/**
 *	ע��ҵ������
 */
void regist_akg_func(uint16 id, FUNC_PTR func);

/**
 *	ע����ܿͻ�������ʱ��Ӧ����
 */
void regist_connected_func(FUNC_PTR func);

/**
 *	ע��ͻ��˶Ͽ�������
 */
void regist_disconnected_func(FUNC_PTR func);

/**
 *	ע�����糬ʱ������
 */
void regist_timeout_func(FUNC_PTR func);

/**
 *	ע��ͻ������ӹرմ�����
 */
void regist_closed_func(FUNC_PTR func);

/**
 *	ע�������������
 */
void regist_error_func(FUNC_PTR func);

/**
 * ע���û��Զ���ͷ����ͬ������
 */
void regist_stx(uint32 stx);

#endif /* MARIO_H_ */
