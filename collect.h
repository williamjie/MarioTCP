/*
 * collect.h
 *	
 *  ���ܣ������ռ����������ݣ������ݿ�ģ����Ӳ�������
 *  
 *  Date: 2013-3-1
 *  Author: feng jianhua (johan fong)
 *  Mail: 56683216@qq.com
 *
 *  �޸ļ�¼��
 */

#ifndef STATS_COLLECT_H_
#define STATS_COLLECT_H_

#include "config.h"


#define NUM_START_TYPE (5)

typedef struct _REPORT {
	uint64 online;
} REPORT;

extern REPORT *report;

/**
 * ��ʼ��ȫ��collect
 */
sint32 init_collect();

sint32 start_collect_thread();

#endif /* STATS_COLLECT_H_ */
