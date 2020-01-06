# aw-plugin-locale

Locale plugin for Angels' Ware rendering engine.

### Getting Started

Add the **plugins** section to the **config.yaml** file of your project.

```
...

plugins:
- repo: https://github.com/angelsware/aw-plugin-locale.git
```

```
char language[8] = {0};
char countryCode[8] = {0};
Locale::CDevice::getLanguage(language);
Locale::CDevice::getCountry(countryCode);
```
