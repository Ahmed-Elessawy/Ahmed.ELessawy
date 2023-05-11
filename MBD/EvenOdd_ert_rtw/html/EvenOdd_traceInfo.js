function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Chart */
	this.urlHashMap["EvenOdd:20"] = "EvenOdd.c:40,80,126";
	/* <Root>/Constant */
	this.urlHashMap["EvenOdd:6"] = "EvenOdd.c:88";
	/* <Root>/Constant1 */
	this.urlHashMap["EvenOdd:19"] = "EvenOdd.c:99";
	/* <Root>/Data Type Conversion */
	this.urlHashMap["EvenOdd:24"] = "EvenOdd.c:65,78";
	/* <Root>/Delay */
	this.urlHashMap["EvenOdd:2"] = "EvenOdd.c:66,90,95,98&EvenOdd.h:49";
	/* <Root>/Relational
Operator */
	this.urlHashMap["EvenOdd:5"] = "EvenOdd.c:91";
	/* <Root>/Switch */
	this.urlHashMap["EvenOdd:17"] = "EvenOdd.c:87,104";
	/* <Root>/Out1 */
	this.urlHashMap["EvenOdd:23"] = "EvenOdd.c:125&EvenOdd.h:54";
	/* <S1>:1 */
	this.urlHashMap["EvenOdd:20:1"] = "EvenOdd.c:43";
	/* <S1>:15 */
	this.urlHashMap["EvenOdd:20:15"] = "EvenOdd.c:84";
	/* <S1>:4 */
	this.urlHashMap["EvenOdd:20:4"] = "EvenOdd.c:44";
	/* <S1>:5 */
	this.urlHashMap["EvenOdd:20:5"] = "EvenOdd.c:46";
	/* <S1>:6 */
	this.urlHashMap["EvenOdd:20:6"] = "EvenOdd.c:52";
	/* <S1>:7 */
	this.urlHashMap["EvenOdd:20:7"] = "EvenOdd.c:47";
	/* <S1>:8 */
	this.urlHashMap["EvenOdd:20:8"] = "EvenOdd.c:50";
	/* <S1>:9 */
	this.urlHashMap["EvenOdd:20:9"] = "EvenOdd.c:56";
	/* <S2>/FixPt
Constant */
	this.urlHashMap["EvenOdd:1:2"] = "EvenOdd.c:89";
	/* <S2>/FixPt
Data Type
Duplicate */
	this.urlHashMap["EvenOdd:1:3"] = "msg=rtwMsg_reducedBlock&block=EvenOdd:1:3";
	/* <S2>/FixPt
Data Type
Propagation */
	this.urlHashMap["EvenOdd:1:4"] = "msg=rtwMsg_reducedBlock&block=EvenOdd:1:4";
	/* <S2>/FixPt
Gateway In */
	this.urlHashMap["EvenOdd:1:5"] = "msg=rtwMsg_reducedBlock&block=EvenOdd:1:5";
	/* <S2>/FixPt
Sum1 */
	this.urlHashMap["EvenOdd:1:6"] = "EvenOdd.c:92";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "EvenOdd"};
	this.sidHashMap["EvenOdd"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "EvenOdd:20"};
	this.sidHashMap["EvenOdd:20"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "EvenOdd:1"};
	this.sidHashMap["EvenOdd:1"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<Root>/Chart"] = {sid: "EvenOdd:20"};
	this.sidHashMap["EvenOdd:20"] = {rtwname: "<Root>/Chart"};
	this.rtwnameHashMap["<Root>/Constant"] = {sid: "EvenOdd:6"};
	this.sidHashMap["EvenOdd:6"] = {rtwname: "<Root>/Constant"};
	this.rtwnameHashMap["<Root>/Constant1"] = {sid: "EvenOdd:19"};
	this.sidHashMap["EvenOdd:19"] = {rtwname: "<Root>/Constant1"};
	this.rtwnameHashMap["<Root>/Data Type Conversion"] = {sid: "EvenOdd:24"};
	this.sidHashMap["EvenOdd:24"] = {rtwname: "<Root>/Data Type Conversion"};
	this.rtwnameHashMap["<Root>/Delay"] = {sid: "EvenOdd:2"};
	this.sidHashMap["EvenOdd:2"] = {rtwname: "<Root>/Delay"};
	this.rtwnameHashMap["<Root>/Increment Stored Integer"] = {sid: "EvenOdd:1"};
	this.sidHashMap["EvenOdd:1"] = {rtwname: "<Root>/Increment Stored Integer"};
	this.rtwnameHashMap["<Root>/Relational Operator"] = {sid: "EvenOdd:5"};
	this.sidHashMap["EvenOdd:5"] = {rtwname: "<Root>/Relational Operator"};
	this.rtwnameHashMap["<Root>/Switch"] = {sid: "EvenOdd:17"};
	this.sidHashMap["EvenOdd:17"] = {rtwname: "<Root>/Switch"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "EvenOdd:23"};
	this.sidHashMap["EvenOdd:23"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<S1>:1"] = {sid: "EvenOdd:20:1"};
	this.sidHashMap["EvenOdd:20:1"] = {rtwname: "<S1>:1"};
	this.rtwnameHashMap["<S1>:15"] = {sid: "EvenOdd:20:15"};
	this.sidHashMap["EvenOdd:20:15"] = {rtwname: "<S1>:15"};
	this.rtwnameHashMap["<S1>:4"] = {sid: "EvenOdd:20:4"};
	this.sidHashMap["EvenOdd:20:4"] = {rtwname: "<S1>:4"};
	this.rtwnameHashMap["<S1>:5"] = {sid: "EvenOdd:20:5"};
	this.sidHashMap["EvenOdd:20:5"] = {rtwname: "<S1>:5"};
	this.rtwnameHashMap["<S1>:6"] = {sid: "EvenOdd:20:6"};
	this.sidHashMap["EvenOdd:20:6"] = {rtwname: "<S1>:6"};
	this.rtwnameHashMap["<S1>:7"] = {sid: "EvenOdd:20:7"};
	this.sidHashMap["EvenOdd:20:7"] = {rtwname: "<S1>:7"};
	this.rtwnameHashMap["<S1>:8"] = {sid: "EvenOdd:20:8"};
	this.sidHashMap["EvenOdd:20:8"] = {rtwname: "<S1>:8"};
	this.rtwnameHashMap["<S1>:9"] = {sid: "EvenOdd:20:9"};
	this.sidHashMap["EvenOdd:20:9"] = {rtwname: "<S1>:9"};
	this.rtwnameHashMap["<S2>/u"] = {sid: "EvenOdd:1:1"};
	this.sidHashMap["EvenOdd:1:1"] = {rtwname: "<S2>/u"};
	this.rtwnameHashMap["<S2>/FixPt Constant"] = {sid: "EvenOdd:1:2"};
	this.sidHashMap["EvenOdd:1:2"] = {rtwname: "<S2>/FixPt Constant"};
	this.rtwnameHashMap["<S2>/FixPt Data Type Duplicate"] = {sid: "EvenOdd:1:3"};
	this.sidHashMap["EvenOdd:1:3"] = {rtwname: "<S2>/FixPt Data Type Duplicate"};
	this.rtwnameHashMap["<S2>/FixPt Data Type Propagation"] = {sid: "EvenOdd:1:4"};
	this.sidHashMap["EvenOdd:1:4"] = {rtwname: "<S2>/FixPt Data Type Propagation"};
	this.rtwnameHashMap["<S2>/FixPt Gateway In"] = {sid: "EvenOdd:1:5"};
	this.sidHashMap["EvenOdd:1:5"] = {rtwname: "<S2>/FixPt Gateway In"};
	this.rtwnameHashMap["<S2>/FixPt Sum1"] = {sid: "EvenOdd:1:6"};
	this.sidHashMap["EvenOdd:1:6"] = {rtwname: "<S2>/FixPt Sum1"};
	this.rtwnameHashMap["<S2>/y"] = {sid: "EvenOdd:1:7"};
	this.sidHashMap["EvenOdd:1:7"] = {rtwname: "<S2>/y"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
