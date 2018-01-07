project(Engine)

set(SOURCE_FILES main.cpp Platform/PlatformDetection/PlatformDetection.h Platform/Platform.h Windows/Types/Types.h Platform/Types/SharedTypes.h)

add_library(Engine STATIC ${SOURCE_FILES})