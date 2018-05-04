/*
 * MarioTCP:  Multi Libvent TCP Server  һ�������ܵ�TCP������
 *
 * mario_akg.h
 *	
 *  ���ƣ�ҵ���߼�����ģ��
 *  ���ܣ���������ҵ���߼������մ�����
 *  
 *  Created on: 2010-6-30
 *      Author: feng jianhua (johan fong)
 *        Mail: 56683216@qq.com
 *
 *  �޸ļ�¼��
 */

#ifndef MARIO_AKG_H_
#define MARIO_AKG_H_
#include "mario_type.h"
#include "mario_conn.h"

#define MAX_PKG_TYPE (0xffff)
extern const uint16 g_akg_connected_id;
extern const uint16 g_akg_timeout_id;
extern const uint16 g_akg_closed_id;
extern const uint16 g_akg_error_id;

typedef sint32 (*FUNC_PTR)(CONN* c);

extern FUNC_PTR AKG_FUNC[MAX_PKG_TYPE];

#pragma pack(1)
typedef struct _HEAD {
	uint32 stx;
	uint16 pkglen;
	uint16 akg_id;
} HEAD;
#pragma pack()
#define DEFAULT_STX	(0xffffffff)
extern uint32 g_stx;
#define SIZE_OF_HEAD	((uint16) 8)

#endif /* MARIO_AKG_H_ */
