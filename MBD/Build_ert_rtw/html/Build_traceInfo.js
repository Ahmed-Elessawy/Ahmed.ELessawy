function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Led
 */
	this.urlHashMap["Build:2"] = "Build.c:34";
	/* <S1>:1 */
	this.urlHashMap["Build:2:1"] = "Build.c:41";
	/* <S1>:7 */
	this.urlHashMap["Build:2:7"] = "Build.c:42";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Build"};
	this.sidHashMap["Build"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "Build:2"};
	this.sidHashMap["Build:2"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/Led "] = {sid: "Build:2"};
	this.sidHashMap["Build:2"] = {rtwname: "<Root>/Led "};
	this.rtwnameHashMap["<S1>:1"] = {sid: "Build:2:1"};
	this.sidHashMap["Build:2:1"] = {rtwname: "<S1>:1"};
	this.rtwnameHashMap["<S1>:7"] = {sid: "Build:2:7"};
	this.sidHashMap["Build:2:7"] = {rtwname: "<S1>:7"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
