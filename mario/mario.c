/*
 * MarioTCP:  Multi Libvent TCP Server  һ�������ܵ�TCP������
 *
 * mario.h
 *
 *  Created on: 2010-7-4
 *      Author: feng jianhua (johan fong)
 *        Mail: 56683216@qq.com
 *
 *  �޸ļ�¼��
 */
#include "mario.h"

inline void regist_akg_func(uint16 id, FUNC_PTR func) {
	AKG_FUNC[id] = func;
}

inline void regist_connected_func(FUNC_PTR func) {
	AKG_FUNC[g_akg_connected_id] = func;
}

inline void regist_disconnected_func(FUNC_PTR func) {
	AKG_FUNC[g_akg_timeout_id] = func;
	AKG_FUNC[g_akg_closed_id] = func;
	AKG_FUNC[g_akg_error_id] = func;
}

inline void regist_timeout_func(FUNC_PTR func) {
	AKG_FUNC[g_akg_timeout_id] = func;
}

inline void regist_closed_func(FUNC_PTR func) {
	AKG_FUNC[g_akg_closed_id] = func;
}

inline void regist_error_func(FUNC_PTR func) {
	AKG_FUNC[g_akg_error_id] = func;
}

inline void regist_stx(uint32 stx){
	g_stx = stx;
}
