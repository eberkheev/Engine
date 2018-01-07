
#ifndef ENGINE_PLATFORM_DETECTION_H
#define ENGINE_PLATFORM_DETECTION_H

#include "../Platform.h"

Platform getPlatform()
{
#ifdef _WIN32
	#ifdef _WIN64

	#else

	#endif
#elif __ANDROID__

#elif  __APPLE__
	#include <TargetConditionals.h>
	#if TARGET_IPHONE_SIMULATOR

	#elif TARGET_OS_IPHONE

	#elif TARGET_OS_MAC

	#else

	#endif
#elif __linux__

#elif  __unix__

#endif

	return Platform();
}

#endif //ENGINE_PLATFORM_DETECTION_H