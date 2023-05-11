function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/In1 */
	this.urlHashMap["State_Calc:7"] = "State_Calc.c:119&State_Calc.h:46";
	/* <Root>/In2 */
	this.urlHashMap["State_Calc:8"] = "State_Calc.c:120&State_Calc.h:47";
	/* <Root>/In3 */
	this.urlHashMap["State_Calc:9"] = "State_Calc.c:121&State_Calc.h:48";
	/* <Root>/Chart */
	this.urlHashMap["State_Calc:1"] = "State_Calc.c:41,118";
	/* <Root>/Display */
	this.urlHashMap["State_Calc:5"] = "msg=rtwMsg_SimulationReducedBlock&block=State_Calc:5";
	/* <Root>/Out1 */
	this.urlHashMap["State_Calc:6"] = "State_Calc.h:53";
	/* <S1>:1 */
	this.urlHashMap["State_Calc:1:1"] = "State_Calc.c:50,51";
	/* <S1>:55 */
	this.urlHashMap["State_Calc:1:55"] = "State_Calc.c:126";
	/* <S1>:5 */
	this.urlHashMap["State_Calc:1:5"] = "msg=rtwMsg_notTraceable&block=State_Calc:1:5";
	/* <S1>:6 */
	this.urlHashMap["State_Calc:1:6"] = "msg=rtwMsg_notTraceable&block=State_Calc:1:6";
	/* <S1>:7 */
	this.urlHashMap["State_Calc:1:7"] = "msg=rtwMsg_notTraceable&block=State_Calc:1:7";
	/* <S1>:8 */
	this.urlHashMap["State_Calc:1:8"] = "msg=rtwMsg_notTraceable&block=State_Calc:1:8";
	/* <S1>:9 */
	this.urlHashMap["State_Calc:1:9"] = "msg=rtwMsg_notTraceable&block=State_Calc:1:9";
	/* <S1>:10 */
	this.urlHashMap["State_Calc:1:10"] = "msg=rtwMsg_notTraceable&block=State_Calc:1:10";
	/* <S1>:11 */
	this.urlHashMap["State_Calc:1:11"] = "msg=rtwMsg_notTraceable&block=State_Calc:1:11";
	/* <S1>:12 */
	this.urlHashMap["State_Calc:1:12"] = "msg=rtwMsg_notTraceable&block=State_Calc:1:12";
	/* <S1>:13 */
	this.urlHashMap["State_Calc:1:13"] = "msg=rtwMsg_notTraceable&block=State_Calc:1:13";
	/* <S1>:14 */
	this.urlHashMap["State_Calc:1:14"] = "msg=rtwMsg_notTraceable&block=State_Calc:1:14";
	/* <S1>:15 */
	this.urlHashMap["State_Calc:1:15"] = "msg=rtwMsg_notTraceable&block=State_Calc:1:15";
	/* <S1>:16 */
	this.urlHashMap["State_Calc:1:16"] = "msg=rtwMsg_notTraceable&block=State_Calc:1:16";
	/* <S1>:17 */
	this.urlHashMap["State_Calc:1:17"] = "msg=rtwMsg_notTraceable&block=State_Calc:1:17";
	/* <S1>:18 */
	this.urlHashMap["State_Calc:1:18"] = "msg=rtwMsg_notTraceable&block=State_Calc:1:18";
	/* <S1>:19 */
	this.urlHashMap["State_Calc:1:19"] = "msg=rtwMsg_notTraceable&block=State_Calc:1:19";
	/* <S1>:20 */
	this.urlHashMap["State_Calc:1:20"] = "msg=rtwMsg_notTraceable&block=State_Calc:1:20";
	/* <S1>:21 */
	this.urlHashMap["State_Calc:1:21"] = "msg=rtwMsg_notTraceable&block=State_Calc:1:21";
	/* <S1>:22 */
	this.urlHashMap["State_Calc:1:22"] = "msg=rtwMsg_notTraceable&block=State_Calc:1:22";
	/* <S1>:23 */
	this.urlHashMap["State_Calc:1:23"] = "msg=rtwMsg_notTraceable&block=State_Calc:1:23";
	/* <S1>:24 */
	this.urlHashMap["State_Calc:1:24"] = "msg=rtwMsg_notTraceable&block=State_Calc:1:24";
	/* <S1>:25 */
	this.urlHashMap["State_Calc:1:25"] = "msg=rtwMsg_notTraceable&block=State_Calc:1:25";
	/* <S1>:26 */
	this.urlHashMap["State_Calc:1:26"] = "msg=rtwMsg_notTraceable&block=State_Calc:1:26";
	/* <S1>:27 */
	this.urlHashMap["State_Calc:1:27"] = "msg=rtwMsg_notTraceable&block=State_Calc:1:27";
	/* <S1>:6:1 */
	this.urlHashMap["State_Calc:1:6:1"] = "State_Calc.c:52,53";
	/* <S1>:8:1 */
	this.urlHashMap["State_Calc:1:8:1"] = "State_Calc.c:56";
	/* <S1>:11:1 */
	this.urlHashMap["State_Calc:1:11:1"] = "State_Calc.c:61,62";
	/* <S1>:13:1 */
	this.urlHashMap["State_Calc:1:13:1"] = "State_Calc.c:63";
	/* <S1>:16:1 */
	this.urlHashMap["State_Calc:1:16:1"] = "State_Calc.c:68,69";
	/* <S1>:18:1 */
	this.urlHashMap["State_Calc:1:18:1"] = "State_Calc.c:70";
	/* <S1>:21:1 */
	this.urlHashMap["State_Calc:1:21:1"] = "State_Calc.c:75,76";
	/* <S1>:23:1 */
	this.urlHashMap["State_Calc:1:23:1"] = "State_Calc.c:77";
	/* <S1>:22:1 */
	this.urlHashMap["State_Calc:1:22:1"] = "State_Calc.c:94";
	/* <S1>:55:1 */
	this.urlHashMap["State_Calc:1:55:1"] = "State_Calc.c:127";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "State_Calc"};
	this.sidHashMap["State_Calc"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "State_Calc:1"};
	this.sidHashMap["State_Calc:1"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/In1"] = {sid: "State_Calc:7"};
	this.sidHashMap["State_Calc:7"] = {rtwname: "<Root>/In1"};
	this.rtwnameHashMap["<Root>/In2"] = {sid: "State_Calc:8"};
	this.sidHashMap["State_Calc:8"] = {rtwname: "<Root>/In2"};
	this.rtwnameHashMap["<Root>/In3"] = {sid: "State_Calc:9"};
	this.sidHashMap["State_Calc:9"] = {rtwname: "<Root>/In3"};
	this.rtwnameHashMap["<Root>/Chart"] = {sid: "State_Calc:1"};
	this.sidHashMap["State_Calc:1"] = {rtwname: "<Root>/Chart"};
	this.rtwnameHashMap["<Root>/Display"] = {sid: "State_Calc:5"};
	this.sidHashMap["State_Calc:5"] = {rtwname: "<Root>/Display"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "State_Calc:6"};
	this.sidHashMap["State_Calc:6"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<S1>:1"] = {sid: "State_Calc:1:1"};
	this.sidHashMap["State_Calc:1:1"] = {rtwname: "<S1>:1"};
	this.rtwnameHashMap["<S1>:55"] = {sid: "State_Calc:1:55"};
	this.sidHashMap["State_Calc:1:55"] = {rtwname: "<S1>:55"};
	this.rtwnameHashMap["<S1>:5"] = {sid: "State_Calc:1:5"};
	this.sidHashMap["State_Calc:1:5"] = {rtwname: "<S1>:5"};
	this.rtwnameHashMap["<S1>:6"] = {sid: "State_Calc:1:6"};
	this.sidHashMap["State_Calc:1:6"] = {rtwname: "<S1>:6"};
	this.rtwnameHashMap["<S1>:7"] = {sid: "State_Calc:1:7"};
	this.sidHashMap["State_Calc:1:7"] = {rtwname: "<S1>:7"};
	this.rtwnameHashMap["<S1>:8"] = {sid: "State_Calc:1:8"};
	this.sidHashMap["State_Calc:1:8"] = {rtwname: "<S1>:8"};
	this.rtwnameHashMap["<S1>:9"] = {sid: "State_Calc:1:9"};
	this.sidHashMap["State_Calc:1:9"] = {rtwname: "<S1>:9"};
	this.rtwnameHashMap["<S1>:10"] = {sid: "State_Calc:1:10"};
	this.sidHashMap["State_Calc:1:10"] = {rtwname: "<S1>:10"};
	this.rtwnameHashMap["<S1>:11"] = {sid: "State_Calc:1:11"};
	this.sidHashMap["State_Calc:1:11"] = {rtwname: "<S1>:11"};
	this.rtwnameHashMap["<S1>:12"] = {sid: "State_Calc:1:12"};
	this.sidHashMap["State_Calc:1:12"] = {rtwname: "<S1>:12"};
	this.rtwnameHashMap["<S1>:13"] = {sid: "State_Calc:1:13"};
	this.sidHashMap["State_Calc:1:13"] = {rtwname: "<S1>:13"};
	this.rtwnameHashMap["<S1>:14"] = {sid: "State_Calc:1:14"};
	this.sidHashMap["State_Calc:1:14"] = {rtwname: "<S1>:14"};
	this.rtwnameHashMap["<S1>:15"] = {sid: "State_Calc:1:15"};
	this.sidHashMap["State_Calc:1:15"] = {rtwname: "<S1>:15"};
	this.rtwnameHashMap["<S1>:16"] = {sid: "State_Calc:1:16"};
	this.sidHashMap["State_Calc:1:16"] = {rtwname: "<S1>:16"};
	this.rtwnameHashMap["<S1>:17"] = {sid: "State_Calc:1:17"};
	this.sidHashMap["State_Calc:1:17"] = {rtwname: "<S1>:17"};
	this.rtwnameHashMap["<S1>:18"] = {sid: "State_Calc:1:18"};
	this.sidHashMap["State_Calc:1:18"] = {rtwname: "<S1>:18"};
	this.rtwnameHashMap["<S1>:19"] = {sid: "State_Calc:1:19"};
	this.sidHashMap["State_Calc:1:19"] = {rtwname: "<S1>:19"};
	this.rtwnameHashMap["<S1>:20"] = {sid: "State_Calc:1:20"};
	this.sidHashMap["State_Calc:1:20"] = {rtwname: "<S1>:20"};
	this.rtwnameHashMap["<S1>:21"] = {sid: "State_Calc:1:21"};
	this.sidHashMap["State_Calc:1:21"] = {rtwname: "<S1>:21"};
	this.rtwnameHashMap["<S1>:22"] = {sid: "State_Calc:1:22"};
	this.sidHashMap["State_Calc:1:22"] = {rtwname: "<S1>:22"};
	this.rtwnameHashMap["<S1>:23"] = {sid: "State_Calc:1:23"};
	this.sidHashMap["State_Calc:1:23"] = {rtwname: "<S1>:23"};
	this.rtwnameHashMap["<S1>:24"] = {sid: "State_Calc:1:24"};
	this.sidHashMap["State_Calc:1:24"] = {rtwname: "<S1>:24"};
	this.rtwnameHashMap["<S1>:25"] = {sid: "State_Calc:1:25"};
	this.sidHashMap["State_Calc:1:25"] = {rtwname: "<S1>:25"};
	this.rtwnameHashMap["<S1>:26"] = {sid: "State_Calc:1:26"};
	this.sidHashMap["State_Calc:1:26"] = {rtwname: "<S1>:26"};
	this.rtwnameHashMap["<S1>:27"] = {sid: "State_Calc:1:27"};
	this.sidHashMap["State_Calc:1:27"] = {rtwname: "<S1>:27"};
	this.rtwnameHashMap["<S1>:6:1"] = {sid: "State_Calc:1:6:1"};
	this.sidHashMap["State_Calc:1:6:1"] = {rtwname: "<S1>:6:1"};
	this.rtwnameHashMap["<S1>:8:1"] = {sid: "State_Calc:1:8:1"};
	this.sidHashMap["State_Calc:1:8:1"] = {rtwname: "<S1>:8:1"};
	this.rtwnameHashMap["<S1>:11:1"] = {sid: "State_Calc:1:11:1"};
	this.sidHashMap["State_Calc:1:11:1"] = {rtwname: "<S1>:11:1"};
	this.rtwnameHashMap["<S1>:13:1"] = {sid: "State_Calc:1:13:1"};
	this.sidHashMap["State_Calc:1:13:1"] = {rtwname: "<S1>:13:1"};
	this.rtwnameHashMap["<S1>:16:1"] = {sid: "State_Calc:1:16:1"};
	this.sidHashMap["State_Calc:1:16:1"] = {rtwname: "<S1>:16:1"};
	this.rtwnameHashMap["<S1>:18:1"] = {sid: "State_Calc:1:18:1"};
	this.sidHashMap["State_Calc:1:18:1"] = {rtwname: "<S1>:18:1"};
	this.rtwnameHashMap["<S1>:21:1"] = {sid: "State_Calc:1:21:1"};
	this.sidHashMap["State_Calc:1:21:1"] = {rtwname: "<S1>:21:1"};
	this.rtwnameHashMap["<S1>:23:1"] = {sid: "State_Calc:1:23:1"};
	this.sidHashMap["State_Calc:1:23:1"] = {rtwname: "<S1>:23:1"};
	this.rtwnameHashMap["<S1>:22:1"] = {sid: "State_Calc:1:22:1"};
	this.sidHashMap["State_Calc:1:22:1"] = {rtwname: "<S1>:22:1"};
	this.rtwnameHashMap["<S1>:55:1"] = {sid: "State_Calc:1:55:1"};
	this.sidHashMap["State_Calc:1:55:1"] = {rtwname: "<S1>:55:1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
