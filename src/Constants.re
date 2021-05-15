// NOTE: this list must be up-to-date with browsers listed in
// test/acceptance/useragentstrings.yml
type browser_aliases_map =
  | AmazonSilk
  | AndroidBrowser
  | Bada
  | BlackBerry
  | Chrome
  | Chromium
  | Electron
  | Epiphany
  | Firefox
  | Focus
  | Generic
  | GoogleSearch
  | Googlebot
  | InternetExplorer
  | KMeleon
  | Maxthon
  | MicrosoftEdge
  | MZBrowser
  | NAVERWhaleBrowser
  | Opera
  | OperaCoast
  | PhantomJS
  | Puffin
  | QupZilla
  | QQ
  | QQLite
  | Safari
  | Sailfish
  | SamsungInternetforAndroid
  | SeaMonkey
  | Sleipnir
  | Swing
  | Tizen
  | UCBrowser
  | Vivaldi
  | WebOSBrowser
  | WeChat
  | YandexBrowser
  | Roku;
let browser_aliases_map =
  fun
  | AmazonSilk => "amazon_silk"
  | AndroidBrowser => "android"
  | Bada => "bada"
  | BlackBerry => "blackberry"
  | Chrome => "chrome"
  | Chromium => "chromium"
  | Electron => "electron"
  | Epiphany => "epiphany"
  | Firefox => "firefox"
  | Focus => "focus"
  | Generic => "generic"
  | GoogleSearch => "google_search"
  | Googlebot => "googlebot"
  | InternetExplorer => "ie"
  | KMeleon => "k_meleon"
  | Maxthon => "maxthon"
  | MicrosoftEdge => "edge"
  | MZBrowser => "mz"
  | NAVERWhaleBrowser => "naver"
  | Opera => "opera"
  | OperaCoast => "opera_coast"
  | PhantomJS => "phantomjs"
  | Puffin => "puffin"
  | QupZilla => "qupzilla"
  | QQ => "qq"
  | QQLite => "qqlite"
  | Safari => "safari"
  | Sailfish => "sailfish"
  | SamsungInternetforAndroid => "samsung_internet"
  | SeaMonkey => "seamonkey"
  | Sleipnir => "sleipnir"
  | Swing => "swing"
  | Tizen => "tizen"
  | UCBrowser => "uc"
  | Vivaldi => "vivaldi"
  | WebOSBrowser => "webos"
  | WeChat => "wechat"
  | YandexBrowser => "yandex"
  | Roku => "roku";

type browser_map = [
  | `amazon_silk
  | `android
  | `bada
  | `blackberry
  | `chrome
  | `chromium
  | `electron
  | `epiphany
  | `firefox
  | `focus
  | `generic
  | `googlebot
  | `google_search
  | `ie
  | `k_meleon
  | `maxthon
  | `edge
  | `mz
  | `naver
  | `opera
  | `opera_coast
  | `phantomjs
  | `puffin
  | `qupzilla
  | `qq
  | `qqlite
  | `safari
  | `sailfish
  | `samsung_internet
  | `seamonkey
  | `sleipnir
  | `swing
  | `tizen
  | `uc
  | `vivaldi
  | `webos
  | `wechat
  | `yandex
];

let browser_map =(~browser_map:browser_map)=> switch(browser_map) {
  | `amazon_silk => `amazon_silk
  | `android => `android
  //   | `bada
  // | `blackberry
  // | `chrome
  // | `chromium
  // | `electron
  // | `epiphany
  // | `firefox
  // | `focus
  // | `generic
  // | `googlebot
  // | `google_search
  // | `ie
  // | `k_meleon
  // | `maxthon
  // | `edge
  // | `mz
  // | `naver
  // | `opera
  // | `opera_coast
  // | `phantomjs
  // | `puffin
  // | `qupzilla
  // | `qq
  // | `qqlite
  // | `safari
  // | `sailfish
  // | `samsung_internet
  // | `seamonkey
  // | `sleipnir
  // | `swing
  // | `tizen
  // | `uc
  // | `vivaldi
  // | `webos
  // | `wechat
  // | `yandex
};
let browser_aliases_map =
  fun
  | `amazon_silk => "Amazon Silk"
  | `android => "Android Browser"
  | `bada => "Bada"
  | `blackberry => "BlackBerry"
  | `chrome => "Chrome"
  | `chromium => "Chromium"
  | `electron => "Electron"
  | `epiphany => "Epiphany"
  | `firefox => "Firefox"
  | `focus => "Focus"
  | `generic => "Generic"
  | `googlebot => "Googlebot"
  | `google_search => "Google Search"
  | `ie => "Internet Explorer"
  | `k_meleon => "K-Meleon"
  | `maxthon => "Maxthon"
  | `edge => "Microsoft Edge"
  | `mz => "MZ Browser"
  | `naver => "NAVER Whale Browser"
  | `opera => "Opera"
  | `opera_coast => "Opera Coast"
  | `phantomjs => "PhantomJS"
  | `puffin => "Puffin"
  | `qupzilla => "QupZilla"
  | `qq => "QQ Browser"
  | `qqlite => "QQ Browser Lite"
  | `safari => "Safari"
  | `sailfish => "Sailfish"
  | `samsung_internet => "Samsung Internet for Android"
  | `seamonkey => "SeaMonkey"
  | `sleipnir => "Sleipnir"
  | `swing => "Swing"
  | `tizen => "Tizen"
  | `uc => "UC Browser"
  | `vivaldi => "Vivaldi"
  | `webos => "WebOS Browser"
  | `wechat => "WeChat"
  | `yandex => "Yandex Browser";

type platforms_map = [ | `tablet | `mobile | `desktop | `tv];

// type os_map = [
//   | `WindowsPhone
//   | `Windows
//   | `MacOS
//   | `iOS
//   | `Android
//   | `WebOS
//   | `BlackBerry
//   | `Bada
//   | `Tizen
//   | `Linux
//   | `ChromeOS
//   | `PlayStation4
//   | `Roku
// ];
// };
let os_map =
  fun
  | `WindowsPhone => "Windows Phone"
  | `Windows => "Windows"
  | `MacOS => "macOS"
  | `iOS => "iOS"
  | `Android => "Android"
  | `WebOS => "WebOS"
  | `BlackBerry => "BlackBerry"
  | `Bada => "Bada"
  | `Tizen => "Tizen"
  | `Linux => "Linux"
  | `ChromeOS => "Chrome OS"
  | `PlayStation4 => "PlayStation 4"
  | `Roku => "Roku";

let engine_map =
  fun
  | `EdgeHTML => "EdgeHTML"
  | `Blink => "Blink"
  | `Trident => "Trident"
  | `Presto => "Presto"
  | `Gecko => "Gecko"
  | `WebKit => "WebKit";

