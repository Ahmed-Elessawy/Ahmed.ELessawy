function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/In1 */
	this.urlHashMap["whileee:7"] = "whileee.c:48&whileee.h:50";
	/* <Root>/Constant */
	this.urlHashMap["whileee:6"] = "whileee.c:52";
	/* <Root>/While Iterator
Subsystem */
	this.urlHashMap["whileee:1"] = "whileee.c:43,61";
	/* <Root>/Out1 */
	this.urlHashMap["whileee:8"] = "whileee.c:51&whileee.h:55";
	/* <S1>/Constant */
	this.urlHashMap["whileee:11"] = "msg=rtwMsg_CodeGenerationReducedBlock&block=whileee:11";
	/* <S1>/Relational
Operator */
	this.urlHashMap["whileee:10"] = "whileee.h:45&whileee_data.c:29";
	/* <S1>/While Iterator */
	this.urlHashMap["whileee:4"] = "whileee.c:44";
	/* <S2>/FixPt
Constant */
	this.urlHashMap["whileee:9:2"] = "whileee.c:53";
	/* <S2>/FixPt
Data Type
Duplicate */
	this.urlHashMap["whileee:9:3"] = "msg=rtwMsg_reducedBlock&block=whileee:9:3";
	/* <S2>/FixPt
Data Type
Propagation */
	this.urlHashMap["whileee:9:4"] = "msg=rtwMsg_reducedBlock&block=whileee:9:4";
	/* <S2>/FixPt
Gateway In */
	this.urlHashMap["whileee:9:5"] = "msg=rtwMsg_reducedBlock&block=whileee:9:5";
	/* <S2>/FixPt
Sum1 */
	this.urlHashMap["whileee:9:6"] = "whileee.c:54";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "whileee"};
	this.sidHashMap["whileee"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "whileee:1"};
	this.sidHashMap["whileee:1"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "whileee:9"};
	this.sidHashMap["whileee:9"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<Root>/In1"] = {sid: "whileee:7"};
	this.sidHashMap["whileee:7"] = {rtwname: "<Root>/In1"};
	this.rtwnameHashMap["<Root>/Constant"] = {sid: "whileee:6"};
	this.sidHashMap["whileee:6"] = {rtwname: "<Root>/Constant"};
	this.rtwnameHashMap["<Root>/While Iterator Subsystem"] = {sid: "whileee:1"};
	this.sidHashMap["whileee:1"] = {rtwname: "<Root>/While Iterator Subsystem"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "whileee:8"};
	this.sidHashMap["whileee:8"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<S1>/In1"] = {sid: "whileee:2"};
	this.sidHashMap["whileee:2"] = {rtwname: "<S1>/In1"};
	this.rtwnameHashMap["<S1>/IC"] = {sid: "whileee:3"};
	this.sidHashMap["whileee:3"] = {rtwname: "<S1>/IC"};
	this.rtwnameHashMap["<S1>/Constant"] = {sid: "whileee:11"};
	this.sidHashMap["whileee:11"] = {rtwname: "<S1>/Constant"};
	this.rtwnameHashMap["<S1>/Increment Stored Integer"] = {sid: "whileee:9"};
	this.sidHashMap["whileee:9"] = {rtwname: "<S1>/Increment Stored Integer"};
	this.rtwnameHashMap["<S1>/Relational Operator"] = {sid: "whileee:10"};
	this.sidHashMap["whileee:10"] = {rtwname: "<S1>/Relational Operator"};
	this.rtwnameHashMap["<S1>/While Iterator"] = {sid: "whileee:4"};
	this.sidHashMap["whileee:4"] = {rtwname: "<S1>/While Iterator"};
	this.rtwnameHashMap["<S1>/Out1"] = {sid: "whileee:5"};
	this.sidHashMap["whileee:5"] = {rtwname: "<S1>/Out1"};
	this.rtwnameHashMap["<S2>/u"] = {sid: "whileee:9:1"};
	this.sidHashMap["whileee:9:1"] = {rtwname: "<S2>/u"};
	this.rtwnameHashMap["<S2>/FixPt Constant"] = {sid: "whileee:9:2"};
	this.sidHashMap["whileee:9:2"] = {rtwname: "<S2>/FixPt Constant"};
	this.rtwnameHashMap["<S2>/FixPt Data Type Duplicate"] = {sid: "whileee:9:3"};
	this.sidHashMap["whileee:9:3"] = {rtwname: "<S2>/FixPt Data Type Duplicate"};
	this.rtwnameHashMap["<S2>/FixPt Data Type Propagation"] = {sid: "whileee:9:4"};
	this.sidHashMap["whileee:9:4"] = {rtwname: "<S2>/FixPt Data Type Propagation"};
	this.rtwnameHashMap["<S2>/FixPt Gateway In"] = {sid: "whileee:9:5"};
	this.sidHashMap["whileee:9:5"] = {rtwname: "<S2>/FixPt Gateway In"};
	this.rtwnameHashMap["<S2>/FixPt Sum1"] = {sid: "whileee:9:6"};
	this.sidHashMap["whileee:9:6"] = {rtwname: "<S2>/FixPt Sum1"};
	this.rtwnameHashMap["<S2>/y"] = {sid: "whileee:9:7"};
	this.sidHashMap["whileee:9:7"] = {rtwname: "<S2>/y"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
