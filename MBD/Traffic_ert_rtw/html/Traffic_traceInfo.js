function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Chart */
	this.urlHashMap["Traffic:1"] = "Traffic.c:27,43,118,133&Traffic.h:46,47,48";
	/* <Root>/Scope */
	this.urlHashMap["Traffic:5"] = "msg=rtwMsg_SimulationReducedBlock&block=Traffic:5";
	/* <S1>:3 */
	this.urlHashMap["Traffic:1:3"] = "Traffic.c:69,93";
	/* <S1>:2 */
	this.urlHashMap["Traffic:1:2"] = "Traffic.c:85,109";
	/* <S1>:1 */
	this.urlHashMap["Traffic:1:1"] = "Traffic.c:62,77,101";
	/* <S1>:4 */
	this.urlHashMap["Traffic:1:4"] = "Traffic.c:55";
	/* <S1>:5 */
	this.urlHashMap["Traffic:1:5"] = "Traffic.c:105";
	/* <S1>:6 */
	this.urlHashMap["Traffic:1:6"] = "Traffic.c:89";
	/* <S1>:7 */
	this.urlHashMap["Traffic:1:7"] = "Traffic.c:73";
	/* <S1>:4:1 */
	this.urlHashMap["Traffic:1:4:1"] = "Traffic.c:56,57,58";
	/* <S1>:1:1 */
	this.urlHashMap["Traffic:1:1:1"] = "Traffic.c:63,64,65,78,79,80";
	/* <S1>:7:1 */
	this.urlHashMap["Traffic:1:7:1"] = "Traffic.c:70,71";
	/* <S1>:6:1 */
	this.urlHashMap["Traffic:1:6:1"] = "Traffic.c:86,87";
	/* <S1>:3:1 */
	this.urlHashMap["Traffic:1:3:1"] = "Traffic.c:94,95,96";
	/* <S1>:5:1 */
	this.urlHashMap["Traffic:1:5:1"] = "Traffic.c:102,103";
	/* <S1>:2:1 */
	this.urlHashMap["Traffic:1:2:1"] = "Traffic.c:110,111,112";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Traffic"};
	this.sidHashMap["Traffic"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "Traffic:1"};
	this.sidHashMap["Traffic:1"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/Chart"] = {sid: "Traffic:1"};
	this.sidHashMap["Traffic:1"] = {rtwname: "<Root>/Chart"};
	this.rtwnameHashMap["<Root>/Lamp"] = {sid: "Traffic:2"};
	this.sidHashMap["Traffic:2"] = {rtwname: "<Root>/Lamp"};
	this.rtwnameHashMap["<Root>/Lamp1"] = {sid: "Traffic:3"};
	this.sidHashMap["Traffic:3"] = {rtwname: "<Root>/Lamp1"};
	this.rtwnameHashMap["<Root>/Lamp2"] = {sid: "Traffic:4"};
	this.sidHashMap["Traffic:4"] = {rtwname: "<Root>/Lamp2"};
	this.rtwnameHashMap["<Root>/Scope"] = {sid: "Traffic:5"};
	this.sidHashMap["Traffic:5"] = {rtwname: "<Root>/Scope"};
	this.rtwnameHashMap["<S1>:3"] = {sid: "Traffic:1:3"};
	this.sidHashMap["Traffic:1:3"] = {rtwname: "<S1>:3"};
	this.rtwnameHashMap["<S1>:2"] = {sid: "Traffic:1:2"};
	this.sidHashMap["Traffic:1:2"] = {rtwname: "<S1>:2"};
	this.rtwnameHashMap["<S1>:1"] = {sid: "Traffic:1:1"};
	this.sidHashMap["Traffic:1:1"] = {rtwname: "<S1>:1"};
	this.rtwnameHashMap["<S1>:4"] = {sid: "Traffic:1:4"};
	this.sidHashMap["Traffic:1:4"] = {rtwname: "<S1>:4"};
	this.rtwnameHashMap["<S1>:5"] = {sid: "Traffic:1:5"};
	this.sidHashMap["Traffic:1:5"] = {rtwname: "<S1>:5"};
	this.rtwnameHashMap["<S1>:6"] = {sid: "Traffic:1:6"};
	this.sidHashMap["Traffic:1:6"] = {rtwname: "<S1>:6"};
	this.rtwnameHashMap["<S1>:7"] = {sid: "Traffic:1:7"};
	this.sidHashMap["Traffic:1:7"] = {rtwname: "<S1>:7"};
	this.rtwnameHashMap["<S1>:4:1"] = {sid: "Traffic:1:4:1"};
	this.sidHashMap["Traffic:1:4:1"] = {rtwname: "<S1>:4:1"};
	this.rtwnameHashMap["<S1>:1:1"] = {sid: "Traffic:1:1:1"};
	this.sidHashMap["Traffic:1:1:1"] = {rtwname: "<S1>:1:1"};
	this.rtwnameHashMap["<S1>:7:1"] = {sid: "Traffic:1:7:1"};
	this.sidHashMap["Traffic:1:7:1"] = {rtwname: "<S1>:7:1"};
	this.rtwnameHashMap["<S1>:6:1"] = {sid: "Traffic:1:6:1"};
	this.sidHashMap["Traffic:1:6:1"] = {rtwname: "<S1>:6:1"};
	this.rtwnameHashMap["<S1>:3:1"] = {sid: "Traffic:1:3:1"};
	this.sidHashMap["Traffic:1:3:1"] = {rtwname: "<S1>:3:1"};
	this.rtwnameHashMap["<S1>:5:1"] = {sid: "Traffic:1:5:1"};
	this.sidHashMap["Traffic:1:5:1"] = {rtwname: "<S1>:5:1"};
	this.rtwnameHashMap["<S1>:2:1"] = {sid: "Traffic:1:2:1"};
	this.sidHashMap["Traffic:1:2:1"] = {rtwname: "<S1>:2:1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
