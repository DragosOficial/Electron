#pragma once

#ifdef EL_PLATFORM_WINDOWS
	#ifdef EL_BUILD_DLL
		#define ELECTRON_API __declspec(dllexport)
	#else
		#define ELECTRON_API __declspec(dllimport)
	#endif
#else
	#error Electron wspiera tylko Windowsa!
#endif
