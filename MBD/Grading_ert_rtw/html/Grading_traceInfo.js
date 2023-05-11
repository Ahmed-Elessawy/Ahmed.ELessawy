function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/In1 */
	this.urlHashMap["Grading:12"] = "Grading.c:56&Grading.h:45";
	/* <Root>/If */
	this.urlHashMap["Grading:11"] = "Grading.c:55,104";
	/* <Root>/If Action
Subsystem */
	this.urlHashMap["Grading:6"] = "Grading.c:39,59,64";
	/* <Root>/If Action
Subsystem1 */
	this.urlHashMap["Grading:13"] = "Grading.c:66,74";
	/* <Root>/If Action
Subsystem2 */
	this.urlHashMap["Grading:17"] = "Grading.c:76,84";
	/* <Root>/If Action
Subsystem3 */
	this.urlHashMap["Grading:21"] = "Grading.c:86,94";
	/* <Root>/If Action
Subsystem4 */
	this.urlHashMap["Grading:25"] = "Grading.c:40,96,101";
	/* <Root>/Merge */
	this.urlHashMap["Grading:34"] = "msg=&block=Grading:34";
	/* <Root>/Out1 */
	this.urlHashMap["Grading:35"] = "Grading.c:106&Grading.h:50";
	/* <S1>/Action Port */
	this.urlHashMap["Grading:8"] = "Grading.c:60";
	/* <S1>/Constant */
	this.urlHashMap["Grading:29"] = "Grading.c:45";
	/* <S2>/Action Port */
	this.urlHashMap["Grading:15"] = "Grading.c:67";
	/* <S2>/Constant */
	this.urlHashMap["Grading:30"] = "Grading.c:70";
	/* <S3>/Action Port */
	this.urlHashMap["Grading:19"] = "Grading.c:77";
	/* <S3>/Constant */
	this.urlHashMap["Grading:31"] = "Grading.c:80";
	/* <S4>/Action Port */
	this.urlHashMap["Grading:23"] = "Grading.c:87";
	/* <S4>/Constant */
	this.urlHashMap["Grading:32"] = "Grading.c:90";
	/* <S5>/Action Port */
	this.urlHashMap["Grading:27"] = "Grading.c:97";
	/* <S5>/Constant */
	this.urlHashMap["Grading:33"] = "msg=rtwMsg_reducedBlock&block=Grading:33";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Grading"};
	this.sidHashMap["Grading"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "Grading:6"};
	this.sidHashMap["Grading:6"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "Grading:13"};
	this.sidHashMap["Grading:13"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<S3>"] = {sid: "Grading:17"};
	this.sidHashMap["Grading:17"] = {rtwname: "<S3>"};
	this.rtwnameHashMap["<S4>"] = {sid: "Grading:21"};
	this.sidHashMap["Grading:21"] = {rtwname: "<S4>"};
	this.rtwnameHashMap["<S5>"] = {sid: "Grading:25"};
	this.sidHashMap["Grading:25"] = {rtwname: "<S5>"};
	this.rtwnameHashMap["<Root>/In1"] = {sid: "Grading:12"};
	this.sidHashMap["Grading:12"] = {rtwname: "<Root>/In1"};
	this.rtwnameHashMap["<Root>/If"] = {sid: "Grading:11"};
	this.sidHashMap["Grading:11"] = {rtwname: "<Root>/If"};
	this.rtwnameHashMap["<Root>/If Action Subsystem"] = {sid: "Grading:6"};
	this.sidHashMap["Grading:6"] = {rtwname: "<Root>/If Action Subsystem"};
	this.rtwnameHashMap["<Root>/If Action Subsystem1"] = {sid: "Grading:13"};
	this.sidHashMap["Grading:13"] = {rtwname: "<Root>/If Action Subsystem1"};
	this.rtwnameHashMap["<Root>/If Action Subsystem2"] = {sid: "Grading:17"};
	this.sidHashMap["Grading:17"] = {rtwname: "<Root>/If Action Subsystem2"};
	this.rtwnameHashMap["<Root>/If Action Subsystem3"] = {sid: "Grading:21"};
	this.sidHashMap["Grading:21"] = {rtwname: "<Root>/If Action Subsystem3"};
	this.rtwnameHashMap["<Root>/If Action Subsystem4"] = {sid: "Grading:25"};
	this.sidHashMap["Grading:25"] = {rtwname: "<Root>/If Action Subsystem4"};
	this.rtwnameHashMap["<Root>/Merge"] = {sid: "Grading:34"};
	this.sidHashMap["Grading:34"] = {rtwname: "<Root>/Merge"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "Grading:35"};
	this.sidHashMap["Grading:35"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<S1>/Action Port"] = {sid: "Grading:8"};
	this.sidHashMap["Grading:8"] = {rtwname: "<S1>/Action Port"};
	this.rtwnameHashMap["<S1>/Constant"] = {sid: "Grading:29"};
	this.sidHashMap["Grading:29"] = {rtwname: "<S1>/Constant"};
	this.rtwnameHashMap["<S1>/Out1"] = {sid: "Grading:9"};
	this.sidHashMap["Grading:9"] = {rtwname: "<S1>/Out1"};
	this.rtwnameHashMap["<S2>/Action Port"] = {sid: "Grading:15"};
	this.sidHashMap["Grading:15"] = {rtwname: "<S2>/Action Port"};
	this.rtwnameHashMap["<S2>/Constant"] = {sid: "Grading:30"};
	this.sidHashMap["Grading:30"] = {rtwname: "<S2>/Constant"};
	this.rtwnameHashMap["<S2>/Out1"] = {sid: "Grading:16"};
	this.sidHashMap["Grading:16"] = {rtwname: "<S2>/Out1"};
	this.rtwnameHashMap["<S3>/Action Port"] = {sid: "Grading:19"};
	this.sidHashMap["Grading:19"] = {rtwname: "<S3>/Action Port"};
	this.rtwnameHashMap["<S3>/Constant"] = {sid: "Grading:31"};
	this.sidHashMap["Grading:31"] = {rtwname: "<S3>/Constant"};
	this.rtwnameHashMap["<S3>/Out1"] = {sid: "Grading:20"};
	this.sidHashMap["Grading:20"] = {rtwname: "<S3>/Out1"};
	this.rtwnameHashMap["<S4>/Action Port"] = {sid: "Grading:23"};
	this.sidHashMap["Grading:23"] = {rtwname: "<S4>/Action Port"};
	this.rtwnameHashMap["<S4>/Constant"] = {sid: "Grading:32"};
	this.sidHashMap["Grading:32"] = {rtwname: "<S4>/Constant"};
	this.rtwnameHashMap["<S4>/Out1"] = {sid: "Grading:24"};
	this.sidHashMap["Grading:24"] = {rtwname: "<S4>/Out1"};
	this.rtwnameHashMap["<S5>/Action Port"] = {sid: "Grading:27"};
	this.sidHashMap["Grading:27"] = {rtwname: "<S5>/Action Port"};
	this.rtwnameHashMap["<S5>/Constant"] = {sid: "Grading:33"};
	this.sidHashMap["Grading:33"] = {rtwname: "<S5>/Constant"};
	this.rtwnameHashMap["<S5>/Out1"] = {sid: "Grading:28"};
	this.sidHashMap["Grading:28"] = {rtwname: "<S5>/Out1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
