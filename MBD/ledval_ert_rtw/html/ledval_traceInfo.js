function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/In1 */
	this.urlHashMap["ledval:8"] = "ledval.c:41&ledval.h:45";
	/* <Root>/Data Type Conversion */
	this.urlHashMap["ledval:3"] = "msg=rtwMsg_reducedBlock&block=ledval:3";
	/* <Root>/Data Type Conversion1 */
	this.urlHashMap["ledval:4"] = "msg=&block=ledval:4";
	/* <Root>/Display */
	this.urlHashMap["ledval:7"] = "msg=rtwMsg_reducedBlock&block=ledval:7";
	/* <Root>/MATLAB Function */
	this.urlHashMap["ledval:6"] = "ledval.c:40,56";
	/* <Root>/Out1 */
	this.urlHashMap["ledval:9"] = "ledval.c:46,50&ledval.h:50";
	/* <S1>:1 */
	this.urlHashMap["ledval:6:1"] = "ledval.c:43";
	/* <S1>:1:4 */
	this.urlHashMap["ledval:6:1:4"] = "ledval.c:44";
	/* <S1>:1:5 */
	this.urlHashMap["ledval:6:1:5"] = "ledval.c:47";
	/* <S1>:1:6 */
	this.urlHashMap["ledval:6:1:6"] = "ledval.c:51";
	/* <S1>:1:7 */
	this.urlHashMap["ledval:6:1:7"] = "ledval.c:52";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "ledval"};
	this.sidHashMap["ledval"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "ledval:6"};
	this.sidHashMap["ledval:6"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/In1"] = {sid: "ledval:8"};
	this.sidHashMap["ledval:8"] = {rtwname: "<Root>/In1"};
	this.rtwnameHashMap["<Root>/Data Type Conversion"] = {sid: "ledval:3"};
	this.sidHashMap["ledval:3"] = {rtwname: "<Root>/Data Type Conversion"};
	this.rtwnameHashMap["<Root>/Data Type Conversion1"] = {sid: "ledval:4"};
	this.sidHashMap["ledval:4"] = {rtwname: "<Root>/Data Type Conversion1"};
	this.rtwnameHashMap["<Root>/Display"] = {sid: "ledval:7"};
	this.sidHashMap["ledval:7"] = {rtwname: "<Root>/Display"};
	this.rtwnameHashMap["<Root>/MATLAB Function"] = {sid: "ledval:6"};
	this.sidHashMap["ledval:6"] = {rtwname: "<Root>/MATLAB Function"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "ledval:9"};
	this.sidHashMap["ledval:9"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<S1>:1"] = {sid: "ledval:6:1"};
	this.sidHashMap["ledval:6:1"] = {rtwname: "<S1>:1"};
	this.rtwnameHashMap["<S1>:1:4"] = {sid: "ledval:6:1:4"};
	this.sidHashMap["ledval:6:1:4"] = {rtwname: "<S1>:1:4"};
	this.rtwnameHashMap["<S1>:1:5"] = {sid: "ledval:6:1:5"};
	this.sidHashMap["ledval:6:1:5"] = {rtwname: "<S1>:1:5"};
	this.rtwnameHashMap["<S1>:1:6"] = {sid: "ledval:6:1:6"};
	this.sidHashMap["ledval:6:1:6"] = {rtwname: "<S1>:1:6"};
	this.rtwnameHashMap["<S1>:1:7"] = {sid: "ledval:6:1:7"};
	this.sidHashMap["ledval:6:1:7"] = {rtwname: "<S1>:1:7"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
