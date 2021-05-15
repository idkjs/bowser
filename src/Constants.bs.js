'use strict';


function browser_map(browser_map$1) {
  if (browser_map$1 === "amazon_silk") {
    return "amazon_silk";
  }
  if (browser_map$1 === "android") {
    return "android";
  }
  throw {
        RE_EXN_ID: "Match_failure",
        _1: [
          "Constants.re",
          126,
          46
        ],
        Error: new Error()
      };
}

function browser_aliases_map(param) {
  if (param === "chrome") {
    return "Chrome";
  } else if (param === "edge") {
    return "Microsoft Edge";
  } else if (param === "webos") {
    return "WebOS Browser";
  } else if (param === "chromium") {
    return "Chromium";
  } else if (param === "electron") {
    return "Electron";
  } else if (param === "blackberry") {
    return "BlackBerry";
  } else if (param === "googlebot") {
    return "Googlebot";
  } else if (param === "phantomjs") {
    return "PhantomJS";
  } else if (param === "vivaldi") {
    return "Vivaldi";
  } else if (param === "k_meleon") {
    return "K-Meleon";
  } else if (param === "seamonkey") {
    return "SeaMonkey";
  } else if (param === "sleipnir") {
    return "Sleipnir";
  } else if (param === "samsung_internet") {
    return "Samsung Internet for Android";
  } else if (param === "sailfish") {
    return "Sailfish";
  } else if (param === "maxthon") {
    return "Maxthon";
  } else if (param === "amazon_silk") {
    return "Amazon Silk";
  } else if (param === "puffin") {
    return "Puffin";
  } else if (param === "firefox") {
    return "Firefox";
  } else if (param === "wechat") {
    return "WeChat";
  } else if (param === "epiphany") {
    return "Epiphany";
  } else if (param === "ie") {
    return "Internet Explorer";
  } else if (param === "mz") {
    return "MZ Browser";
  } else if (param === "qq") {
    return "QQ Browser";
  } else if (param === "uc") {
    return "UC Browser";
  } else if (param === "yandex") {
    return "Yandex Browser";
  } else if (param === "focus") {
    return "Focus";
  } else if (param === "swing") {
    return "Swing";
  } else if (param === "qqlite") {
    return "QQ Browser Lite";
  } else if (param === "qupzilla") {
    return "QupZilla";
  } else if (param === "tizen") {
    return "Tizen";
  } else if (param === "naver") {
    return "NAVER Whale Browser";
  } else if (param === "safari") {
    return "Safari";
  } else if (param === "android") {
    return "Android Browser";
  } else if (param === "google_search") {
    return "Google Search";
  } else if (param === "opera") {
    return "Opera";
  } else if (param === "generic") {
    return "Generic";
  } else if (param === "opera_coast") {
    return "Opera Coast";
  } else {
    return "Bada";
  }
}

function os_map(param) {
  if (param === "BlackBerry") {
    return "BlackBerry";
  } else if (param === "Android") {
    return "Android";
  } else if (param === "iOS") {
    return "iOS";
  } else if (param === "Linux") {
    return "Linux";
  } else if (param === "MacOS") {
    return "macOS";
  } else if (param === "Tizen") {
    return "Tizen";
  } else if (param === "ChromeOS") {
    return "Chrome OS";
  } else if (param === "WindowsPhone") {
    return "Windows Phone";
  } else if (param === "Bada") {
    return "Bada";
  } else if (param === "Windows") {
    return "Windows";
  } else if (param === "PlayStation4") {
    return "PlayStation 4";
  } else if (param === "Roku") {
    return "Roku";
  } else {
    return "WebOS";
  }
}

function engine_map(param) {
  if (param === "Presto") {
    return "Presto";
  } else if (param === "Trident") {
    return "Trident";
  } else if (param === "Gecko") {
    return "Gecko";
  } else if (param === "EdgeHTML") {
    return "EdgeHTML";
  } else if (param === "WebKit") {
    return "WebKit";
  } else {
    return "Blink";
  }
}

exports.browser_map = browser_map;
exports.browser_aliases_map = browser_aliases_map;
exports.os_map = os_map;
exports.engine_map = engine_map;
/* No side effect */
