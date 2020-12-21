function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/1- Negativo */
	this.urlHashMap["PruebaAdc:28"] = "PruebaAdc.c:272&PruebaAdc.h:201&PruebaAdc_data.c:206";
	/* <Root>/1- Negativo1 */
	this.urlHashMap["PruebaAdc:65"] = "PruebaAdc.c:215&PruebaAdc.h:174&PruebaAdc_data.c:167";
	/* <Root>/1-posiit */
	this.urlHashMap["PruebaAdc:27"] = "PruebaAdc.c:263&PruebaAdc.h:198&PruebaAdc_data.c:203";
	/* <Root>/1-posiit1 */
	this.urlHashMap["PruebaAdc:66"] = "PruebaAdc.c:224&PruebaAdc.h:177&PruebaAdc_data.c:170";
	/* <Root>/Abs */
	this.urlHashMap["PruebaAdc:77"] = "PruebaAdc.c:288";
	/* <Root>/Add */
	this.urlHashMap["PruebaAdc:17"] = "PruebaAdc.c:201";
	/* <Root>/Add1 */
	this.urlHashMap["PruebaAdc:20"] = "PruebaAdc.c:239";
	/* <Root>/Add2 */
	this.urlHashMap["PruebaAdc:25"] = "PruebaAdc.c:240";
	/* <Root>/Add3 */
	this.urlHashMap["PruebaAdc:34"] = "PruebaAdc.c:206";
	/* <Root>/Add4 */
	this.urlHashMap["PruebaAdc:39"] = "PruebaAdc.c:245";
	/* <Root>/Constant2 */
	this.urlHashMap["PruebaAdc:18"] = "PruebaAdc.c:199&PruebaAdc.h:165&PruebaAdc_data.c:158";
	/* <Root>/Constant3 */
	this.urlHashMap["PruebaAdc:21"] = "PruebaAdc.c:236&PruebaAdc.h:186&PruebaAdc_data.c:191";
	/* <Root>/Constant4 */
	this.urlHashMap["PruebaAdc:26"] = "PruebaAdc.c:237&PruebaAdc.h:189&PruebaAdc_data.c:194";
	/* <Root>/Gain */
	this.urlHashMap["PruebaAdc:19"] = "PruebaAdc.c:198&PruebaAdc.h:85,168&PruebaAdc_data.c:161";
	/* <Root>/Gain1 */
	this.urlHashMap["PruebaAdc:22"] = "PruebaAdc.c:235&PruebaAdc.h:86,192&PruebaAdc_data.c:197";
	/* <Root>/Gain2 */
	this.urlHashMap["PruebaAdc:88"] = "PruebaAdc.c:381&PruebaAdc.h:240&PruebaAdc_data.c:245";
	/* <Root>/Logical
Operator */
	this.urlHashMap["PruebaAdc:48"] = "PruebaAdc.c:274";
	/* <Root>/Logical
Operator1 */
	this.urlHashMap["PruebaAdc:49"] = "PruebaAdc.c:265";
	/* <Root>/Logical
Operator2 */
	this.urlHashMap["PruebaAdc:70"] = "PruebaAdc.c:217";
	/* <Root>/Logical
Operator3 */
	this.urlHashMap["PruebaAdc:71"] = "PruebaAdc.c:226";
	/* <Root>/MATLAB Function */
	this.urlHashMap["PruebaAdc:56"] = "PruebaAdc.c:340,352";
	/* <Root>/MATLAB Function1 */
	this.urlHashMap["PruebaAdc:99"] = "PruebaAdc.c:391,408";
	/* <Root>/MATLAB Function2 */
	this.urlHashMap["PruebaAdc:95"] = "PruebaAdc.c:384";
	/* <Root>/Posicion grados */
	this.urlHashMap["PruebaAdc:24"] = "PruebaAdc.h:104";
	/* <Root>/Posicion mm */
	this.urlHashMap["PruebaAdc:4"] = "PruebaAdc.h:108";
	/* <Root>/Prismatico */
	this.urlHashMap["PruebaAdc:2"] = "PruebaAdc.c:195,200,563&PruebaAdc.h:243&PruebaAdc_data.c:248";
	/* <Root>/Rotacional */
	this.urlHashMap["PruebaAdc:23"] = "PruebaAdc.c:232,238,576&PruebaAdc.h:246&PruebaAdc_data.c:251";
	/* <Root>/Saturation */
	this.urlHashMap["PruebaAdc:38"] = "PruebaAdc.c:297,308&PruebaAdc.h:216,219&PruebaAdc_data.c:221,224";
	/* <Root>/Saturation1 */
	this.urlHashMap["PruebaAdc:79"] = "PruebaAdc.c:354,365&PruebaAdc.h:234,237&PruebaAdc_data.c:239,242";
	/* <Root>/XY Graph */
	this.urlHashMap["PruebaAdc:104"] = "msg=rtwMsg_CodeGenerationReducedBlock&block=PruebaAdc:104";
	/* <S1>/Compare */
	this.urlHashMap["PruebaAdc:47:2"] = "PruebaAdc.c:257";
	/* <S1>/Constant */
	this.urlHashMap["PruebaAdc:47:3"] = "PruebaAdc.c:258&PruebaAdc.h:195&PruebaAdc_data.c:200";
	/* <S2>/Compare */
	this.urlHashMap["PruebaAdc:67:2"] = "PruebaAdc.c:209";
	/* <S2>/Constant */
	this.urlHashMap["PruebaAdc:67:3"] = "PruebaAdc.c:210&PruebaAdc.h:171&PruebaAdc_data.c:164";
	/* <S3>/Data Type Conversion */
	this.urlHashMap["PruebaAdc:10:11"] = "PruebaAdc.c:216";
	/* <S3>/Digital Output */
	this.urlHashMap["PruebaAdc:10:12"] = "PruebaAdc.c:214,218,566,611,612,618&PruebaAdc.h:113,117";
	/* <S4>/Data Type Conversion */
	this.urlHashMap["PruebaAdc:11:11"] = "PruebaAdc.c:225";
	/* <S4>/Digital Output */
	this.urlHashMap["PruebaAdc:11:12"] = "PruebaAdc.c:223,227,571,620,621,627&PruebaAdc.h:112,116";
	/* <S5>/Data Type Conversion */
	this.urlHashMap["PruebaAdc:29:11"] = "PruebaAdc.c:264";
	/* <S5>/Digital Output */
	this.urlHashMap["PruebaAdc:29:12"] = "PruebaAdc.c:262,266,579,629,630,636&PruebaAdc.h:111,115";
	/* <S6>/Data Type Conversion */
	this.urlHashMap["PruebaAdc:30:11"] = "PruebaAdc.c:273";
	/* <S6>/Digital Output */
	this.urlHashMap["PruebaAdc:30:12"] = "PruebaAdc.c:271,275,584,638,639,645&PruebaAdc.h:110,114";
	/* <S7>/Derivative Gain */
	this.urlHashMap["PruebaAdc:33:1668"] = "PruebaAdc.c:282&PruebaAdc.h:129&PruebaAdc_data.c:110";
	/* <S7>/Filter */
	this.urlHashMap["PruebaAdc:33:1670"] = "PruebaAdc.c:281,426,598&PruebaAdc.h:99,210,213&PruebaAdc_data.c:215,218";
	/* <S7>/Filter Coefficient */
	this.urlHashMap["PruebaAdc:33:1671"] = "PruebaAdc.c:280&PruebaAdc.h:87,141&PruebaAdc_data.c:122";
	/* <S7>/Integral Gain */
	this.urlHashMap["PruebaAdc:33:1667"] = "PruebaAdc.c:416&PruebaAdc.h:91,135&PruebaAdc_data.c:116";
	/* <S7>/Integrator */
	this.urlHashMap["PruebaAdc:33:1669"] = "PruebaAdc.c:289,422,595&PruebaAdc.h:98,204,207&PruebaAdc_data.c:209,212";
	/* <S7>/Proportional Gain */
	this.urlHashMap["PruebaAdc:33:1666"] = "PruebaAdc.c:290&PruebaAdc.h:147&PruebaAdc_data.c:128";
	/* <S7>/Sum */
	this.urlHashMap["PruebaAdc:33:1665"] = "PruebaAdc.c:291";
	/* <S7>/SumD */
	this.urlHashMap["PruebaAdc:33:1672"] = "PruebaAdc.c:283";
	/* <S8>/Derivative Gain */
	this.urlHashMap["PruebaAdc:41:1668"] = "PruebaAdc.c:326&PruebaAdc.h:132&PruebaAdc_data.c:113";
	/* <S8>/Filter */
	this.urlHashMap["PruebaAdc:41:1670"] = "PruebaAdc.c:325,434,604&PruebaAdc.h:101,228,231&PruebaAdc_data.c:233,236";
	/* <S8>/Filter Coefficient */
	this.urlHashMap["PruebaAdc:41:1671"] = "PruebaAdc.c:324&PruebaAdc.h:88,144&PruebaAdc_data.c:125";
	/* <S8>/Integral Gain */
	this.urlHashMap["PruebaAdc:41:1667"] = "PruebaAdc.c:419&PruebaAdc.h:92,138&PruebaAdc_data.c:119";
	/* <S8>/Integrator */
	this.urlHashMap["PruebaAdc:41:1669"] = "PruebaAdc.c:334,430,601&PruebaAdc.h:100,222,225&PruebaAdc_data.c:227,230";
	/* <S8>/Proportional Gain */
	this.urlHashMap["PruebaAdc:41:1666"] = "PruebaAdc.c:335&PruebaAdc.h:150&PruebaAdc_data.c:131";
	/* <S8>/Sum */
	this.urlHashMap["PruebaAdc:41:1665"] = "PruebaAdc.c:333";
	/* <S8>/SumD */
	this.urlHashMap["PruebaAdc:41:1672"] = "PruebaAdc.c:327";
	/* <S9>:1 */
	this.urlHashMap["PruebaAdc:56:1"] = "PruebaAdc.c:341";
	/* <S9>:1:2 */
	this.urlHashMap["PruebaAdc:56:1:2"] = "PruebaAdc.c:342";
	/* <S9>:1:3 */
	this.urlHashMap["PruebaAdc:56:1:3"] = "PruebaAdc.c:344";
	/* <S9>:1:4 */
	this.urlHashMap["PruebaAdc:56:1:4"] = "PruebaAdc.c:347";
	/* <S9>:1:5 */
	this.urlHashMap["PruebaAdc:56:1:5"] = "PruebaAdc.c:348";
	/* <S10>:1 */
	this.urlHashMap["PruebaAdc:99:1"] = "PruebaAdc.c:392";
	/* <S10>:1:2 */
	this.urlHashMap["PruebaAdc:99:1:2"] = "PruebaAdc.c:393";
	/* <S10>:1:3 */
	this.urlHashMap["PruebaAdc:99:1:3"] = "PruebaAdc.c:395";
	/* <S10>:1:4 */
	this.urlHashMap["PruebaAdc:99:1:4"] = "PruebaAdc.c:399";
	/* <S10>:1:5 */
	this.urlHashMap["PruebaAdc:99:1:5"] = "PruebaAdc.c:400";
	/* <S10>:1:7 */
	this.urlHashMap["PruebaAdc:99:1:7"] = "PruebaAdc.c:405";
	/* <S11>:1 */
	this.urlHashMap["PruebaAdc:95:1"] = "PruebaAdc.c:385";
	/* <S11>:1:3 */
	this.urlHashMap["PruebaAdc:95:1:3"] = "PruebaAdc.c:386";
	/* <S12>/Data Type Conversion */
	this.urlHashMap["PruebaAdc:14:114"] = "PruebaAdc.c:299,303,310";
	/* <S12>/PWM */
	this.urlHashMap["PruebaAdc:14:215"] = "PruebaAdc.c:321,589&PruebaAdc.h:153&PruebaAdc_data.c:134";
	/* <S13>/Data Type Conversion */
	this.urlHashMap["PruebaAdc:31:114"] = "PruebaAdc.c:356,360,367";
	/* <S13>/PWM */
	this.urlHashMap["PruebaAdc:31:215"] = "PruebaAdc.c:378,592&PruebaAdc.h:156&PruebaAdc_data.c:137";
	/* <S14>/r->x */
	this.urlHashMap["PruebaAdc:103:192"] = "PruebaAdc.c:410&PruebaAdc.h:89";
	/* <S14>/theta->y */
	this.urlHashMap["PruebaAdc:103:193"] = "PruebaAdc.c:413&PruebaAdc.h:90";
	/* <S15>/Clock */
	this.urlHashMap["PruebaAdc:73:167"] = "PruebaAdc.c:184";
	/* <S15>/Constant */
	this.urlHashMap["PruebaAdc:73:168"] = "PruebaAdc.c:185&PruebaAdc.h:159&PruebaAdc_data.c:140";
	/* <S15>/Look-Up Table1 */
	this.urlHashMap["PruebaAdc:73:223"] = "PruebaAdc.c:186&PruebaAdc.h:123,162&PruebaAdc_data.c:22,144";
	/* <S15>/Math
Function */
	this.urlHashMap["PruebaAdc:73:170"] = "PruebaAdc.c:187";
	/* <S15>/Output */
	this.urlHashMap["PruebaAdc:73:171"] = "PruebaAdc.c:183&PruebaAdc.h:84";
	/* <S15>/Sum */
	this.urlHashMap["PruebaAdc:73:172"] = "PruebaAdc.c:189";
	/* <S15>/startTime */
	this.urlHashMap["PruebaAdc:73:173"] = "PruebaAdc.c:188";
	/* <S16>/Clock */
	this.urlHashMap["PruebaAdc:74:167"] = "PruebaAdc.c:246";
	/* <S16>/Constant */
	this.urlHashMap["PruebaAdc:74:168"] = "PruebaAdc.c:247&PruebaAdc.h:180&PruebaAdc_data.c:173";
	/* <S16>/Look-Up Table1 */
	this.urlHashMap["PruebaAdc:74:223"] = "PruebaAdc.c:248&PruebaAdc.h:126,183&PruebaAdc_data.c:65,177";
	/* <S16>/Math
Function */
	this.urlHashMap["PruebaAdc:74:170"] = "PruebaAdc.c:249";
	/* <S16>/Output */
	this.urlHashMap["PruebaAdc:74:171"] = "msg=rtwMsg_SimulationReducedBlock&block=PruebaAdc:74:171";
	/* <S16>/Sum */
	this.urlHashMap["PruebaAdc:74:172"] = "PruebaAdc.c:251";
	/* <S16>/startTime */
	this.urlHashMap["PruebaAdc:74:173"] = "PruebaAdc.c:250";
	/* <S17>/Data Type Conversion */
	this.urlHashMap["PruebaAdc:104:3"] = "msg=rtwMsg_CodeGenerationReducedBlock&block=PruebaAdc:104:3";
	/* <S17>/Data Type Conversion1 */
	this.urlHashMap["PruebaAdc:104:4"] = "msg=rtwMsg_CodeGenerationReducedBlock&block=PruebaAdc:104:4";
	/* <S17>/sfunxy */
	this.urlHashMap["PruebaAdc:104:6"] = "msg=rtwMsg_CodeGenerationReducedBlock&block=PruebaAdc:104:6";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "PruebaAdc"};
	this.sidHashMap["PruebaAdc"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "PruebaAdc:47"};
	this.sidHashMap["PruebaAdc:47"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "PruebaAdc:67"};
	this.sidHashMap["PruebaAdc:67"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<S3>"] = {sid: "PruebaAdc:10"};
	this.sidHashMap["PruebaAdc:10"] = {rtwname: "<S3>"};
	this.rtwnameHashMap["<S4>"] = {sid: "PruebaAdc:11"};
	this.sidHashMap["PruebaAdc:11"] = {rtwname: "<S4>"};
	this.rtwnameHashMap["<S5>"] = {sid: "PruebaAdc:29"};
	this.sidHashMap["PruebaAdc:29"] = {rtwname: "<S5>"};
	this.rtwnameHashMap["<S6>"] = {sid: "PruebaAdc:30"};
	this.sidHashMap["PruebaAdc:30"] = {rtwname: "<S6>"};
	this.rtwnameHashMap["<S7>"] = {sid: "PruebaAdc:33"};
	this.sidHashMap["PruebaAdc:33"] = {rtwname: "<S7>"};
	this.rtwnameHashMap["<S8>"] = {sid: "PruebaAdc:41"};
	this.sidHashMap["PruebaAdc:41"] = {rtwname: "<S8>"};
	this.rtwnameHashMap["<S9>"] = {sid: "PruebaAdc:56"};
	this.sidHashMap["PruebaAdc:56"] = {rtwname: "<S9>"};
	this.rtwnameHashMap["<S10>"] = {sid: "PruebaAdc:99"};
	this.sidHashMap["PruebaAdc:99"] = {rtwname: "<S10>"};
	this.rtwnameHashMap["<S11>"] = {sid: "PruebaAdc:95"};
	this.sidHashMap["PruebaAdc:95"] = {rtwname: "<S11>"};
	this.rtwnameHashMap["<S12>"] = {sid: "PruebaAdc:14"};
	this.sidHashMap["PruebaAdc:14"] = {rtwname: "<S12>"};
	this.rtwnameHashMap["<S13>"] = {sid: "PruebaAdc:31"};
	this.sidHashMap["PruebaAdc:31"] = {rtwname: "<S13>"};
	this.rtwnameHashMap["<S14>"] = {sid: "PruebaAdc:103"};
	this.sidHashMap["PruebaAdc:103"] = {rtwname: "<S14>"};
	this.rtwnameHashMap["<S15>"] = {sid: "PruebaAdc:73"};
	this.sidHashMap["PruebaAdc:73"] = {rtwname: "<S15>"};
	this.rtwnameHashMap["<S16>"] = {sid: "PruebaAdc:74"};
	this.sidHashMap["PruebaAdc:74"] = {rtwname: "<S16>"};
	this.rtwnameHashMap["<S17>"] = {sid: "PruebaAdc:104"};
	this.sidHashMap["PruebaAdc:104"] = {rtwname: "<S17>"};
	this.rtwnameHashMap["<Root>/1- Negativo"] = {sid: "PruebaAdc:28"};
	this.sidHashMap["PruebaAdc:28"] = {rtwname: "<Root>/1- Negativo"};
	this.rtwnameHashMap["<Root>/1- Negativo1"] = {sid: "PruebaAdc:65"};
	this.sidHashMap["PruebaAdc:65"] = {rtwname: "<Root>/1- Negativo1"};
	this.rtwnameHashMap["<Root>/1-posiit"] = {sid: "PruebaAdc:27"};
	this.sidHashMap["PruebaAdc:27"] = {rtwname: "<Root>/1-posiit"};
	this.rtwnameHashMap["<Root>/1-posiit1"] = {sid: "PruebaAdc:66"};
	this.sidHashMap["PruebaAdc:66"] = {rtwname: "<Root>/1-posiit1"};
	this.rtwnameHashMap["<Root>/Abs"] = {sid: "PruebaAdc:77"};
	this.sidHashMap["PruebaAdc:77"] = {rtwname: "<Root>/Abs"};
	this.rtwnameHashMap["<Root>/Add"] = {sid: "PruebaAdc:17"};
	this.sidHashMap["PruebaAdc:17"] = {rtwname: "<Root>/Add"};
	this.rtwnameHashMap["<Root>/Add1"] = {sid: "PruebaAdc:20"};
	this.sidHashMap["PruebaAdc:20"] = {rtwname: "<Root>/Add1"};
	this.rtwnameHashMap["<Root>/Add2"] = {sid: "PruebaAdc:25"};
	this.sidHashMap["PruebaAdc:25"] = {rtwname: "<Root>/Add2"};
	this.rtwnameHashMap["<Root>/Add3"] = {sid: "PruebaAdc:34"};
	this.sidHashMap["PruebaAdc:34"] = {rtwname: "<Root>/Add3"};
	this.rtwnameHashMap["<Root>/Add4"] = {sid: "PruebaAdc:39"};
	this.sidHashMap["PruebaAdc:39"] = {rtwname: "<Root>/Add4"};
	this.rtwnameHashMap["<Root>/Compare To Zero"] = {sid: "PruebaAdc:47"};
	this.sidHashMap["PruebaAdc:47"] = {rtwname: "<Root>/Compare To Zero"};
	this.rtwnameHashMap["<Root>/Compare To Zero1"] = {sid: "PruebaAdc:67"};
	this.sidHashMap["PruebaAdc:67"] = {rtwname: "<Root>/Compare To Zero1"};
	this.rtwnameHashMap["<Root>/Constant2"] = {sid: "PruebaAdc:18"};
	this.sidHashMap["PruebaAdc:18"] = {rtwname: "<Root>/Constant2"};
	this.rtwnameHashMap["<Root>/Constant3"] = {sid: "PruebaAdc:21"};
	this.sidHashMap["PruebaAdc:21"] = {rtwname: "<Root>/Constant3"};
	this.rtwnameHashMap["<Root>/Constant4"] = {sid: "PruebaAdc:26"};
	this.sidHashMap["PruebaAdc:26"] = {rtwname: "<Root>/Constant4"};
	this.rtwnameHashMap["<Root>/Digital Output"] = {sid: "PruebaAdc:10"};
	this.sidHashMap["PruebaAdc:10"] = {rtwname: "<Root>/Digital Output"};
	this.rtwnameHashMap["<Root>/Digital Output1"] = {sid: "PruebaAdc:11"};
	this.sidHashMap["PruebaAdc:11"] = {rtwname: "<Root>/Digital Output1"};
	this.rtwnameHashMap["<Root>/Digital Output2"] = {sid: "PruebaAdc:29"};
	this.sidHashMap["PruebaAdc:29"] = {rtwname: "<Root>/Digital Output2"};
	this.rtwnameHashMap["<Root>/Digital Output3"] = {sid: "PruebaAdc:30"};
	this.sidHashMap["PruebaAdc:30"] = {rtwname: "<Root>/Digital Output3"};
	this.rtwnameHashMap["<Root>/Discrete PID Controller"] = {sid: "PruebaAdc:33"};
	this.sidHashMap["PruebaAdc:33"] = {rtwname: "<Root>/Discrete PID Controller"};
	this.rtwnameHashMap["<Root>/Discrete PID Controller1"] = {sid: "PruebaAdc:41"};
	this.sidHashMap["PruebaAdc:41"] = {rtwname: "<Root>/Discrete PID Controller1"};
	this.rtwnameHashMap["<Root>/Gain"] = {sid: "PruebaAdc:19"};
	this.sidHashMap["PruebaAdc:19"] = {rtwname: "<Root>/Gain"};
	this.rtwnameHashMap["<Root>/Gain1"] = {sid: "PruebaAdc:22"};
	this.sidHashMap["PruebaAdc:22"] = {rtwname: "<Root>/Gain1"};
	this.rtwnameHashMap["<Root>/Gain2"] = {sid: "PruebaAdc:88"};
	this.sidHashMap["PruebaAdc:88"] = {rtwname: "<Root>/Gain2"};
	this.rtwnameHashMap["<Root>/Logical Operator"] = {sid: "PruebaAdc:48"};
	this.sidHashMap["PruebaAdc:48"] = {rtwname: "<Root>/Logical Operator"};
	this.rtwnameHashMap["<Root>/Logical Operator1"] = {sid: "PruebaAdc:49"};
	this.sidHashMap["PruebaAdc:49"] = {rtwname: "<Root>/Logical Operator1"};
	this.rtwnameHashMap["<Root>/Logical Operator2"] = {sid: "PruebaAdc:70"};
	this.sidHashMap["PruebaAdc:70"] = {rtwname: "<Root>/Logical Operator2"};
	this.rtwnameHashMap["<Root>/Logical Operator3"] = {sid: "PruebaAdc:71"};
	this.sidHashMap["PruebaAdc:71"] = {rtwname: "<Root>/Logical Operator3"};
	this.rtwnameHashMap["<Root>/MATLAB Function"] = {sid: "PruebaAdc:56"};
	this.sidHashMap["PruebaAdc:56"] = {rtwname: "<Root>/MATLAB Function"};
	this.rtwnameHashMap["<Root>/MATLAB Function1"] = {sid: "PruebaAdc:99"};
	this.sidHashMap["PruebaAdc:99"] = {rtwname: "<Root>/MATLAB Function1"};
	this.rtwnameHashMap["<Root>/MATLAB Function2"] = {sid: "PruebaAdc:95"};
	this.sidHashMap["PruebaAdc:95"] = {rtwname: "<Root>/MATLAB Function2"};
	this.rtwnameHashMap["<Root>/Mux"] = {sid: "PruebaAdc:76"};
	this.sidHashMap["PruebaAdc:76"] = {rtwname: "<Root>/Mux"};
	this.rtwnameHashMap["<Root>/PWM"] = {sid: "PruebaAdc:14"};
	this.sidHashMap["PruebaAdc:14"] = {rtwname: "<Root>/PWM"};
	this.rtwnameHashMap["<Root>/PWM1"] = {sid: "PruebaAdc:31"};
	this.sidHashMap["PruebaAdc:31"] = {rtwname: "<Root>/PWM1"};
	this.rtwnameHashMap["<Root>/Polar to Cartesian"] = {sid: "PruebaAdc:103"};
	this.sidHashMap["PruebaAdc:103"] = {rtwname: "<Root>/Polar to Cartesian"};
	this.rtwnameHashMap["<Root>/Posicion grados"] = {sid: "PruebaAdc:24"};
	this.sidHashMap["PruebaAdc:24"] = {rtwname: "<Root>/Posicion grados"};
	this.rtwnameHashMap["<Root>/Posicion mm"] = {sid: "PruebaAdc:4"};
	this.sidHashMap["PruebaAdc:4"] = {rtwname: "<Root>/Posicion mm"};
	this.rtwnameHashMap["<Root>/Prismatico"] = {sid: "PruebaAdc:2"};
	this.sidHashMap["PruebaAdc:2"] = {rtwname: "<Root>/Prismatico"};
	this.rtwnameHashMap["<Root>/Repeating Sequence"] = {sid: "PruebaAdc:73"};
	this.sidHashMap["PruebaAdc:73"] = {rtwname: "<Root>/Repeating Sequence"};
	this.rtwnameHashMap["<Root>/Repeating Sequence1"] = {sid: "PruebaAdc:74"};
	this.sidHashMap["PruebaAdc:74"] = {rtwname: "<Root>/Repeating Sequence1"};
	this.rtwnameHashMap["<Root>/Rotacional"] = {sid: "PruebaAdc:23"};
	this.sidHashMap["PruebaAdc:23"] = {rtwname: "<Root>/Rotacional"};
	this.rtwnameHashMap["<Root>/Saturation"] = {sid: "PruebaAdc:38"};
	this.sidHashMap["PruebaAdc:38"] = {rtwname: "<Root>/Saturation"};
	this.rtwnameHashMap["<Root>/Saturation1"] = {sid: "PruebaAdc:79"};
	this.sidHashMap["PruebaAdc:79"] = {rtwname: "<Root>/Saturation1"};
	this.rtwnameHashMap["<Root>/XY Graph"] = {sid: "PruebaAdc:104"};
	this.sidHashMap["PruebaAdc:104"] = {rtwname: "<Root>/XY Graph"};
	this.rtwnameHashMap["<S1>/u"] = {sid: "PruebaAdc:47:1"};
	this.sidHashMap["PruebaAdc:47:1"] = {rtwname: "<S1>/u"};
	this.rtwnameHashMap["<S1>/Compare"] = {sid: "PruebaAdc:47:2"};
	this.sidHashMap["PruebaAdc:47:2"] = {rtwname: "<S1>/Compare"};
	this.rtwnameHashMap["<S1>/Constant"] = {sid: "PruebaAdc:47:3"};
	this.sidHashMap["PruebaAdc:47:3"] = {rtwname: "<S1>/Constant"};
	this.rtwnameHashMap["<S1>/y"] = {sid: "PruebaAdc:47:5"};
	this.sidHashMap["PruebaAdc:47:5"] = {rtwname: "<S1>/y"};
	this.rtwnameHashMap["<S2>/u"] = {sid: "PruebaAdc:67:1"};
	this.sidHashMap["PruebaAdc:67:1"] = {rtwname: "<S2>/u"};
	this.rtwnameHashMap["<S2>/Compare"] = {sid: "PruebaAdc:67:2"};
	this.sidHashMap["PruebaAdc:67:2"] = {rtwname: "<S2>/Compare"};
	this.rtwnameHashMap["<S2>/Constant"] = {sid: "PruebaAdc:67:3"};
	this.sidHashMap["PruebaAdc:67:3"] = {rtwname: "<S2>/Constant"};
	this.rtwnameHashMap["<S2>/y"] = {sid: "PruebaAdc:67:5"};
	this.sidHashMap["PruebaAdc:67:5"] = {rtwname: "<S2>/y"};
	this.rtwnameHashMap["<S3>/In1"] = {sid: "PruebaAdc:10:7"};
	this.sidHashMap["PruebaAdc:10:7"] = {rtwname: "<S3>/In1"};
	this.rtwnameHashMap["<S3>/Data Type Conversion"] = {sid: "PruebaAdc:10:11"};
	this.sidHashMap["PruebaAdc:10:11"] = {rtwname: "<S3>/Data Type Conversion"};
	this.rtwnameHashMap["<S3>/Digital Output"] = {sid: "PruebaAdc:10:12"};
	this.sidHashMap["PruebaAdc:10:12"] = {rtwname: "<S3>/Digital Output"};
	this.rtwnameHashMap["<S4>/In1"] = {sid: "PruebaAdc:11:7"};
	this.sidHashMap["PruebaAdc:11:7"] = {rtwname: "<S4>/In1"};
	this.rtwnameHashMap["<S4>/Data Type Conversion"] = {sid: "PruebaAdc:11:11"};
	this.sidHashMap["PruebaAdc:11:11"] = {rtwname: "<S4>/Data Type Conversion"};
	this.rtwnameHashMap["<S4>/Digital Output"] = {sid: "PruebaAdc:11:12"};
	this.sidHashMap["PruebaAdc:11:12"] = {rtwname: "<S4>/Digital Output"};
	this.rtwnameHashMap["<S5>/In1"] = {sid: "PruebaAdc:29:7"};
	this.sidHashMap["PruebaAdc:29:7"] = {rtwname: "<S5>/In1"};
	this.rtwnameHashMap["<S5>/Data Type Conversion"] = {sid: "PruebaAdc:29:11"};
	this.sidHashMap["PruebaAdc:29:11"] = {rtwname: "<S5>/Data Type Conversion"};
	this.rtwnameHashMap["<S5>/Digital Output"] = {sid: "PruebaAdc:29:12"};
	this.sidHashMap["PruebaAdc:29:12"] = {rtwname: "<S5>/Digital Output"};
	this.rtwnameHashMap["<S6>/In1"] = {sid: "PruebaAdc:30:7"};
	this.sidHashMap["PruebaAdc:30:7"] = {rtwname: "<S6>/In1"};
	this.rtwnameHashMap["<S6>/Data Type Conversion"] = {sid: "PruebaAdc:30:11"};
	this.sidHashMap["PruebaAdc:30:11"] = {rtwname: "<S6>/Data Type Conversion"};
	this.rtwnameHashMap["<S6>/Digital Output"] = {sid: "PruebaAdc:30:12"};
	this.sidHashMap["PruebaAdc:30:12"] = {rtwname: "<S6>/Digital Output"};
	this.rtwnameHashMap["<S7>/u"] = {sid: "PruebaAdc:33:1"};
	this.sidHashMap["PruebaAdc:33:1"] = {rtwname: "<S7>/u"};
	this.rtwnameHashMap["<S7>/Derivative Gain"] = {sid: "PruebaAdc:33:1668"};
	this.sidHashMap["PruebaAdc:33:1668"] = {rtwname: "<S7>/Derivative Gain"};
	this.rtwnameHashMap["<S7>/Filter"] = {sid: "PruebaAdc:33:1670"};
	this.sidHashMap["PruebaAdc:33:1670"] = {rtwname: "<S7>/Filter"};
	this.rtwnameHashMap["<S7>/Filter Coefficient"] = {sid: "PruebaAdc:33:1671"};
	this.sidHashMap["PruebaAdc:33:1671"] = {rtwname: "<S7>/Filter Coefficient"};
	this.rtwnameHashMap["<S7>/Integral Gain"] = {sid: "PruebaAdc:33:1667"};
	this.sidHashMap["PruebaAdc:33:1667"] = {rtwname: "<S7>/Integral Gain"};
	this.rtwnameHashMap["<S7>/Integrator"] = {sid: "PruebaAdc:33:1669"};
	this.sidHashMap["PruebaAdc:33:1669"] = {rtwname: "<S7>/Integrator"};
	this.rtwnameHashMap["<S7>/Proportional Gain"] = {sid: "PruebaAdc:33:1666"};
	this.sidHashMap["PruebaAdc:33:1666"] = {rtwname: "<S7>/Proportional Gain"};
	this.rtwnameHashMap["<S7>/Sum"] = {sid: "PruebaAdc:33:1665"};
	this.sidHashMap["PruebaAdc:33:1665"] = {rtwname: "<S7>/Sum"};
	this.rtwnameHashMap["<S7>/SumD"] = {sid: "PruebaAdc:33:1672"};
	this.sidHashMap["PruebaAdc:33:1672"] = {rtwname: "<S7>/SumD"};
	this.rtwnameHashMap["<S7>/y"] = {sid: "PruebaAdc:33:10"};
	this.sidHashMap["PruebaAdc:33:10"] = {rtwname: "<S7>/y"};
	this.rtwnameHashMap["<S8>/u"] = {sid: "PruebaAdc:41:1"};
	this.sidHashMap["PruebaAdc:41:1"] = {rtwname: "<S8>/u"};
	this.rtwnameHashMap["<S8>/Derivative Gain"] = {sid: "PruebaAdc:41:1668"};
	this.sidHashMap["PruebaAdc:41:1668"] = {rtwname: "<S8>/Derivative Gain"};
	this.rtwnameHashMap["<S8>/Filter"] = {sid: "PruebaAdc:41:1670"};
	this.sidHashMap["PruebaAdc:41:1670"] = {rtwname: "<S8>/Filter"};
	this.rtwnameHashMap["<S8>/Filter Coefficient"] = {sid: "PruebaAdc:41:1671"};
	this.sidHashMap["PruebaAdc:41:1671"] = {rtwname: "<S8>/Filter Coefficient"};
	this.rtwnameHashMap["<S8>/Integral Gain"] = {sid: "PruebaAdc:41:1667"};
	this.sidHashMap["PruebaAdc:41:1667"] = {rtwname: "<S8>/Integral Gain"};
	this.rtwnameHashMap["<S8>/Integrator"] = {sid: "PruebaAdc:41:1669"};
	this.sidHashMap["PruebaAdc:41:1669"] = {rtwname: "<S8>/Integrator"};
	this.rtwnameHashMap["<S8>/Proportional Gain"] = {sid: "PruebaAdc:41:1666"};
	this.sidHashMap["PruebaAdc:41:1666"] = {rtwname: "<S8>/Proportional Gain"};
	this.rtwnameHashMap["<S8>/Sum"] = {sid: "PruebaAdc:41:1665"};
	this.sidHashMap["PruebaAdc:41:1665"] = {rtwname: "<S8>/Sum"};
	this.rtwnameHashMap["<S8>/SumD"] = {sid: "PruebaAdc:41:1672"};
	this.sidHashMap["PruebaAdc:41:1672"] = {rtwname: "<S8>/SumD"};
	this.rtwnameHashMap["<S8>/y"] = {sid: "PruebaAdc:41:10"};
	this.sidHashMap["PruebaAdc:41:10"] = {rtwname: "<S8>/y"};
	this.rtwnameHashMap["<S9>:1"] = {sid: "PruebaAdc:56:1"};
	this.sidHashMap["PruebaAdc:56:1"] = {rtwname: "<S9>:1"};
	this.rtwnameHashMap["<S9>:1:2"] = {sid: "PruebaAdc:56:1:2"};
	this.sidHashMap["PruebaAdc:56:1:2"] = {rtwname: "<S9>:1:2"};
	this.rtwnameHashMap["<S9>:1:3"] = {sid: "PruebaAdc:56:1:3"};
	this.sidHashMap["PruebaAdc:56:1:3"] = {rtwname: "<S9>:1:3"};
	this.rtwnameHashMap["<S9>:1:4"] = {sid: "PruebaAdc:56:1:4"};
	this.sidHashMap["PruebaAdc:56:1:4"] = {rtwname: "<S9>:1:4"};
	this.rtwnameHashMap["<S9>:1:5"] = {sid: "PruebaAdc:56:1:5"};
	this.sidHashMap["PruebaAdc:56:1:5"] = {rtwname: "<S9>:1:5"};
	this.rtwnameHashMap["<S10>:1"] = {sid: "PruebaAdc:99:1"};
	this.sidHashMap["PruebaAdc:99:1"] = {rtwname: "<S10>:1"};
	this.rtwnameHashMap["<S10>:1:2"] = {sid: "PruebaAdc:99:1:2"};
	this.sidHashMap["PruebaAdc:99:1:2"] = {rtwname: "<S10>:1:2"};
	this.rtwnameHashMap["<S10>:1:3"] = {sid: "PruebaAdc:99:1:3"};
	this.sidHashMap["PruebaAdc:99:1:3"] = {rtwname: "<S10>:1:3"};
	this.rtwnameHashMap["<S10>:1:4"] = {sid: "PruebaAdc:99:1:4"};
	this.sidHashMap["PruebaAdc:99:1:4"] = {rtwname: "<S10>:1:4"};
	this.rtwnameHashMap["<S10>:1:5"] = {sid: "PruebaAdc:99:1:5"};
	this.sidHashMap["PruebaAdc:99:1:5"] = {rtwname: "<S10>:1:5"};
	this.rtwnameHashMap["<S10>:1:7"] = {sid: "PruebaAdc:99:1:7"};
	this.sidHashMap["PruebaAdc:99:1:7"] = {rtwname: "<S10>:1:7"};
	this.rtwnameHashMap["<S11>:1"] = {sid: "PruebaAdc:95:1"};
	this.sidHashMap["PruebaAdc:95:1"] = {rtwname: "<S11>:1"};
	this.rtwnameHashMap["<S11>:1:3"] = {sid: "PruebaAdc:95:1:3"};
	this.sidHashMap["PruebaAdc:95:1:3"] = {rtwname: "<S11>:1:3"};
	this.rtwnameHashMap["<S12>/In1"] = {sid: "PruebaAdc:14:116"};
	this.sidHashMap["PruebaAdc:14:116"] = {rtwname: "<S12>/In1"};
	this.rtwnameHashMap["<S12>/Data Type Conversion"] = {sid: "PruebaAdc:14:114"};
	this.sidHashMap["PruebaAdc:14:114"] = {rtwname: "<S12>/Data Type Conversion"};
	this.rtwnameHashMap["<S12>/PWM"] = {sid: "PruebaAdc:14:215"};
	this.sidHashMap["PruebaAdc:14:215"] = {rtwname: "<S12>/PWM"};
	this.rtwnameHashMap["<S13>/In1"] = {sid: "PruebaAdc:31:116"};
	this.sidHashMap["PruebaAdc:31:116"] = {rtwname: "<S13>/In1"};
	this.rtwnameHashMap["<S13>/Data Type Conversion"] = {sid: "PruebaAdc:31:114"};
	this.sidHashMap["PruebaAdc:31:114"] = {rtwname: "<S13>/Data Type Conversion"};
	this.rtwnameHashMap["<S13>/PWM"] = {sid: "PruebaAdc:31:215"};
	this.sidHashMap["PruebaAdc:31:215"] = {rtwname: "<S13>/PWM"};
	this.rtwnameHashMap["<S14>/r "] = {sid: "PruebaAdc:103:189"};
	this.sidHashMap["PruebaAdc:103:189"] = {rtwname: "<S14>/r "};
	this.rtwnameHashMap["<S14>/theta "] = {sid: "PruebaAdc:103:190"};
	this.sidHashMap["PruebaAdc:103:190"] = {rtwname: "<S14>/theta "};
	this.rtwnameHashMap["<S14>/Mux"] = {sid: "PruebaAdc:103:191"};
	this.sidHashMap["PruebaAdc:103:191"] = {rtwname: "<S14>/Mux"};
	this.rtwnameHashMap["<S14>/r->x"] = {sid: "PruebaAdc:103:192"};
	this.sidHashMap["PruebaAdc:103:192"] = {rtwname: "<S14>/r->x"};
	this.rtwnameHashMap["<S14>/theta->y"] = {sid: "PruebaAdc:103:193"};
	this.sidHashMap["PruebaAdc:103:193"] = {rtwname: "<S14>/theta->y"};
	this.rtwnameHashMap["<S14>/x"] = {sid: "PruebaAdc:103:194"};
	this.sidHashMap["PruebaAdc:103:194"] = {rtwname: "<S14>/x"};
	this.rtwnameHashMap["<S14>/y"] = {sid: "PruebaAdc:103:195"};
	this.sidHashMap["PruebaAdc:103:195"] = {rtwname: "<S14>/y"};
	this.rtwnameHashMap["<S15>/Clock"] = {sid: "PruebaAdc:73:167"};
	this.sidHashMap["PruebaAdc:73:167"] = {rtwname: "<S15>/Clock"};
	this.rtwnameHashMap["<S15>/Constant"] = {sid: "PruebaAdc:73:168"};
	this.sidHashMap["PruebaAdc:73:168"] = {rtwname: "<S15>/Constant"};
	this.rtwnameHashMap["<S15>/Look-Up Table1"] = {sid: "PruebaAdc:73:223"};
	this.sidHashMap["PruebaAdc:73:223"] = {rtwname: "<S15>/Look-Up Table1"};
	this.rtwnameHashMap["<S15>/Math Function"] = {sid: "PruebaAdc:73:170"};
	this.sidHashMap["PruebaAdc:73:170"] = {rtwname: "<S15>/Math Function"};
	this.rtwnameHashMap["<S15>/Output"] = {sid: "PruebaAdc:73:171"};
	this.sidHashMap["PruebaAdc:73:171"] = {rtwname: "<S15>/Output"};
	this.rtwnameHashMap["<S15>/Sum"] = {sid: "PruebaAdc:73:172"};
	this.sidHashMap["PruebaAdc:73:172"] = {rtwname: "<S15>/Sum"};
	this.rtwnameHashMap["<S15>/startTime"] = {sid: "PruebaAdc:73:173"};
	this.sidHashMap["PruebaAdc:73:173"] = {rtwname: "<S15>/startTime"};
	this.rtwnameHashMap["<S15>/Out1"] = {sid: "PruebaAdc:73:174"};
	this.sidHashMap["PruebaAdc:73:174"] = {rtwname: "<S15>/Out1"};
	this.rtwnameHashMap["<S16>/Clock"] = {sid: "PruebaAdc:74:167"};
	this.sidHashMap["PruebaAdc:74:167"] = {rtwname: "<S16>/Clock"};
	this.rtwnameHashMap["<S16>/Constant"] = {sid: "PruebaAdc:74:168"};
	this.sidHashMap["PruebaAdc:74:168"] = {rtwname: "<S16>/Constant"};
	this.rtwnameHashMap["<S16>/Look-Up Table1"] = {sid: "PruebaAdc:74:223"};
	this.sidHashMap["PruebaAdc:74:223"] = {rtwname: "<S16>/Look-Up Table1"};
	this.rtwnameHashMap["<S16>/Math Function"] = {sid: "PruebaAdc:74:170"};
	this.sidHashMap["PruebaAdc:74:170"] = {rtwname: "<S16>/Math Function"};
	this.rtwnameHashMap["<S16>/Output"] = {sid: "PruebaAdc:74:171"};
	this.sidHashMap["PruebaAdc:74:171"] = {rtwname: "<S16>/Output"};
	this.rtwnameHashMap["<S16>/Sum"] = {sid: "PruebaAdc:74:172"};
	this.sidHashMap["PruebaAdc:74:172"] = {rtwname: "<S16>/Sum"};
	this.rtwnameHashMap["<S16>/startTime"] = {sid: "PruebaAdc:74:173"};
	this.sidHashMap["PruebaAdc:74:173"] = {rtwname: "<S16>/startTime"};
	this.rtwnameHashMap["<S16>/Out1"] = {sid: "PruebaAdc:74:174"};
	this.sidHashMap["PruebaAdc:74:174"] = {rtwname: "<S16>/Out1"};
	this.rtwnameHashMap["<S17>/x"] = {sid: "PruebaAdc:104:1"};
	this.sidHashMap["PruebaAdc:104:1"] = {rtwname: "<S17>/x"};
	this.rtwnameHashMap["<S17>/y"] = {sid: "PruebaAdc:104:2"};
	this.sidHashMap["PruebaAdc:104:2"] = {rtwname: "<S17>/y"};
	this.rtwnameHashMap["<S17>/Data Type Conversion"] = {sid: "PruebaAdc:104:3"};
	this.sidHashMap["PruebaAdc:104:3"] = {rtwname: "<S17>/Data Type Conversion"};
	this.rtwnameHashMap["<S17>/Data Type Conversion1"] = {sid: "PruebaAdc:104:4"};
	this.sidHashMap["PruebaAdc:104:4"] = {rtwname: "<S17>/Data Type Conversion1"};
	this.rtwnameHashMap["<S17>/Mux"] = {sid: "PruebaAdc:104:5"};
	this.sidHashMap["PruebaAdc:104:5"] = {rtwname: "<S17>/Mux"};
	this.rtwnameHashMap["<S17>/sfunxy"] = {sid: "PruebaAdc:104:6"};
	this.sidHashMap["PruebaAdc:104:6"] = {rtwname: "<S17>/sfunxy"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
