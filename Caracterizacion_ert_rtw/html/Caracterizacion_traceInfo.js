function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Analog Input */
	this.urlHashMap["Caracterizacion:3"] = "Caracterizacion.c:219,256&Caracterizacion.h:99&Caracterizacion_data.c:52";
	/* <Root>/Analog Input1 */
	this.urlHashMap["Caracterizacion:4"] = "Caracterizacion.c:222,259&Caracterizacion.h:102&Caracterizacion_data.c:55";
	/* <Root>/Constant */
	this.urlHashMap["Caracterizacion:7"] = "Caracterizacion.c:74&Caracterizacion.h:75&Caracterizacion_data.c:28";
	/* <Root>/Constant1 */
	this.urlHashMap["Caracterizacion:8"] = "Caracterizacion.c:94&Caracterizacion.h:78&Caracterizacion_data.c:31";
	/* <Root>/Constant3 */
	this.urlHashMap["Caracterizacion:11"] = "Caracterizacion.c:114&Caracterizacion.h:81&Caracterizacion_data.c:34";
	/* <Root>/Constant4 */
	this.urlHashMap["Caracterizacion:12"] = "Caracterizacion.c:134&Caracterizacion.h:84&Caracterizacion_data.c:37";
	/* <Root>/Constant5 */
	this.urlHashMap["Caracterizacion:13"] = "Caracterizacion.c:154&Caracterizacion.h:87&Caracterizacion_data.c:40";
	/* <Root>/Scope */
	this.urlHashMap["Caracterizacion:17"] = "msg=rtwMsg_reducedBlock&block=Caracterizacion:17";
	/* <Root>/Scope1 */
	this.urlHashMap["Caracterizacion:18"] = "msg=rtwMsg_reducedBlock&block=Caracterizacion:18";
	/* <Root>/Step */
	this.urlHashMap["Caracterizacion:21"] = "Caracterizacion.c:171,179&Caracterizacion.h:90,93,96&Caracterizacion_data.c:43,46,49";
	/* <S1>/Data Type Conversion */
	this.urlHashMap["Caracterizacion:1:11"] = "Caracterizacion.c:73,86";
	/* <S1>/Digital Output */
	this.urlHashMap["Caracterizacion:1:12"] = "Caracterizacion.c:88,89,262,292,293,299&Caracterizacion.h:59,63";
	/* <S2>/Data Type Conversion */
	this.urlHashMap["Caracterizacion:9:11"] = "Caracterizacion.c:93,106";
	/* <S2>/Digital Output */
	this.urlHashMap["Caracterizacion:9:12"] = "Caracterizacion.c:108,109,267,301,302,308&Caracterizacion.h:58,62";
	/* <S3>/Data Type Conversion */
	this.urlHashMap["Caracterizacion:14:11"] = "Caracterizacion.c:113,126";
	/* <S3>/Digital Output */
	this.urlHashMap["Caracterizacion:14:12"] = "Caracterizacion.c:128,129,272,310,311,317&Caracterizacion.h:57,61";
	/* <S4>/Data Type Conversion */
	this.urlHashMap["Caracterizacion:15:11"] = "Caracterizacion.c:133,146";
	/* <S4>/Digital Output */
	this.urlHashMap["Caracterizacion:15:12"] = "Caracterizacion.c:148,149,277,319,320,326&Caracterizacion.h:56,60";
	/* <S5>/Data Type Conversion */
	this.urlHashMap["Caracterizacion:5:114"] = "Caracterizacion.c:181,192";
	/* <S5>/PWM */
	this.urlHashMap["Caracterizacion:5:215"] = "Caracterizacion.c:194,285&Caracterizacion.h:72&Caracterizacion_data.c:25";
	/* <S6>/Data Type Conversion */
	this.urlHashMap["Caracterizacion:16:114"] = "Caracterizacion.c:153,166";
	/* <S6>/PWM */
	this.urlHashMap["Caracterizacion:16:215"] = "Caracterizacion.c:168,282&Caracterizacion.h:69&Caracterizacion_data.c:22";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Caracterizacion"};
	this.sidHashMap["Caracterizacion"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "Caracterizacion:1"};
	this.sidHashMap["Caracterizacion:1"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "Caracterizacion:9"};
	this.sidHashMap["Caracterizacion:9"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<S3>"] = {sid: "Caracterizacion:14"};
	this.sidHashMap["Caracterizacion:14"] = {rtwname: "<S3>"};
	this.rtwnameHashMap["<S4>"] = {sid: "Caracterizacion:15"};
	this.sidHashMap["Caracterizacion:15"] = {rtwname: "<S4>"};
	this.rtwnameHashMap["<S5>"] = {sid: "Caracterizacion:5"};
	this.sidHashMap["Caracterizacion:5"] = {rtwname: "<S5>"};
	this.rtwnameHashMap["<S6>"] = {sid: "Caracterizacion:16"};
	this.sidHashMap["Caracterizacion:16"] = {rtwname: "<S6>"};
	this.rtwnameHashMap["<Root>/Analog Input"] = {sid: "Caracterizacion:3"};
	this.sidHashMap["Caracterizacion:3"] = {rtwname: "<Root>/Analog Input"};
	this.rtwnameHashMap["<Root>/Analog Input1"] = {sid: "Caracterizacion:4"};
	this.sidHashMap["Caracterizacion:4"] = {rtwname: "<Root>/Analog Input1"};
	this.rtwnameHashMap["<Root>/Constant"] = {sid: "Caracterizacion:7"};
	this.sidHashMap["Caracterizacion:7"] = {rtwname: "<Root>/Constant"};
	this.rtwnameHashMap["<Root>/Constant1"] = {sid: "Caracterizacion:8"};
	this.sidHashMap["Caracterizacion:8"] = {rtwname: "<Root>/Constant1"};
	this.rtwnameHashMap["<Root>/Constant3"] = {sid: "Caracterizacion:11"};
	this.sidHashMap["Caracterizacion:11"] = {rtwname: "<Root>/Constant3"};
	this.rtwnameHashMap["<Root>/Constant4"] = {sid: "Caracterizacion:12"};
	this.sidHashMap["Caracterizacion:12"] = {rtwname: "<Root>/Constant4"};
	this.rtwnameHashMap["<Root>/Constant5"] = {sid: "Caracterizacion:13"};
	this.sidHashMap["Caracterizacion:13"] = {rtwname: "<Root>/Constant5"};
	this.rtwnameHashMap["<Root>/Digital Output"] = {sid: "Caracterizacion:1"};
	this.sidHashMap["Caracterizacion:1"] = {rtwname: "<Root>/Digital Output"};
	this.rtwnameHashMap["<Root>/Digital Output1"] = {sid: "Caracterizacion:9"};
	this.sidHashMap["Caracterizacion:9"] = {rtwname: "<Root>/Digital Output1"};
	this.rtwnameHashMap["<Root>/Digital Output2"] = {sid: "Caracterizacion:14"};
	this.sidHashMap["Caracterizacion:14"] = {rtwname: "<Root>/Digital Output2"};
	this.rtwnameHashMap["<Root>/Digital Output3"] = {sid: "Caracterizacion:15"};
	this.sidHashMap["Caracterizacion:15"] = {rtwname: "<Root>/Digital Output3"};
	this.rtwnameHashMap["<Root>/PWM"] = {sid: "Caracterizacion:5"};
	this.sidHashMap["Caracterizacion:5"] = {rtwname: "<Root>/PWM"};
	this.rtwnameHashMap["<Root>/PWM1"] = {sid: "Caracterizacion:16"};
	this.sidHashMap["Caracterizacion:16"] = {rtwname: "<Root>/PWM1"};
	this.rtwnameHashMap["<Root>/Scope"] = {sid: "Caracterizacion:17"};
	this.sidHashMap["Caracterizacion:17"] = {rtwname: "<Root>/Scope"};
	this.rtwnameHashMap["<Root>/Scope1"] = {sid: "Caracterizacion:18"};
	this.sidHashMap["Caracterizacion:18"] = {rtwname: "<Root>/Scope1"};
	this.rtwnameHashMap["<Root>/Step"] = {sid: "Caracterizacion:21"};
	this.sidHashMap["Caracterizacion:21"] = {rtwname: "<Root>/Step"};
	this.rtwnameHashMap["<S1>/In1"] = {sid: "Caracterizacion:1:7"};
	this.sidHashMap["Caracterizacion:1:7"] = {rtwname: "<S1>/In1"};
	this.rtwnameHashMap["<S1>/Data Type Conversion"] = {sid: "Caracterizacion:1:11"};
	this.sidHashMap["Caracterizacion:1:11"] = {rtwname: "<S1>/Data Type Conversion"};
	this.rtwnameHashMap["<S1>/Digital Output"] = {sid: "Caracterizacion:1:12"};
	this.sidHashMap["Caracterizacion:1:12"] = {rtwname: "<S1>/Digital Output"};
	this.rtwnameHashMap["<S2>/In1"] = {sid: "Caracterizacion:9:7"};
	this.sidHashMap["Caracterizacion:9:7"] = {rtwname: "<S2>/In1"};
	this.rtwnameHashMap["<S2>/Data Type Conversion"] = {sid: "Caracterizacion:9:11"};
	this.sidHashMap["Caracterizacion:9:11"] = {rtwname: "<S2>/Data Type Conversion"};
	this.rtwnameHashMap["<S2>/Digital Output"] = {sid: "Caracterizacion:9:12"};
	this.sidHashMap["Caracterizacion:9:12"] = {rtwname: "<S2>/Digital Output"};
	this.rtwnameHashMap["<S3>/In1"] = {sid: "Caracterizacion:14:7"};
	this.sidHashMap["Caracterizacion:14:7"] = {rtwname: "<S3>/In1"};
	this.rtwnameHashMap["<S3>/Data Type Conversion"] = {sid: "Caracterizacion:14:11"};
	this.sidHashMap["Caracterizacion:14:11"] = {rtwname: "<S3>/Data Type Conversion"};
	this.rtwnameHashMap["<S3>/Digital Output"] = {sid: "Caracterizacion:14:12"};
	this.sidHashMap["Caracterizacion:14:12"] = {rtwname: "<S3>/Digital Output"};
	this.rtwnameHashMap["<S4>/In1"] = {sid: "Caracterizacion:15:7"};
	this.sidHashMap["Caracterizacion:15:7"] = {rtwname: "<S4>/In1"};
	this.rtwnameHashMap["<S4>/Data Type Conversion"] = {sid: "Caracterizacion:15:11"};
	this.sidHashMap["Caracterizacion:15:11"] = {rtwname: "<S4>/Data Type Conversion"};
	this.rtwnameHashMap["<S4>/Digital Output"] = {sid: "Caracterizacion:15:12"};
	this.sidHashMap["Caracterizacion:15:12"] = {rtwname: "<S4>/Digital Output"};
	this.rtwnameHashMap["<S5>/In1"] = {sid: "Caracterizacion:5:116"};
	this.sidHashMap["Caracterizacion:5:116"] = {rtwname: "<S5>/In1"};
	this.rtwnameHashMap["<S5>/Data Type Conversion"] = {sid: "Caracterizacion:5:114"};
	this.sidHashMap["Caracterizacion:5:114"] = {rtwname: "<S5>/Data Type Conversion"};
	this.rtwnameHashMap["<S5>/PWM"] = {sid: "Caracterizacion:5:215"};
	this.sidHashMap["Caracterizacion:5:215"] = {rtwname: "<S5>/PWM"};
	this.rtwnameHashMap["<S6>/In1"] = {sid: "Caracterizacion:16:116"};
	this.sidHashMap["Caracterizacion:16:116"] = {rtwname: "<S6>/In1"};
	this.rtwnameHashMap["<S6>/Data Type Conversion"] = {sid: "Caracterizacion:16:114"};
	this.sidHashMap["Caracterizacion:16:114"] = {rtwname: "<S6>/Data Type Conversion"};
	this.rtwnameHashMap["<S6>/PWM"] = {sid: "Caracterizacion:16:215"};
	this.sidHashMap["Caracterizacion:16:215"] = {rtwname: "<S6>/PWM"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
