function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/In1 */
	this.urlHashMap["Increment_Decrement:23"] = "Increment_Decrement.c:71&Increment_Decrement.h:54";
	/* <Root>/In2 */
	this.urlHashMap["Increment_Decrement:24"] = "Increment_Decrement.c:82&Increment_Decrement.h:55";
	/* <Root>/Constant */
	this.urlHashMap["Increment_Decrement:9"] = "Increment_Decrement.c:45";
	/* <Root>/Constant2 */
	this.urlHashMap["Increment_Decrement:16"] = "Increment_Decrement.c:57";
	/* <Root>/Decrement
Stored Integer */
	this.urlHashMap["Increment_Decrement:15"] = "msg=&block=Increment_Decrement:15";
	/* <Root>/Delay */
	this.urlHashMap["Increment_Decrement:7"] = "Increment_Decrement.c:44,52,68,70,111&Increment_Decrement.h:46,48";
	/* <Root>/Delay1 */
	this.urlHashMap["Increment_Decrement:18"] = "Increment_Decrement.c:56,64,79,81,114&Increment_Decrement.h:47,49";
	/* <Root>/Display */
	this.urlHashMap["Increment_Decrement:10"] = "msg=rtwMsg_reducedBlock&block=Increment_Decrement:10";
	/* <Root>/Display1 */
	this.urlHashMap["Increment_Decrement:19"] = "msg=&block=Increment_Decrement:19";
	/* <Root>/Product */
	this.urlHashMap["Increment_Decrement:6"] = "Increment_Decrement.c:72";
	/* <Root>/Product1 */
	this.urlHashMap["Increment_Decrement:21"] = "Increment_Decrement.c:83";
	/* <Root>/Out1 */
	this.urlHashMap["Increment_Decrement:12"] = "Increment_Decrement.c:51&Increment_Decrement.h:60";
	/* <Root>/Out2 */
	this.urlHashMap["Increment_Decrement:22"] = "Increment_Decrement.c:63&Increment_Decrement.h:61";
	/* <S1>/u */
	this.urlHashMap["Increment_Decrement:15:1"] = "msg=&block=Increment_Decrement:15:1";
	/* <S1>/FixPt
Constant */
	this.urlHashMap["Increment_Decrement:15:2"] = "Increment_Decrement.c:80";
	/* <S1>/FixPt
Data Type
Duplicate */
	this.urlHashMap["Increment_Decrement:15:3"] = "msg=&block=Increment_Decrement:15:3";
	/* <S1>/FixPt
Data Type
Propagation */
	this.urlHashMap["Increment_Decrement:15:4"] = "msg=&block=Increment_Decrement:15:4";
	/* <S1>/FixPt
Gateway In */
	this.urlHashMap["Increment_Decrement:15:5"] = "msg=&block=Increment_Decrement:15:5";
	/* <S1>/FixPt
Sum1 */
	this.urlHashMap["Increment_Decrement:15:6"] = "Increment_Decrement.c:84";
	/* <S1>/y */
	this.urlHashMap["Increment_Decrement:15:7"] = "msg=&block=Increment_Decrement:15:7";
	/* <S2>/FixPt
Constant */
	this.urlHashMap["Increment_Decrement:2:2"] = "Increment_Decrement.c:69";
	/* <S2>/FixPt
Data Type
Duplicate */
	this.urlHashMap["Increment_Decrement:2:3"] = "msg=rtwMsg_reducedBlock&block=Increment_Decrement:2:3";
	/* <S2>/FixPt
Data Type
Propagation */
	this.urlHashMap["Increment_Decrement:2:4"] = "msg=rtwMsg_reducedBlock&block=Increment_Decrement:2:4";
	/* <S2>/FixPt
Gateway In */
	this.urlHashMap["Increment_Decrement:2:5"] = "msg=rtwMsg_reducedBlock&block=Increment_Decrement:2:5";
	/* <S2>/FixPt
Sum1 */
	this.urlHashMap["Increment_Decrement:2:6"] = "Increment_Decrement.c:73";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Increment_Decrement"};
	this.sidHashMap["Increment_Decrement"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "Increment_Decrement:15"};
	this.sidHashMap["Increment_Decrement:15"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "Increment_Decrement:2"};
	this.sidHashMap["Increment_Decrement:2"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<Root>/In1"] = {sid: "Increment_Decrement:23"};
	this.sidHashMap["Increment_Decrement:23"] = {rtwname: "<Root>/In1"};
	this.rtwnameHashMap["<Root>/In2"] = {sid: "Increment_Decrement:24"};
	this.sidHashMap["Increment_Decrement:24"] = {rtwname: "<Root>/In2"};
	this.rtwnameHashMap["<Root>/Constant"] = {sid: "Increment_Decrement:9"};
	this.sidHashMap["Increment_Decrement:9"] = {rtwname: "<Root>/Constant"};
	this.rtwnameHashMap["<Root>/Constant2"] = {sid: "Increment_Decrement:16"};
	this.sidHashMap["Increment_Decrement:16"] = {rtwname: "<Root>/Constant2"};
	this.rtwnameHashMap["<Root>/Decrement Stored Integer"] = {sid: "Increment_Decrement:15"};
	this.sidHashMap["Increment_Decrement:15"] = {rtwname: "<Root>/Decrement Stored Integer"};
	this.rtwnameHashMap["<Root>/Delay"] = {sid: "Increment_Decrement:7"};
	this.sidHashMap["Increment_Decrement:7"] = {rtwname: "<Root>/Delay"};
	this.rtwnameHashMap["<Root>/Delay1"] = {sid: "Increment_Decrement:18"};
	this.sidHashMap["Increment_Decrement:18"] = {rtwname: "<Root>/Delay1"};
	this.rtwnameHashMap["<Root>/Display"] = {sid: "Increment_Decrement:10"};
	this.sidHashMap["Increment_Decrement:10"] = {rtwname: "<Root>/Display"};
	this.rtwnameHashMap["<Root>/Display1"] = {sid: "Increment_Decrement:19"};
	this.sidHashMap["Increment_Decrement:19"] = {rtwname: "<Root>/Display1"};
	this.rtwnameHashMap["<Root>/Increment Stored Integer"] = {sid: "Increment_Decrement:2"};
	this.sidHashMap["Increment_Decrement:2"] = {rtwname: "<Root>/Increment Stored Integer"};
	this.rtwnameHashMap["<Root>/Product"] = {sid: "Increment_Decrement:6"};
	this.sidHashMap["Increment_Decrement:6"] = {rtwname: "<Root>/Product"};
	this.rtwnameHashMap["<Root>/Product1"] = {sid: "Increment_Decrement:21"};
	this.sidHashMap["Increment_Decrement:21"] = {rtwname: "<Root>/Product1"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "Increment_Decrement:12"};
	this.sidHashMap["Increment_Decrement:12"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<Root>/Out2"] = {sid: "Increment_Decrement:22"};
	this.sidHashMap["Increment_Decrement:22"] = {rtwname: "<Root>/Out2"};
	this.rtwnameHashMap["<S1>/u"] = {sid: "Increment_Decrement:15:1"};
	this.sidHashMap["Increment_Decrement:15:1"] = {rtwname: "<S1>/u"};
	this.rtwnameHashMap["<S1>/FixPt Constant"] = {sid: "Increment_Decrement:15:2"};
	this.sidHashMap["Increment_Decrement:15:2"] = {rtwname: "<S1>/FixPt Constant"};
	this.rtwnameHashMap["<S1>/FixPt Data Type Duplicate"] = {sid: "Increment_Decrement:15:3"};
	this.sidHashMap["Increment_Decrement:15:3"] = {rtwname: "<S1>/FixPt Data Type Duplicate"};
	this.rtwnameHashMap["<S1>/FixPt Data Type Propagation"] = {sid: "Increment_Decrement:15:4"};
	this.sidHashMap["Increment_Decrement:15:4"] = {rtwname: "<S1>/FixPt Data Type Propagation"};
	this.rtwnameHashMap["<S1>/FixPt Gateway In"] = {sid: "Increment_Decrement:15:5"};
	this.sidHashMap["Increment_Decrement:15:5"] = {rtwname: "<S1>/FixPt Gateway In"};
	this.rtwnameHashMap["<S1>/FixPt Sum1"] = {sid: "Increment_Decrement:15:6"};
	this.sidHashMap["Increment_Decrement:15:6"] = {rtwname: "<S1>/FixPt Sum1"};
	this.rtwnameHashMap["<S1>/y"] = {sid: "Increment_Decrement:15:7"};
	this.sidHashMap["Increment_Decrement:15:7"] = {rtwname: "<S1>/y"};
	this.rtwnameHashMap["<S2>/u"] = {sid: "Increment_Decrement:2:1"};
	this.sidHashMap["Increment_Decrement:2:1"] = {rtwname: "<S2>/u"};
	this.rtwnameHashMap["<S2>/FixPt Constant"] = {sid: "Increment_Decrement:2:2"};
	this.sidHashMap["Increment_Decrement:2:2"] = {rtwname: "<S2>/FixPt Constant"};
	this.rtwnameHashMap["<S2>/FixPt Data Type Duplicate"] = {sid: "Increment_Decrement:2:3"};
	this.sidHashMap["Increment_Decrement:2:3"] = {rtwname: "<S2>/FixPt Data Type Duplicate"};
	this.rtwnameHashMap["<S2>/FixPt Data Type Propagation"] = {sid: "Increment_Decrement:2:4"};
	this.sidHashMap["Increment_Decrement:2:4"] = {rtwname: "<S2>/FixPt Data Type Propagation"};
	this.rtwnameHashMap["<S2>/FixPt Gateway In"] = {sid: "Increment_Decrement:2:5"};
	this.sidHashMap["Increment_Decrement:2:5"] = {rtwname: "<S2>/FixPt Gateway In"};
	this.rtwnameHashMap["<S2>/FixPt Sum1"] = {sid: "Increment_Decrement:2:6"};
	this.sidHashMap["Increment_Decrement:2:6"] = {rtwname: "<S2>/FixPt Sum1"};
	this.rtwnameHashMap["<S2>/y"] = {sid: "Increment_Decrement:2:7"};
	this.sidHashMap["Increment_Decrement:2:7"] = {rtwname: "<S2>/y"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
