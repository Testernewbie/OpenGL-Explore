//File: geplatform.h
#ifndef __GE_PLATFORM
#define __GE_PLATFORM
#define __GE_WINDOWS 0x1
#define __GE_ANDROID 0x2
#define __GE_CURRENT_PLATFORM __GE_WINDOWS
#if __GE_CURRENT_PLATFORM == __GE_WINDOWS
#define __GE_WINDOWS_MODE_LOG
#define __GE_WINDOWS_MODE_LOG_DEBUG
#include <Windows.h>
#else //!__GE_WINDOWS
#endif //!__GE_ANDROID
#endif