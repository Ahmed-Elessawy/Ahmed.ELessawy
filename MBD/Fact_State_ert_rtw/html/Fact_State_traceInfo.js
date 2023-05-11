function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/In1 */
	this.urlHashMap["Fact_State:4"] = "Fact_State.h:51";
	/* <Root>/Chart */
	this.urlHashMap["Fact_State:1"] = "Fact_State.c:83,87&Fact_State.h:46";
	/* <Root>/Out1 */
	this.urlHashMap["Fact_State:5"] = "Fact_State.c:86&Fact_State.h:56";
	/* <S1>:1 */
	this.urlHashMap["Fact_State:1:1"] = "Fact_State.c:46";
	/* <S1>:3 */
	this.urlHashMap["Fact_State:1:3"] = "Fact_State.c:51";
	/* <S1>:4 */
	this.urlHashMap["Fact_State:1:4"] = "Fact_State.c:52";
	/* <S1>:2 */
	this.urlHashMap["Fact_State:1:2"] = "Fact_State.c:47";
	/* <S1>:5 */
	this.urlHashMap["Fact_State:1:5"] = "Fact_State.c:59";
	/* <S1>:6 */
	this.urlHashMap["Fact_State:1:6"] = "Fact_State.c:62";
	/* <S1>:3:1 */
	this.urlHashMap["Fact_State:1:3:1"] = "Fact_State.c:48,49";
	/* <S1>:4:1 */
	this.urlHashMap["Fact_State:1:4:1"] = "Fact_State.c:53,56";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Fact_State"};
	this.sidHashMap["Fact_State"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "Fact_State:1"};
	this.sidHashMap["Fact_State:1"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/In1"] = {sid: "Fact_State:4"};
	this.sidHashMap["Fact_State:4"] = {rtwname: "<Root>/In1"};
	this.rtwnameHashMap["<Root>/Chart"] = {sid: "Fact_State:1"};
	this.sidHashMap["Fact_State:1"] = {rtwname: "<Root>/Chart"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "Fact_State:5"};
	this.sidHashMap["Fact_State:5"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<S1>:1"] = {sid: "Fact_State:1:1"};
	this.sidHashMap["Fact_State:1:1"] = {rtwname: "<S1>:1"};
	this.rtwnameHashMap["<S1>:3"] = {sid: "Fact_State:1:3"};
	this.sidHashMap["Fact_State:1:3"] = {rtwname: "<S1>:3"};
	this.rtwnameHashMap["<S1>:4"] = {sid: "Fact_State:1:4"};
	this.sidHashMap["Fact_State:1:4"] = {rtwname: "<S1>:4"};
	this.rtwnameHashMap["<S1>:2"] = {sid: "Fact_State:1:2"};
	this.sidHashMap["Fact_State:1:2"] = {rtwname: "<S1>:2"};
	this.rtwnameHashMap["<S1>:5"] = {sid: "Fact_State:1:5"};
	this.sidHashMap["Fact_State:1:5"] = {rtwname: "<S1>:5"};
	this.rtwnameHashMap["<S1>:6"] = {sid: "Fact_State:1:6"};
	this.sidHashMap["Fact_State:1:6"] = {rtwname: "<S1>:6"};
	this.rtwnameHashMap["<S1>:3:1"] = {sid: "Fact_State:1:3:1"};
	this.sidHashMap["Fact_State:1:3:1"] = {rtwname: "<S1>:3:1"};
	this.rtwnameHashMap["<S1>:4:1"] = {sid: "Fact_State:1:4:1"};
	this.sidHashMap["Fact_State:1:4:1"] = {rtwname: "<S1>:4:1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
