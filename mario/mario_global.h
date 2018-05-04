/*
 * MarioTCP:  Multi Libvent TCP Server  һ�������ܵ�TCP������
 *
 * mario_global.h
 *	
 *  ���ƣ�p2pȫ�ֶ����ļ�
 *  ���ܣ�����ȫ�ֱ������������
 *  
 *  Created on: 2010-6-30
 *      Author: feng jianhua (johan fong)
 *        Mail: 56683216@qq.com
 *
 *  �޸ļ�¼��
 */

#ifndef MARIO_GLOBAL_H_
#define MARIO_GLOBAL_H_

#include "mario_type.h"

#define MAX_CONN_ARRAY_SIZE (131072) //1024 * 128
#define	CONN_BUF_LEN	(2048)
#define	MAX_BUF_READ_LEN	(1791) //CONN_BUF_LEN - 257
#define	MAX_PKG_LEN	(1500)
#endif /* MARIO_GLOBAL_H_ */
