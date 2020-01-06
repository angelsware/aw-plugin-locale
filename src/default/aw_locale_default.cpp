#include <locale/aw_locale.h>
#include <cstring>

namespace Locale {
	bool CDevice::getLanguage(char* buffer) {
		strcpy(buffer, "en");
		return true;
	}

	bool CDevice::getCountry(char* buffer) {
		strcpy(buffer, "US");
		return true;
	}
}
