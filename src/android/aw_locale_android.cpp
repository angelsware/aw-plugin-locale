#include <locale/aw_locale.h>
#include <platform/android/aw_jnifunction.h>
#include <platform/android/aw_jni.h>
#include <cstring>

namespace Locale {
	bool CDevice::getLanguage(char* buffer) {
		if (jclass clazz = Platform::CJniFunction::getClass("com/angelsware/locale/Locale")) {
			if (jmethodID method = Platform::CJniFunction::getMethod(clazz, "getLanguage", "()Ljava/lang/String;")) {
				if (jobject object = Platform::CJni::getEnv()->CallStaticObjectMethod(clazz, method)) {
					if (const char* str = Platform::CJni::getEnv()->GetStringUTFChars(reinterpret_cast<jstring>(object), 0)) {
						strcpy(buffer, str);
						return true;
					}
				}
			}
		}
		return false;
	}

	bool CDevice::getCountry(char* buffer) {
		if (jclass clazz = Platform::CJniFunction::getClass("com/angelsware/locale/Locale")) {
			if (jmethodID method = Platform::CJniFunction::getMethod(clazz, "getCountry", "()Ljava/lang/String;")) {
				if (jobject object = Platform::CJni::getEnv()->CallStaticObjectMethod(clazz, method)) {
					if (const char* str = Platform::CJni::getEnv()->GetStringUTFChars(reinterpret_cast<jstring>(object), 0)) {
						strcpy(buffer, str);
						return true;
					}
				}
			}
		}
		return false;
	}
}
