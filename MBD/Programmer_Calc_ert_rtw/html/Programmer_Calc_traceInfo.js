function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/In1 */
	this.urlHashMap["Programmer_Calc:7"] = "Programmer_Calc.c:41,49,57,66,74,86&Programmer_Calc.h:46";
	/* <Root>/In2 */
	this.urlHashMap["Programmer_Calc:8"] = "Programmer_Calc.c:42,50,58,67,80,87&Programmer_Calc.h:47";
	/* <Root>/Bitwise
Operator */
	this.urlHashMap["Programmer_Calc:16"] = "Programmer_Calc.c:88";
	/* <Root>/Bitwise
Operator1 */
	this.urlHashMap["Programmer_Calc:18"] = "Programmer_Calc.c:43";
	/* <Root>/Bitwise
Operator2 */
	this.urlHashMap["Programmer_Calc:19"] = "Programmer_Calc.c:51";
	/* <Root>/Bitwise
Operator3 */
	this.urlHashMap["Programmer_Calc:24"] = "Programmer_Calc.c:59";
	/* <Root>/Bitwise
Operator4 */
	this.urlHashMap["Programmer_Calc:21"] = "Programmer_Calc.c:68";
	/* <Root>/Bitwise
Operator5 */
	this.urlHashMap["Programmer_Calc:22"] = "Programmer_Calc.c:75";
	/* <Root>/Bitwise
Operator6 */
	this.urlHashMap["Programmer_Calc:23"] = "Programmer_Calc.c:81";
	/* <Root>/Bitwise
Operator7 */
	this.urlHashMap["Programmer_Calc:25"] = "Programmer_Calc.c:60";
	/* <Root>/Out1 */
	this.urlHashMap["Programmer_Calc:9"] = "Programmer_Calc.c:40&Programmer_Calc.h:52";
	/* <Root>/Out2 */
	this.urlHashMap["Programmer_Calc:10"] = "Programmer_Calc.c:48&Programmer_Calc.h:53";
	/* <Root>/Out3 */
	this.urlHashMap["Programmer_Calc:11"] = "Programmer_Calc.c:56&Programmer_Calc.h:54";
	/* <Root>/Out4 */
	this.urlHashMap["Programmer_Calc:12"] = "Programmer_Calc.c:65&Programmer_Calc.h:55";
	/* <Root>/Out5 */
	this.urlHashMap["Programmer_Calc:13"] = "Programmer_Calc.c:73&Programmer_Calc.h:56";
	/* <Root>/Out6 */
	this.urlHashMap["Programmer_Calc:15"] = "Programmer_Calc.c:79&Programmer_Calc.h:57";
	/* <Root>/Out7 */
	this.urlHashMap["Programmer_Calc:17"] = "Programmer_Calc.c:85&Programmer_Calc.h:58";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Programmer_Calc"};
	this.sidHashMap["Programmer_Calc"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/In1"] = {sid: "Programmer_Calc:7"};
	this.sidHashMap["Programmer_Calc:7"] = {rtwname: "<Root>/In1"};
	this.rtwnameHashMap["<Root>/In2"] = {sid: "Programmer_Calc:8"};
	this.sidHashMap["Programmer_Calc:8"] = {rtwname: "<Root>/In2"};
	this.rtwnameHashMap["<Root>/Bitwise Operator"] = {sid: "Programmer_Calc:16"};
	this.sidHashMap["Programmer_Calc:16"] = {rtwname: "<Root>/Bitwise Operator"};
	this.rtwnameHashMap["<Root>/Bitwise Operator1"] = {sid: "Programmer_Calc:18"};
	this.sidHashMap["Programmer_Calc:18"] = {rtwname: "<Root>/Bitwise Operator1"};
	this.rtwnameHashMap["<Root>/Bitwise Operator2"] = {sid: "Programmer_Calc:19"};
	this.sidHashMap["Programmer_Calc:19"] = {rtwname: "<Root>/Bitwise Operator2"};
	this.rtwnameHashMap["<Root>/Bitwise Operator3"] = {sid: "Programmer_Calc:24"};
	this.sidHashMap["Programmer_Calc:24"] = {rtwname: "<Root>/Bitwise Operator3"};
	this.rtwnameHashMap["<Root>/Bitwise Operator4"] = {sid: "Programmer_Calc:21"};
	this.sidHashMap["Programmer_Calc:21"] = {rtwname: "<Root>/Bitwise Operator4"};
	this.rtwnameHashMap["<Root>/Bitwise Operator5"] = {sid: "Programmer_Calc:22"};
	this.sidHashMap["Programmer_Calc:22"] = {rtwname: "<Root>/Bitwise Operator5"};
	this.rtwnameHashMap["<Root>/Bitwise Operator6"] = {sid: "Programmer_Calc:23"};
	this.sidHashMap["Programmer_Calc:23"] = {rtwname: "<Root>/Bitwise Operator6"};
	this.rtwnameHashMap["<Root>/Bitwise Operator7"] = {sid: "Programmer_Calc:25"};
	this.sidHashMap["Programmer_Calc:25"] = {rtwname: "<Root>/Bitwise Operator7"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "Programmer_Calc:9"};
	this.sidHashMap["Programmer_Calc:9"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<Root>/Out2"] = {sid: "Programmer_Calc:10"};
	this.sidHashMap["Programmer_Calc:10"] = {rtwname: "<Root>/Out2"};
	this.rtwnameHashMap["<Root>/Out3"] = {sid: "Programmer_Calc:11"};
	this.sidHashMap["Programmer_Calc:11"] = {rtwname: "<Root>/Out3"};
	this.rtwnameHashMap["<Root>/Out4"] = {sid: "Programmer_Calc:12"};
	this.sidHashMap["Programmer_Calc:12"] = {rtwname: "<Root>/Out4"};
	this.rtwnameHashMap["<Root>/Out5"] = {sid: "Programmer_Calc:13"};
	this.sidHashMap["Programmer_Calc:13"] = {rtwname: "<Root>/Out5"};
	this.rtwnameHashMap["<Root>/Out6"] = {sid: "Programmer_Calc:15"};
	this.sidHashMap["Programmer_Calc:15"] = {rtwname: "<Root>/Out6"};
	this.rtwnameHashMap["<Root>/Out7"] = {sid: "Programmer_Calc:17"};
	this.sidHashMap["Programmer_Calc:17"] = {rtwname: "<Root>/Out7"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
