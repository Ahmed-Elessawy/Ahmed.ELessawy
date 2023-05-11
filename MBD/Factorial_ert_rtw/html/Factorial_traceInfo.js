function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/In1 */
	this.urlHashMap["Factorial:50"] = "Factorial.c:57,80&Factorial.h:51";
	/* <Root>/Constant1 */
	this.urlHashMap["Factorial:40"] = "Factorial.c:56";
	/* <Root>/Display */
	this.urlHashMap["Factorial:37"] = "msg=rtwMsg_SimulationReducedBlock&block=Factorial:37";
	/* <Root>/Relational
Operator */
	this.urlHashMap["Factorial:39"] = "Factorial.c:55";
	/* <Root>/While Iterator
Subsystem */
	this.urlHashMap["Factorial:25"] = "Factorial.c:47,87";
	/* <Root>/Out1 */
	this.urlHashMap["Factorial:51"] = "Factorial.c:68&Factorial.h:56";
	/* <S1>/Constant */
	this.urlHashMap["Factorial:47"] = "Factorial.c:62";
	/* <S1>/Constant1 */
	this.urlHashMap["Factorial:49"] = "Factorial.c:79";
	/* <S1>/Delay */
	this.urlHashMap["Factorial:46"] = "Factorial.c:52,61,69,74&Factorial.h:46";
	/* <S1>/Product */
	this.urlHashMap["Factorial:45"] = "Factorial.c:70";
	/* <S1>/Relational
Operator */
	this.urlHashMap["Factorial:41"] = "Factorial.c:78";
	/* <S1>/Subtract */
	this.urlHashMap["Factorial:48"] = "Factorial.c:81";
	/* <S1>/While Iterator */
	this.urlHashMap["Factorial:28"] = "Factorial.c:48";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Factorial"};
	this.sidHashMap["Factorial"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "Factorial:25"};
	this.sidHashMap["Factorial:25"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/In1"] = {sid: "Factorial:50"};
	this.sidHashMap["Factorial:50"] = {rtwname: "<Root>/In1"};
	this.rtwnameHashMap["<Root>/Constant1"] = {sid: "Factorial:40"};
	this.sidHashMap["Factorial:40"] = {rtwname: "<Root>/Constant1"};
	this.rtwnameHashMap["<Root>/Display"] = {sid: "Factorial:37"};
	this.sidHashMap["Factorial:37"] = {rtwname: "<Root>/Display"};
	this.rtwnameHashMap["<Root>/Relational Operator"] = {sid: "Factorial:39"};
	this.sidHashMap["Factorial:39"] = {rtwname: "<Root>/Relational Operator"};
	this.rtwnameHashMap["<Root>/While Iterator Subsystem"] = {sid: "Factorial:25"};
	this.sidHashMap["Factorial:25"] = {rtwname: "<Root>/While Iterator Subsystem"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "Factorial:51"};
	this.sidHashMap["Factorial:51"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<S1>/In1"] = {sid: "Factorial:26"};
	this.sidHashMap["Factorial:26"] = {rtwname: "<S1>/In1"};
	this.rtwnameHashMap["<S1>/IC"] = {sid: "Factorial:27"};
	this.sidHashMap["Factorial:27"] = {rtwname: "<S1>/IC"};
	this.rtwnameHashMap["<S1>/Constant"] = {sid: "Factorial:47"};
	this.sidHashMap["Factorial:47"] = {rtwname: "<S1>/Constant"};
	this.rtwnameHashMap["<S1>/Constant1"] = {sid: "Factorial:49"};
	this.sidHashMap["Factorial:49"] = {rtwname: "<S1>/Constant1"};
	this.rtwnameHashMap["<S1>/Delay"] = {sid: "Factorial:46"};
	this.sidHashMap["Factorial:46"] = {rtwname: "<S1>/Delay"};
	this.rtwnameHashMap["<S1>/Product"] = {sid: "Factorial:45"};
	this.sidHashMap["Factorial:45"] = {rtwname: "<S1>/Product"};
	this.rtwnameHashMap["<S1>/Relational Operator"] = {sid: "Factorial:41"};
	this.sidHashMap["Factorial:41"] = {rtwname: "<S1>/Relational Operator"};
	this.rtwnameHashMap["<S1>/Subtract"] = {sid: "Factorial:48"};
	this.sidHashMap["Factorial:48"] = {rtwname: "<S1>/Subtract"};
	this.rtwnameHashMap["<S1>/While Iterator"] = {sid: "Factorial:28"};
	this.sidHashMap["Factorial:28"] = {rtwname: "<S1>/While Iterator"};
	this.rtwnameHashMap["<S1>/Out1"] = {sid: "Factorial:29"};
	this.sidHashMap["Factorial:29"] = {rtwname: "<S1>/Out1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
