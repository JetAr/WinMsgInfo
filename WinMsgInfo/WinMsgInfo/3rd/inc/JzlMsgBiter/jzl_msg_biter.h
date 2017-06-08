#pragma once

//#include <memory>

#ifdef _MSC_VER
#	ifdef JZL_INTERFACE_STATIC
#		define EXPORT_API
#	elif defined(JZL_INTERFACE_EXPORTS)
#		define EXPORT_API __declspec(dllexport)
#	else
#		define EXPORT_API __declspec(dllimport)
#	endif
#else
#	define EXPORT_API
#endif

struct IJzlMsgBiter
{
	virtual TCHAR* msg(const UINT msg_id) = 0;
	virtual void release() = 0;
	virtual ~IJzlMsgBiter();
};

typedef IJzlMsgBiter* PIJzlMsgBiter;

#ifdef  __cplusplus
extern "C" {
#endif

EXPORT_API PIJzlMsgBiter jzl_get_msg_biter();

#ifdef  __cplusplus
}
#endif
