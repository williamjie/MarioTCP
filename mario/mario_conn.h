/*
 * MarioTCP:  Multi Libvent TCP Server  һ�������ܵ�TCP������
 *
 * mario_conn.h
 *	
 *  ���ƣ��������ӹ���
 *  ���ܣ������������ӵ����ݽṹ���㷨����network��ģ�齻����Ϣʹ��
 *  
 *  Created on: 2010-6-30
 *      Author: feng jianhua (johan fong)
 *        Mail: 56683216@qq.com
 *
 *  �޸ļ�¼��
 *  ��1��2010-7-14 conn�������������Ϣ���û������Ϣ�����ߴ�����
 */

#ifndef MARIO_CONN_H_
#define MARIO_CONN_H_
#include <stdlib.h>
#include <string.h>
#include "mario_global.h"
#include <event.h>

typedef struct _CONN CONN;
typedef struct _CONN_LIST CONN_LIST;
typedef struct _WORKER WORKER;

struct _CONN {
	int fd;
	struct bufferevent *bufev;
	uint32 ind;
	char in_buf[CONN_BUF_LEN];
	uint16 in_buf_len;
	char out_buf[CONN_BUF_LEN];
	uint16 out_buf_len;
	CONN *next;
	WORKER *owner;
	uint32 cip;
	uint16 cport;
	uint16 err_type;
	void *user;
};

struct _CONN_LIST {
	CONN *head;
	CONN *tail;
	CONN list[0];
};

CONN_LIST* init_conn_list(uint32 size);

#define PUT_FREE_CONN(list, item)	\
		list->tail->next = item;	\
		list->tail = item;
#define	GET_FREE_CONN(list, item)	\
		if(list->head != list->tail){	\
			item = list->head;	\
			list->head = list->head->next;	\
		} else {	\
			item = NULL;\
		}

#endif /* MARIO_CONN_H_ */
