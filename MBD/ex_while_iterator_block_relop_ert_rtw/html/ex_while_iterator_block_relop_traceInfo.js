function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Constant */
	this.urlHashMap["ex_while_iterator_block_relop:2"] = "msg=rtwMsg_CodeGenerationReducedBlock&block=ex_while_iterator_block_relop:2";
	/* <Root>/Constant1 */
	this.urlHashMap["ex_while_iterator_block_relop:9"] = "msg=rtwMsg_CodeGenerationReducedBlock&block=ex_while_iterator_block_relop:9";
	/* <Root>/Number of Iterations */
	this.urlHashMap["ex_while_iterator_block_relop:8"] = "msg=rtwMsg_SimulationReducedBlock&block=ex_while_iterator_block_relop:8";
	/* <Root>/Relational
Operator */
	this.urlHashMap["ex_while_iterator_block_relop:10"] = "ex_while_iterator_block_relop.h:45&ex_while_iterator_block_relop_data.c:29";
	/* <Root>/While Iterator
Subsystem */
	this.urlHashMap["ex_while_iterator_block_relop:3"] = "msg=rtwMsg_CodeGenerationReducedBlock&block=ex_while_iterator_block_relop:3";
	/* <S1>/Memory */
	this.urlHashMap["ex_while_iterator_block_relop:13"] = "msg=rtwMsg_CodeGenerationReducedBlock&block=ex_while_iterator_block_relop:13";
	/* <S1>/Relational
Operator */
	this.urlHashMap["ex_while_iterator_block_relop:11"] = "msg=rtwMsg_CodeGenerationReducedBlock&block=ex_while_iterator_block_relop:11";
	/* <S1>/Sum */
	this.urlHashMap["ex_while_iterator_block_relop:12"] = "msg=rtwMsg_CodeGenerationReducedBlock&block=ex_while_iterator_block_relop:12";
	/* <S1>/While Iterator */
	this.urlHashMap["ex_while_iterator_block_relop:6"] = "msg=rtwMsg_CodeGenerationReducedBlock&block=ex_while_iterator_block_relop:6";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "ex_while_iterator_block_relop"};
	this.sidHashMap["ex_while_iterator_block_relop"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "ex_while_iterator_block_relop:3"};
	this.sidHashMap["ex_while_iterator_block_relop:3"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/Constant"] = {sid: "ex_while_iterator_block_relop:2"};
	this.sidHashMap["ex_while_iterator_block_relop:2"] = {rtwname: "<Root>/Constant"};
	this.rtwnameHashMap["<Root>/Constant1"] = {sid: "ex_while_iterator_block_relop:9"};
	this.sidHashMap["ex_while_iterator_block_relop:9"] = {rtwname: "<Root>/Constant1"};
	this.rtwnameHashMap["<Root>/Number of Iterations"] = {sid: "ex_while_iterator_block_relop:8"};
	this.sidHashMap["ex_while_iterator_block_relop:8"] = {rtwname: "<Root>/Number of Iterations"};
	this.rtwnameHashMap["<Root>/Relational Operator"] = {sid: "ex_while_iterator_block_relop:10"};
	this.sidHashMap["ex_while_iterator_block_relop:10"] = {rtwname: "<Root>/Relational Operator"};
	this.rtwnameHashMap["<Root>/While Iterator Subsystem"] = {sid: "ex_while_iterator_block_relop:3"};
	this.sidHashMap["ex_while_iterator_block_relop:3"] = {rtwname: "<Root>/While Iterator Subsystem"};
	this.rtwnameHashMap["<S1>/In1"] = {sid: "ex_while_iterator_block_relop:4"};
	this.sidHashMap["ex_while_iterator_block_relop:4"] = {rtwname: "<S1>/In1"};
	this.rtwnameHashMap["<S1>/IC"] = {sid: "ex_while_iterator_block_relop:5"};
	this.sidHashMap["ex_while_iterator_block_relop:5"] = {rtwname: "<S1>/IC"};
	this.rtwnameHashMap["<S1>/Memory"] = {sid: "ex_while_iterator_block_relop:13"};
	this.sidHashMap["ex_while_iterator_block_relop:13"] = {rtwname: "<S1>/Memory"};
	this.rtwnameHashMap["<S1>/Relational Operator"] = {sid: "ex_while_iterator_block_relop:11"};
	this.sidHashMap["ex_while_iterator_block_relop:11"] = {rtwname: "<S1>/Relational Operator"};
	this.rtwnameHashMap["<S1>/Sum"] = {sid: "ex_while_iterator_block_relop:12"};
	this.sidHashMap["ex_while_iterator_block_relop:12"] = {rtwname: "<S1>/Sum"};
	this.rtwnameHashMap["<S1>/While Iterator"] = {sid: "ex_while_iterator_block_relop:6"};
	this.sidHashMap["ex_while_iterator_block_relop:6"] = {rtwname: "<S1>/While Iterator"};
	this.rtwnameHashMap["<S1>/Out1"] = {sid: "ex_while_iterator_block_relop:7"};
	this.sidHashMap["ex_while_iterator_block_relop:7"] = {rtwname: "<S1>/Out1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
