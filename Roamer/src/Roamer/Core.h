#pragma once

#ifdef RMR_PLATFORM_WINDOWS
	#ifdef RMR_BUILD_DLL
		#define ROAMER_API __declspec(dllexport)
	#else
		#define ROAMER_API __declspec(dllimport)
	#endif // RMR_BUILD_DLL
#else
	#error Roamer only supports Windows right now!!
#endif // RMR_PLATFORM_WINDOWS
