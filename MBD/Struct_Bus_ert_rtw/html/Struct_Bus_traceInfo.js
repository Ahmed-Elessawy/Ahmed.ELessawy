function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/In1 */
	this.urlHashMap["Struct_Bus:1"] = "Struct_Bus.c:41,46,51&Struct_Bus.h:46";
	/* <Root>/In2 */
	this.urlHashMap["Struct_Bus:8"] = "Struct_Bus.c:56&Struct_Bus.h:47";
	/* <Root>/In3 */
	this.urlHashMap["Struct_Bus:9"] = "Struct_Bus.c:57&Struct_Bus.h:48";
	/* <Root>/In4 */
	this.urlHashMap["Struct_Bus:10"] = "Struct_Bus.c:58&Struct_Bus.h:49";
	/* <Root>/Bus
Creator */
	this.urlHashMap["Struct_Bus:7"] = "msg=&block=Struct_Bus:7";
	/* <Root>/Out1 */
	this.urlHashMap["Struct_Bus:4"] = "Struct_Bus.c:40&Struct_Bus.h:54";
	/* <Root>/Out2 */
	this.urlHashMap["Struct_Bus:5"] = "Struct_Bus.c:45&Struct_Bus.h:55";
	/* <Root>/Out3 */
	this.urlHashMap["Struct_Bus:6"] = "Struct_Bus.c:50&Struct_Bus.h:56";
	/* <Root>/Out4 */
	this.urlHashMap["Struct_Bus:11"] = "Struct_Bus.c:55&Struct_Bus.h:57";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Struct_Bus"};
	this.sidHashMap["Struct_Bus"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/In1"] = {sid: "Struct_Bus:1"};
	this.sidHashMap["Struct_Bus:1"] = {rtwname: "<Root>/In1"};
	this.rtwnameHashMap["<Root>/In2"] = {sid: "Struct_Bus:8"};
	this.sidHashMap["Struct_Bus:8"] = {rtwname: "<Root>/In2"};
	this.rtwnameHashMap["<Root>/In3"] = {sid: "Struct_Bus:9"};
	this.sidHashMap["Struct_Bus:9"] = {rtwname: "<Root>/In3"};
	this.rtwnameHashMap["<Root>/In4"] = {sid: "Struct_Bus:10"};
	this.sidHashMap["Struct_Bus:10"] = {rtwname: "<Root>/In4"};
	this.rtwnameHashMap["<Root>/Bus Creator"] = {sid: "Struct_Bus:7"};
	this.sidHashMap["Struct_Bus:7"] = {rtwname: "<Root>/Bus Creator"};
	this.rtwnameHashMap["<Root>/Bus Selector"] = {sid: "Struct_Bus:3"};
	this.sidHashMap["Struct_Bus:3"] = {rtwname: "<Root>/Bus Selector"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "Struct_Bus:4"};
	this.sidHashMap["Struct_Bus:4"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<Root>/Out2"] = {sid: "Struct_Bus:5"};
	this.sidHashMap["Struct_Bus:5"] = {rtwname: "<Root>/Out2"};
	this.rtwnameHashMap["<Root>/Out3"] = {sid: "Struct_Bus:6"};
	this.sidHashMap["Struct_Bus:6"] = {rtwname: "<Root>/Out3"};
	this.rtwnameHashMap["<Root>/Out4"] = {sid: "Struct_Bus:11"};
	this.sidHashMap["Struct_Bus:11"] = {rtwname: "<Root>/Out4"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
