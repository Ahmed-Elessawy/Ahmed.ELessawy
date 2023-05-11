function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/In1 */
	this.urlHashMap["Header:4"] = "Header.c:41&Header.h:45";
	/* <Root>/Chart */
	this.urlHashMap["Header:1"] = "Header.c:40,58,77";
	/* <Root>/Out1 */
	this.urlHashMap["Header:5"] = "Header.c:48,76&Header.h:50";
	/* <S1>:12 */
	this.urlHashMap["Header:1:12"] = "Header.c:46";
	/* <S1>:13 */
	this.urlHashMap["Header:1:13"] = "Header.c:49";
	/* <S1>:14 */
	this.urlHashMap["Header:1:14"] = "Header.c:55";
	/* <S1>:15 */
	this.urlHashMap["Header:1:15"] = "Header.c:50";
	/* <S1>:16 */
	this.urlHashMap["Header:1:16"] = "Header.c:53";
	/* <S1>:17 */
	this.urlHashMap["Header:1:17"] = "Header.c:59";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Header"};
	this.sidHashMap["Header"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "Header:1"};
	this.sidHashMap["Header:1"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/In1"] = {sid: "Header:4"};
	this.sidHashMap["Header:4"] = {rtwname: "<Root>/In1"};
	this.rtwnameHashMap["<Root>/Chart"] = {sid: "Header:1"};
	this.sidHashMap["Header:1"] = {rtwname: "<Root>/Chart"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "Header:5"};
	this.sidHashMap["Header:5"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<S1>:12"] = {sid: "Header:1:12"};
	this.sidHashMap["Header:1:12"] = {rtwname: "<S1>:12"};
	this.rtwnameHashMap["<S1>:13"] = {sid: "Header:1:13"};
	this.sidHashMap["Header:1:13"] = {rtwname: "<S1>:13"};
	this.rtwnameHashMap["<S1>:14"] = {sid: "Header:1:14"};
	this.sidHashMap["Header:1:14"] = {rtwname: "<S1>:14"};
	this.rtwnameHashMap["<S1>:15"] = {sid: "Header:1:15"};
	this.sidHashMap["Header:1:15"] = {rtwname: "<S1>:15"};
	this.rtwnameHashMap["<S1>:16"] = {sid: "Header:1:16"};
	this.sidHashMap["Header:1:16"] = {rtwname: "<S1>:16"};
	this.rtwnameHashMap["<S1>:17"] = {sid: "Header:1:17"};
	this.sidHashMap["Header:1:17"] = {rtwname: "<S1>:17"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
