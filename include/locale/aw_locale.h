#ifndef __AW_LOCALE_H__
#define __AW_LOCALE_H__

namespace Locale {
	class CDevice
	{
	public:
		static bool getLanguage(char* buffer);
		static bool getCountry(char* buffer);
	};
}

#endif
