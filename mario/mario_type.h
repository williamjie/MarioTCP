/*
 * MarioTCP:  Multi Libvent TCP Server  һ�������ܵ�TCP������
 *
 * mario_type.h
 *	
 *  ���ƣ���������
 *  
 *  Created on: 2010-6-30
 *      Author: feng jianhua (johan fong)
 *        Mail: 56683216@qq.com
 *
 *  �޸ļ�¼��
 */

#ifndef MARIO_TYPE_H_
#define MARIO_TYPE_H_

#ifdef  LINUX32
typedef int sint32;
typedef unsigned int uint32;
typedef long long sint64;
typedef unsigned long long uint64;
#endif

#ifdef  LINUX64
typedef int sint32;
typedef unsigned int uint32;
typedef long sint64;
typedef unsigned long uint64;
#endif

typedef short sint16;
typedef unsigned short uint16;

//for libevent:begain
typedef unsigned char u_char;
//for libevent:end
typedef unsigned char ubyte;

#endif /* MARIO_TYPE_H_ */
