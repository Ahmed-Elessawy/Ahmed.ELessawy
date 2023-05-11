function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/In1 */
	this.urlHashMap["SubSystemLed:63"] = "SubSystemLed.c:63&SubSystemLed.h:45";
	/* <Root>/Chart */
	this.urlHashMap["SubSystemLed:48"] = "SubSystemLed.c:62,86";
	/* <Root>/Function-Call
Generator */
	this.urlHashMap["SubSystemLed:43"] = "SubSystemLed.c:59,87";
	/* <Root>/Triggered
Subsystem */
	this.urlHashMap["SubSystemLed:54"] = "SubSystemLed.c:60";
	/* <Root>/Out1 */
	this.urlHashMap["SubSystemLed:62"] = "SubSystemLed.c:72,80&SubSystemLed.h:50";
	/* <S1>:1 */
	this.urlHashMap["SubSystemLed:48:1"] = "SubSystemLed.c:68";
	/* <S1>:2 */
	this.urlHashMap["SubSystemLed:48:2"] = "SubSystemLed.c:73";
	/* <S1>:3 */
	this.urlHashMap["SubSystemLed:48:3"] = "SubSystemLed.c:81";
	/* <S1>:4 */
	this.urlHashMap["SubSystemLed:48:4"] = "SubSystemLed.c:74";
	/* <S1>:5 */
	this.urlHashMap["SubSystemLed:48:5"] = "SubSystemLed.c:78";
	/* <S1>:6 */
	this.urlHashMap["SubSystemLed:48:6"] = "SubSystemLed.c:88";
	/* <S1>:2:1 */
	this.urlHashMap["SubSystemLed:48:2:1"] = "SubSystemLed.c:69,70";
	/* <S1>:4:1 */
	this.urlHashMap["SubSystemLed:48:4:1"] = "SubSystemLed.c:75";
	/* <S1>:3:1 */
	this.urlHashMap["SubSystemLed:48:3:1"] = "SubSystemLed.c:82";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "SubSystemLed"};
	this.sidHashMap["SubSystemLed"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "SubSystemLed:48"};
	this.sidHashMap["SubSystemLed:48"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "SubSystemLed:54"};
	this.sidHashMap["SubSystemLed:54"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<Root>/In1"] = {sid: "SubSystemLed:63"};
	this.sidHashMap["SubSystemLed:63"] = {rtwname: "<Root>/In1"};
	this.rtwnameHashMap["<Root>/Chart"] = {sid: "SubSystemLed:48"};
	this.sidHashMap["SubSystemLed:48"] = {rtwname: "<Root>/Chart"};
	this.rtwnameHashMap["<Root>/Function-Call Generator"] = {sid: "SubSystemLed:43"};
	this.sidHashMap["SubSystemLed:43"] = {rtwname: "<Root>/Function-Call Generator"};
	this.rtwnameHashMap["<Root>/Lamp"] = {sid: "SubSystemLed:61"};
	this.sidHashMap["SubSystemLed:61"] = {rtwname: "<Root>/Lamp"};
	this.rtwnameHashMap["<Root>/Triggered Subsystem"] = {sid: "SubSystemLed:54"};
	this.sidHashMap["SubSystemLed:54"] = {rtwname: "<Root>/Triggered Subsystem"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "SubSystemLed:62"};
	this.sidHashMap["SubSystemLed:62"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<S1>:1"] = {sid: "SubSystemLed:48:1"};
	this.sidHashMap["SubSystemLed:48:1"] = {rtwname: "<S1>:1"};
	this.rtwnameHashMap["<S1>:2"] = {sid: "SubSystemLed:48:2"};
	this.sidHashMap["SubSystemLed:48:2"] = {rtwname: "<S1>:2"};
	this.rtwnameHashMap["<S1>:3"] = {sid: "SubSystemLed:48:3"};
	this.sidHashMap["SubSystemLed:48:3"] = {rtwname: "<S1>:3"};
	this.rtwnameHashMap["<S1>:4"] = {sid: "SubSystemLed:48:4"};
	this.sidHashMap["SubSystemLed:48:4"] = {rtwname: "<S1>:4"};
	this.rtwnameHashMap["<S1>:5"] = {sid: "SubSystemLed:48:5"};
	this.sidHashMap["SubSystemLed:48:5"] = {rtwname: "<S1>:5"};
	this.rtwnameHashMap["<S1>:6"] = {sid: "SubSystemLed:48:6"};
	this.sidHashMap["SubSystemLed:48:6"] = {rtwname: "<S1>:6"};
	this.rtwnameHashMap["<S1>:2:1"] = {sid: "SubSystemLed:48:2:1"};
	this.sidHashMap["SubSystemLed:48:2:1"] = {rtwname: "<S1>:2:1"};
	this.rtwnameHashMap["<S1>:4:1"] = {sid: "SubSystemLed:48:4:1"};
	this.sidHashMap["SubSystemLed:48:4:1"] = {rtwname: "<S1>:4:1"};
	this.rtwnameHashMap["<S1>:3:1"] = {sid: "SubSystemLed:48:3:1"};
	this.sidHashMap["SubSystemLed:48:3:1"] = {rtwname: "<S1>:3:1"};
	this.rtwnameHashMap["<S2>/In1"] = {sid: "SubSystemLed:58"};
	this.sidHashMap["SubSystemLed:58"] = {rtwname: "<S2>/In1"};
	this.rtwnameHashMap["<S2>/Trigger"] = {sid: "SubSystemLed:56"};
	this.sidHashMap["SubSystemLed:56"] = {rtwname: "<S2>/Trigger"};
	this.rtwnameHashMap["<S2>/Out1"] = {sid: "SubSystemLed:57"};
	this.sidHashMap["SubSystemLed:57"] = {rtwname: "<S2>/Out1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
