function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/In1 */
	this.urlHashMap["S_Calc:5"] = "S_Calc.c:41,48,55,62&S_Calc.h:46";
	/* <Root>/In2 */
	this.urlHashMap["S_Calc:6"] = "S_Calc.c:42,49,56,63&S_Calc.h:47";
	/* <Root>/Add */
	this.urlHashMap["S_Calc:1"] = "S_Calc.c:43";
	/* <Root>/Divide */
	this.urlHashMap["S_Calc:4"] = "S_Calc.c:64";
	/* <Root>/Product */
	this.urlHashMap["S_Calc:3"] = "S_Calc.c:57";
	/* <Root>/Subtract */
	this.urlHashMap["S_Calc:2"] = "S_Calc.c:50";
	/* <Root>/Out1 */
	this.urlHashMap["S_Calc:7"] = "S_Calc.c:40&S_Calc.h:52";
	/* <Root>/Out2 */
	this.urlHashMap["S_Calc:8"] = "S_Calc.c:47&S_Calc.h:53";
	/* <Root>/Out3 */
	this.urlHashMap["S_Calc:9"] = "S_Calc.c:54&S_Calc.h:54";
	/* <Root>/Out4 */
	this.urlHashMap["S_Calc:10"] = "S_Calc.c:61&S_Calc.h:55";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "S_Calc"};
	this.sidHashMap["S_Calc"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/In1"] = {sid: "S_Calc:5"};
	this.sidHashMap["S_Calc:5"] = {rtwname: "<Root>/In1"};
	this.rtwnameHashMap["<Root>/In2"] = {sid: "S_Calc:6"};
	this.sidHashMap["S_Calc:6"] = {rtwname: "<Root>/In2"};
	this.rtwnameHashMap["<Root>/Add"] = {sid: "S_Calc:1"};
	this.sidHashMap["S_Calc:1"] = {rtwname: "<Root>/Add"};
	this.rtwnameHashMap["<Root>/Divide"] = {sid: "S_Calc:4"};
	this.sidHashMap["S_Calc:4"] = {rtwname: "<Root>/Divide"};
	this.rtwnameHashMap["<Root>/Product"] = {sid: "S_Calc:3"};
	this.sidHashMap["S_Calc:3"] = {rtwname: "<Root>/Product"};
	this.rtwnameHashMap["<Root>/Subtract"] = {sid: "S_Calc:2"};
	this.sidHashMap["S_Calc:2"] = {rtwname: "<Root>/Subtract"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "S_Calc:7"};
	this.sidHashMap["S_Calc:7"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<Root>/Out2"] = {sid: "S_Calc:8"};
	this.sidHashMap["S_Calc:8"] = {rtwname: "<Root>/Out2"};
	this.rtwnameHashMap["<Root>/Out3"] = {sid: "S_Calc:9"};
	this.sidHashMap["S_Calc:9"] = {rtwname: "<Root>/Out3"};
	this.rtwnameHashMap["<Root>/Out4"] = {sid: "S_Calc:10"};
	this.sidHashMap["S_Calc:10"] = {rtwname: "<Root>/Out4"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
