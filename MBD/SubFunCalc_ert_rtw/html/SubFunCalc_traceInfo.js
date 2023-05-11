function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/In1 */
	this.urlHashMap["SubFunCalc:2"] = "SubFunCalc.c:46&SubFunCalc.h:46";
	/* <Root>/In2 */
	this.urlHashMap["SubFunCalc:3"] = "SubFunCalc.c:47&SubFunCalc.h:47";
	/* <Root>/Chart */
	this.urlHashMap["SubFunCalc:1"] = "SubFunCalc.c:41,58";
	/* <Root>/Out1 */
	this.urlHashMap["SubFunCalc:4"] = "SubFunCalc.h:52";
	/* <S1>:1 */
	this.urlHashMap["SubFunCalc:1:1"] = "SubFunCalc.c:49,50";
	/* <S1>:7 */
	this.urlHashMap["SubFunCalc:1:7"] = "SubFunCalc.c:62";
	/* <S1>:3 */
	this.urlHashMap["SubFunCalc:1:3"] = "msg=rtwMsg_notTraceable&block=SubFunCalc:1:3";
	/* <S1>:3:1 */
	this.urlHashMap["SubFunCalc:1:3:1"] = "SubFunCalc.c:51";
	/* <S1>:7:1 */
	this.urlHashMap["SubFunCalc:1:7:1"] = "SubFunCalc.c:63";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "SubFunCalc"};
	this.sidHashMap["SubFunCalc"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "SubFunCalc:1"};
	this.sidHashMap["SubFunCalc:1"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/In1"] = {sid: "SubFunCalc:2"};
	this.sidHashMap["SubFunCalc:2"] = {rtwname: "<Root>/In1"};
	this.rtwnameHashMap["<Root>/In2"] = {sid: "SubFunCalc:3"};
	this.sidHashMap["SubFunCalc:3"] = {rtwname: "<Root>/In2"};
	this.rtwnameHashMap["<Root>/Chart"] = {sid: "SubFunCalc:1"};
	this.sidHashMap["SubFunCalc:1"] = {rtwname: "<Root>/Chart"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "SubFunCalc:4"};
	this.sidHashMap["SubFunCalc:4"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<S1>:1"] = {sid: "SubFunCalc:1:1"};
	this.sidHashMap["SubFunCalc:1:1"] = {rtwname: "<S1>:1"};
	this.rtwnameHashMap["<S1>:7"] = {sid: "SubFunCalc:1:7"};
	this.sidHashMap["SubFunCalc:1:7"] = {rtwname: "<S1>:7"};
	this.rtwnameHashMap["<S1>:3"] = {sid: "SubFunCalc:1:3"};
	this.sidHashMap["SubFunCalc:1:3"] = {rtwname: "<S1>:3"};
	this.rtwnameHashMap["<S1>:3:1"] = {sid: "SubFunCalc:1:3:1"};
	this.sidHashMap["SubFunCalc:1:3:1"] = {rtwname: "<S1>:3:1"};
	this.rtwnameHashMap["<S1>:7:1"] = {sid: "SubFunCalc:1:7:1"};
	this.sidHashMap["SubFunCalc:1:7:1"] = {rtwname: "<S1>:7:1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
