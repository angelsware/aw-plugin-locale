#import <locale/aw_locale.h>
#import <Foundation/Foundation.h>

namespace Locale {
	bool CDevice::getLanguage(char* buffer) {
		NSString *language = [[NSLocale preferredLanguages] firstObject];
		NSDictionary *languageDic = [NSLocale componentsFromLocaleIdentifier:language];
		NSString *languageCode = [languageDic objectForKey:@"kCFLocaleLanguageCodeKey"];
		const char* lang = [languageCode UTF8String];
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
