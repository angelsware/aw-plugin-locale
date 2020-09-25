#import <locale/aw_locale.h>
#import <Foundation/Foundation.h>

namespace Locale {
	bool CDevice::getLanguage(char* buffer) {
        NSString *language = [[NSLocale preferredLanguages] objectAtIndex:0];
        const char* lang = [language UTF8String];
        strcpy(buffer, lang);
		return true;
	}

	bool CDevice::getCountry(char* buffer) {
        NSLocale *currentLocale = [NSLocale currentLocale];
        NSString *countryCode = [currentLocale objectForKey:NSLocaleCountryCode];
        if (countryCode != nil) {
            const char* lang = [countryCode UTF8String];
            strcpy(buffer, lang);
            return true;
        }
        return false;
	}
}
