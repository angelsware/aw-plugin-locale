package com.angelsware.locale;

public class Locale {
	public static String getLanguage() {
		return java.util.Locale.getDefault().getLanguage();
	}

	public static String getCountry() {
		return java.util.Locale.getDefault().getCountry();
	}
}
