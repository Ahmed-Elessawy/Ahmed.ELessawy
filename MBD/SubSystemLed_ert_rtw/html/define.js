function CodeDefine() { 
this.def = new Array();
this.def["rt_OneStep"] = {file: "ert_main_c.html",line:41,type:"fcn"};
this.def["main"] = {file: "ert_main_c.html",line:78,type:"fcn"};
this.def["SubSystemLed_U"] = {file: "SubSystemLed_c.html",line:28,type:"var"};
this.def["SubSystemLed_Y"] = {file: "SubSystemLed_c.html",line:31,type:"var"};
this.def["SubSystemLed_M_"] = {file: "SubSystemLed_c.html",line:34,type:"var"};
this.def["SubSystemLed_M"] = {file: "SubSystemLed_c.html",line:35,type:"var"};
this.def["rate_scheduler"] = {file: "SubSystemLed_c.html",line:43,type:"fcn"};
this.def["SubSystemLed_step"] = {file: "SubSystemLed_c.html",line:56,type:"fcn"};
this.def["SubSystemLed_initialize"] = {file: "SubSystemLed_c.html",line:95,type:"fcn"};
this.def["SubSystemLed_terminate"] = {file: "SubSystemLed_c.html",line:111,type:"fcn"};
this.def["ExtU_SubSystemLed_T"] = {file: "SubSystemLed_h.html",line:46,type:"type"};
this.def["ExtY_SubSystemLed_T"] = {file: "SubSystemLed_h.html",line:51,type:"type"};
this.def["RT_MODEL_SubSystemLed_T"] = {file: "SubSystemLed_types_h.html",line:28,type:"type"};
this.def["int8_T"] = {file: "rtwtypes_h.html",line:55,type:"type"};
this.def["uint8_T"] = {file: "rtwtypes_h.html",line:56,type:"type"};
this.def["int16_T"] = {file: "rtwtypes_h.html",line:57,type:"type"};
this.def["uint16_T"] = {file: "rtwtypes_h.html",line:58,type:"type"};
this.def["int32_T"] = {file: "rtwtypes_h.html",line:59,type:"type"};
this.def["uint32_T"] = {file: "rtwtypes_h.html",line:60,type:"type"};
this.def["real32_T"] = {file: "rtwtypes_h.html",line:61,type:"type"};
this.def["real64_T"] = {file: "rtwtypes_h.html",line:62,type:"type"};
this.def["real_T"] = {file: "rtwtypes_h.html",line:68,type:"type"};
this.def["time_T"] = {file: "rtwtypes_h.html",line:69,type:"type"};
this.def["boolean_T"] = {file: "rtwtypes_h.html",line:70,type:"type"};
this.def["int_T"] = {file: "rtwtypes_h.html",line:71,type:"type"};
this.def["uint_T"] = {file: "rtwtypes_h.html",line:72,type:"type"};
this.def["ulong_T"] = {file: "rtwtypes_h.html",line:73,type:"type"};
this.def["char_T"] = {file: "rtwtypes_h.html",line:74,type:"type"};
this.def["uchar_T"] = {file: "rtwtypes_h.html",line:75,type:"type"};
this.def["byte_T"] = {file: "rtwtypes_h.html",line:76,type:"type"};
this.def["creal32_T"] = {file: "rtwtypes_h.html",line:86,type:"type"};
this.def["creal64_T"] = {file: "rtwtypes_h.html",line:91,type:"type"};
this.def["creal_T"] = {file: "rtwtypes_h.html",line:96,type:"type"};
this.def["cint8_T"] = {file: "rtwtypes_h.html",line:103,type:"type"};
this.def["cuint8_T"] = {file: "rtwtypes_h.html",line:110,type:"type"};
this.def["cint16_T"] = {file: "rtwtypes_h.html",line:117,type:"type"};
this.def["cuint16_T"] = {file: "rtwtypes_h.html",line:124,type:"type"};
this.def["cint32_T"] = {file: "rtwtypes_h.html",line:131,type:"type"};
this.def["cuint32_T"] = {file: "rtwtypes_h.html",line:138,type:"type"};
this.def["pointer_T"] = {file: "rtwtypes_h.html",line:156,type:"type"};
}
CodeDefine.instance = new CodeDefine();
var testHarnessInfo = {OwnerFileName: "", HarnessOwner: "", HarnessName: "", IsTestHarness: "0"};
var relPathToBuildDir = "../ert_main.c";
var fileSep = "\\";
var isPC = true;
function Html2SrcLink() {
	this.html2SrcPath = new Array;
	this.html2Root = new Array;
	this.html2SrcPath["ert_main_c.html"] = "../ert_main.c";
	this.html2Root["ert_main_c.html"] = "ert_main_c.html";
	this.html2SrcPath["SubSystemLed_c.html"] = "../SubSystemLed.c";
	this.html2Root["SubSystemLed_c.html"] = "SubSystemLed_c.html";
	this.html2SrcPath["SubSystemLed_h.html"] = "../SubSystemLed.h";
	this.html2Root["SubSystemLed_h.html"] = "SubSystemLed_h.html";
	this.html2SrcPath["SubSystemLed_private_h.html"] = "../SubSystemLed_private.h";
	this.html2Root["SubSystemLed_private_h.html"] = "SubSystemLed_private_h.html";
	this.html2SrcPath["SubSystemLed_types_h.html"] = "../SubSystemLed_types.h";
	this.html2Root["SubSystemLed_types_h.html"] = "SubSystemLed_types_h.html";
	this.html2SrcPath["rtwtypes_h.html"] = "../rtwtypes.h";
	this.html2Root["rtwtypes_h.html"] = "rtwtypes_h.html";
	this.getLink2Src = function (htmlFileName) {
		 if (this.html2SrcPath[htmlFileName])
			 return this.html2SrcPath[htmlFileName];
		 else
			 return null;
	}
	this.getLinkFromRoot = function (htmlFileName) {
		 if (this.html2Root[htmlFileName])
			 return this.html2Root[htmlFileName];
		 else
			 return null;
	}
}
Html2SrcLink.instance = new Html2SrcLink();
var fileList = [
"ert_main_c.html","SubSystemLed_c.html","SubSystemLed_h.html","SubSystemLed_private_h.html","SubSystemLed_types_h.html","rtwtypes_h.html"];
