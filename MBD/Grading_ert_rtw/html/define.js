function CodeDefine() { 
this.def = new Array();
this.def["rt_OneStep"] = {file: "ert_main_c.html",line:41,type:"fcn"};
this.def["main"] = {file: "ert_main_c.html",line:78,type:"fcn"};
this.def["Grading_U"] = {file: "Grading_c.html",line:28,type:"var"};
this.def["Grading_Y"] = {file: "Grading_c.html",line:31,type:"var"};
this.def["Grading_M_"] = {file: "Grading_c.html",line:34,type:"var"};
this.def["Grading_M"] = {file: "Grading_c.html",line:35,type:"var"};
this.def["Grading_IfActionSubsystem"] = {file: "Grading_c.html",line:42,type:"fcn"};
this.def["Grading_step"] = {file: "Grading_c.html",line:51,type:"fcn"};
this.def["Grading_initialize"] = {file: "Grading_c.html",line:111,type:"fcn"};
this.def["Grading_terminate"] = {file: "Grading_c.html",line:126,type:"fcn"};
this.def["ExtU_Grading_T"] = {file: "Grading_h.html",line:46,type:"type"};
this.def["ExtY_Grading_T"] = {file: "Grading_h.html",line:51,type:"type"};
this.def["RT_MODEL_Grading_T"] = {file: "Grading_types_h.html",line:28,type:"type"};
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
	this.html2SrcPath["Grading_c.html"] = "../Grading.c";
	this.html2Root["Grading_c.html"] = "Grading_c.html";
	this.html2SrcPath["Grading_h.html"] = "../Grading.h";
	this.html2Root["Grading_h.html"] = "Grading_h.html";
	this.html2SrcPath["Grading_private_h.html"] = "../Grading_private.h";
	this.html2Root["Grading_private_h.html"] = "Grading_private_h.html";
	this.html2SrcPath["Grading_types_h.html"] = "../Grading_types.h";
	this.html2Root["Grading_types_h.html"] = "Grading_types_h.html";
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
"ert_main_c.html","Grading_c.html","Grading_h.html","Grading_private_h.html","Grading_types_h.html","rtwtypes_h.html"];