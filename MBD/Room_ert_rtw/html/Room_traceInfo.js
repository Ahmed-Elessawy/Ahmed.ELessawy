function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/In1 */
	this.urlHashMap["Room:2"] = "Room.c:53&Room.h:53";
	/* <Root>/In2 */
	this.urlHashMap["Room:3"] = "Room.c:54&Room.h:54";
	/* <Root>/In3 */
	this.urlHashMap["Room:4"] = "Room.c:55&Room.h:55";
	/* <Root>/In4 */
	this.urlHashMap["Room:5"] = "Room.c:56&Room.h:56";
	/* <Root>/Chart */
	this.urlHashMap["Room:1"] = "Room.c:27,52,215,237&Room.h:46,47,48";
	/* <Root>/Out1 */
	this.urlHashMap["Room:6"] = "Room.c:122,187,204&Room.h:61";
	/* <Root>/Out2 */
	this.urlHashMap["Room:7"] = "Room.c:146,176,199&Room.h:62";
	/* <Root>/Out3 */
	this.urlHashMap["Room:8"] = "Room.c:88&Room.h:63";
	/* <Root>/Out4 */
	this.urlHashMap["Room:9"] = "Room.c:83&Room.h:64";
	/* <S1>:8 */
	this.urlHashMap["Room:1:8"] = "Room.c:76,200";
	/* <S1>:2 */
	this.urlHashMap["Room:1:2"] = "Room.c:95";
	/* <S1>:9 */
	this.urlHashMap["Room:1:9"] = "Room.c:107,147,177";
	/* <S1>:7 */
	this.urlHashMap["Room:1:7"] = "Room.c:123,131,188";
	/* <S1>:13 */
	this.urlHashMap["Room:1:13"] = "Room.c:84,155";
	/* <S1>:1 */
	this.urlHashMap["Room:1:1"] = "Room.c:72,102,114,138,159,163";
	/* <S1>:18 */
	this.urlHashMap["Room:1:18"] = "Room.c:156";
	/* <S1>:5 */
	this.urlHashMap["Room:1:5"] = "Room.c:69";
	/* <S1>:10 */
	this.urlHashMap["Room:1:10"] = "Room.c:173";
	/* <S1>:6 */
	this.urlHashMap["Room:1:6"] = "Room.c:167";
	/* <S1>:15 */
	this.urlHashMap["Room:1:15"] = "Room.c:99";
	/* <S1>:16 */
	this.urlHashMap["Room:1:16"] = "Room.c:111";
	/* <S1>:17 */
	this.urlHashMap["Room:1:17"] = "Room.c:135";
	/* <S1>:11 */
	this.urlHashMap["Room:1:11"] = "Room.c:184";
	/* <S1>:12 */
	this.urlHashMap["Room:1:12"] = "Room.c:195";
	/* <S1>:14 */
	this.urlHashMap["Room:1:14"] = "Room.c:80";
	/* <S1>:19 */
	this.urlHashMap["Room:1:19"] = "Room.c:119";
	/* <S1>:20 */
	this.urlHashMap["Room:1:20"] = "Room.c:143";
	/* <S1>:14:1 */
	this.urlHashMap["Room:1:14:1"] = "Room.c:77,78";
	/* <S1>:13:1 */
	this.urlHashMap["Room:1:13:1"] = "Room.c:85,89";
	/* <S1>:15:1 */
	this.urlHashMap["Room:1:15:1"] = "Room.c:96,97";
	/* <S1>:16:1 */
	this.urlHashMap["Room:1:16:1"] = "Room.c:108,109";
	/* <S1>:19:1 */
	this.urlHashMap["Room:1:19:1"] = "Room.c:116,117";
	/* <S1>:7:1 */
	this.urlHashMap["Room:1:7:1"] = "Room.c:124,189";
	/* <S1>:17:1 */
	this.urlHashMap["Room:1:17:1"] = "Room.c:132,133";
	/* <S1>:20:1 */
	this.urlHashMap["Room:1:20:1"] = "Room.c:140,141";
	/* <S1>:9:1 */
	this.urlHashMap["Room:1:9:1"] = "Room.c:148,178";
	/* <S1>:6:1 */
	this.urlHashMap["Room:1:6:1"] = "Room.c:164,165";
	/* <S1>:10:1 */
	this.urlHashMap["Room:1:10:1"] = "Room.c:170,171";
	/* <S1>:11:1 */
	this.urlHashMap["Room:1:11:1"] = "Room.c:181,182";
	/* <S1>:12:1 */
	this.urlHashMap["Room:1:12:1"] = "Room.c:192,193";
	/* <S1>:8:1 */
	this.urlHashMap["Room:1:8:1"] = "Room.c:201,205";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Room"};
	this.sidHashMap["Room"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "Room:1"};
	this.sidHashMap["Room:1"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/In1"] = {sid: "Room:2"};
	this.sidHashMap["Room:2"] = {rtwname: "<Root>/In1"};
	this.rtwnameHashMap["<Root>/In2"] = {sid: "Room:3"};
	this.sidHashMap["Room:3"] = {rtwname: "<Root>/In2"};
	this.rtwnameHashMap["<Root>/In3"] = {sid: "Room:4"};
	this.sidHashMap["Room:4"] = {rtwname: "<Root>/In3"};
	this.rtwnameHashMap["<Root>/In4"] = {sid: "Room:5"};
	this.sidHashMap["Room:5"] = {rtwname: "<Root>/In4"};
	this.rtwnameHashMap["<Root>/Chart"] = {sid: "Room:1"};
	this.sidHashMap["Room:1"] = {rtwname: "<Root>/Chart"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "Room:6"};
	this.sidHashMap["Room:6"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<Root>/Out2"] = {sid: "Room:7"};
	this.sidHashMap["Room:7"] = {rtwname: "<Root>/Out2"};
	this.rtwnameHashMap["<Root>/Out3"] = {sid: "Room:8"};
	this.sidHashMap["Room:8"] = {rtwname: "<Root>/Out3"};
	this.rtwnameHashMap["<Root>/Out4"] = {sid: "Room:9"};
	this.sidHashMap["Room:9"] = {rtwname: "<Root>/Out4"};
	this.rtwnameHashMap["<S1>:8"] = {sid: "Room:1:8"};
	this.sidHashMap["Room:1:8"] = {rtwname: "<S1>:8"};
	this.rtwnameHashMap["<S1>:2"] = {sid: "Room:1:2"};
	this.sidHashMap["Room:1:2"] = {rtwname: "<S1>:2"};
	this.rtwnameHashMap["<S1>:9"] = {sid: "Room:1:9"};
	this.sidHashMap["Room:1:9"] = {rtwname: "<S1>:9"};
	this.rtwnameHashMap["<S1>:7"] = {sid: "Room:1:7"};
	this.sidHashMap["Room:1:7"] = {rtwname: "<S1>:7"};
	this.rtwnameHashMap["<S1>:13"] = {sid: "Room:1:13"};
	this.sidHashMap["Room:1:13"] = {rtwname: "<S1>:13"};
	this.rtwnameHashMap["<S1>:1"] = {sid: "Room:1:1"};
	this.sidHashMap["Room:1:1"] = {rtwname: "<S1>:1"};
	this.rtwnameHashMap["<S1>:18"] = {sid: "Room:1:18"};
	this.sidHashMap["Room:1:18"] = {rtwname: "<S1>:18"};
	this.rtwnameHashMap["<S1>:5"] = {sid: "Room:1:5"};
	this.sidHashMap["Room:1:5"] = {rtwname: "<S1>:5"};
	this.rtwnameHashMap["<S1>:10"] = {sid: "Room:1:10"};
	this.sidHashMap["Room:1:10"] = {rtwname: "<S1>:10"};
	this.rtwnameHashMap["<S1>:6"] = {sid: "Room:1:6"};
	this.sidHashMap["Room:1:6"] = {rtwname: "<S1>:6"};
	this.rtwnameHashMap["<S1>:15"] = {sid: "Room:1:15"};
	this.sidHashMap["Room:1:15"] = {rtwname: "<S1>:15"};
	this.rtwnameHashMap["<S1>:16"] = {sid: "Room:1:16"};
	this.sidHashMap["Room:1:16"] = {rtwname: "<S1>:16"};
	this.rtwnameHashMap["<S1>:17"] = {sid: "Room:1:17"};
	this.sidHashMap["Room:1:17"] = {rtwname: "<S1>:17"};
	this.rtwnameHashMap["<S1>:11"] = {sid: "Room:1:11"};
	this.sidHashMap["Room:1:11"] = {rtwname: "<S1>:11"};
	this.rtwnameHashMap["<S1>:12"] = {sid: "Room:1:12"};
	this.sidHashMap["Room:1:12"] = {rtwname: "<S1>:12"};
	this.rtwnameHashMap["<S1>:14"] = {sid: "Room:1:14"};
	this.sidHashMap["Room:1:14"] = {rtwname: "<S1>:14"};
	this.rtwnameHashMap["<S1>:19"] = {sid: "Room:1:19"};
	this.sidHashMap["Room:1:19"] = {rtwname: "<S1>:19"};
	this.rtwnameHashMap["<S1>:20"] = {sid: "Room:1:20"};
	this.sidHashMap["Room:1:20"] = {rtwname: "<S1>:20"};
	this.rtwnameHashMap["<S1>:14:1"] = {sid: "Room:1:14:1"};
	this.sidHashMap["Room:1:14:1"] = {rtwname: "<S1>:14:1"};
	this.rtwnameHashMap["<S1>:13:1"] = {sid: "Room:1:13:1"};
	this.sidHashMap["Room:1:13:1"] = {rtwname: "<S1>:13:1"};
	this.rtwnameHashMap["<S1>:15:1"] = {sid: "Room:1:15:1"};
	this.sidHashMap["Room:1:15:1"] = {rtwname: "<S1>:15:1"};
	this.rtwnameHashMap["<S1>:16:1"] = {sid: "Room:1:16:1"};
	this.sidHashMap["Room:1:16:1"] = {rtwname: "<S1>:16:1"};
	this.rtwnameHashMap["<S1>:19:1"] = {sid: "Room:1:19:1"};
	this.sidHashMap["Room:1:19:1"] = {rtwname: "<S1>:19:1"};
	this.rtwnameHashMap["<S1>:7:1"] = {sid: "Room:1:7:1"};
	this.sidHashMap["Room:1:7:1"] = {rtwname: "<S1>:7:1"};
	this.rtwnameHashMap["<S1>:17:1"] = {sid: "Room:1:17:1"};
	this.sidHashMap["Room:1:17:1"] = {rtwname: "<S1>:17:1"};
	this.rtwnameHashMap["<S1>:20:1"] = {sid: "Room:1:20:1"};
	this.sidHashMap["Room:1:20:1"] = {rtwname: "<S1>:20:1"};
	this.rtwnameHashMap["<S1>:9:1"] = {sid: "Room:1:9:1"};
	this.sidHashMap["Room:1:9:1"] = {rtwname: "<S1>:9:1"};
	this.rtwnameHashMap["<S1>:6:1"] = {sid: "Room:1:6:1"};
	this.sidHashMap["Room:1:6:1"] = {rtwname: "<S1>:6:1"};
	this.rtwnameHashMap["<S1>:10:1"] = {sid: "Room:1:10:1"};
	this.sidHashMap["Room:1:10:1"] = {rtwname: "<S1>:10:1"};
	this.rtwnameHashMap["<S1>:11:1"] = {sid: "Room:1:11:1"};
	this.sidHashMap["Room:1:11:1"] = {rtwname: "<S1>:11:1"};
	this.rtwnameHashMap["<S1>:12:1"] = {sid: "Room:1:12:1"};
	this.sidHashMap["Room:1:12:1"] = {rtwname: "<S1>:12:1"};
	this.rtwnameHashMap["<S1>:8:1"] = {sid: "Room:1:8:1"};
	this.sidHashMap["Room:1:8:1"] = {rtwname: "<S1>:8:1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
