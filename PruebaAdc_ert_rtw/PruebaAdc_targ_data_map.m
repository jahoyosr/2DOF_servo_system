  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 4;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (PruebaAdc_P)
    ;%
      section.nData     = 10;
      section.data(10)  = dumData; %prealloc
      
	  ;% PruebaAdc_P.d
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% PruebaAdc_P.phi
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 126;
	
	  ;% PruebaAdc_P.DiscretePIDController_D
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 252;
	
	  ;% PruebaAdc_P.DiscretePIDController1_D
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 253;
	
	  ;% PruebaAdc_P.DiscretePIDController_I
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 254;
	
	  ;% PruebaAdc_P.DiscretePIDController1_I
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 255;
	
	  ;% PruebaAdc_P.DiscretePIDController_N
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 256;
	
	  ;% PruebaAdc_P.DiscretePIDController1_N
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 257;
	
	  ;% PruebaAdc_P.DiscretePIDController_P
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 258;
	
	  ;% PruebaAdc_P.DiscretePIDController1_P
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 259;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% PruebaAdc_P.PWM_pinNumber
	  section.data(1).logicalSrcIdx = 10;
	  section.data(1).dtTransOffset = 0;
	
	  ;% PruebaAdc_P.PWM_pinNumber_m
	  section.data(2).logicalSrcIdx = 11;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
      section.nData     = 28;
      section.data(28)  = dumData; %prealloc
      
	  ;% PruebaAdc_P.Constant_Value
	  section.data(1).logicalSrcIdx = 12;
	  section.data(1).dtTransOffset = 0;
	
	  ;% PruebaAdc_P.LookUpTable1_bp01Data
	  section.data(2).logicalSrcIdx = 13;
	  section.data(2).dtTransOffset = 1;
	
	  ;% PruebaAdc_P.Constant2_Value
	  section.data(3).logicalSrcIdx = 14;
	  section.data(3).dtTransOffset = 127;
	
	  ;% PruebaAdc_P.Gain_Gain
	  section.data(4).logicalSrcIdx = 15;
	  section.data(4).dtTransOffset = 128;
	
	  ;% PruebaAdc_P.Constant_Value_f
	  section.data(5).logicalSrcIdx = 16;
	  section.data(5).dtTransOffset = 129;
	
	  ;% PruebaAdc_P.uNegativo1_Value
	  section.data(6).logicalSrcIdx = 17;
	  section.data(6).dtTransOffset = 130;
	
	  ;% PruebaAdc_P.uposiit1_Value
	  section.data(7).logicalSrcIdx = 18;
	  section.data(7).dtTransOffset = 131;
	
	  ;% PruebaAdc_P.Constant_Value_h
	  section.data(8).logicalSrcIdx = 19;
	  section.data(8).dtTransOffset = 132;
	
	  ;% PruebaAdc_P.LookUpTable1_bp01Data_o
	  section.data(9).logicalSrcIdx = 20;
	  section.data(9).dtTransOffset = 133;
	
	  ;% PruebaAdc_P.Constant3_Value
	  section.data(10).logicalSrcIdx = 21;
	  section.data(10).dtTransOffset = 259;
	
	  ;% PruebaAdc_P.Constant4_Value
	  section.data(11).logicalSrcIdx = 22;
	  section.data(11).dtTransOffset = 260;
	
	  ;% PruebaAdc_P.Gain1_Gain
	  section.data(12).logicalSrcIdx = 23;
	  section.data(12).dtTransOffset = 261;
	
	  ;% PruebaAdc_P.Constant_Value_fj
	  section.data(13).logicalSrcIdx = 24;
	  section.data(13).dtTransOffset = 262;
	
	  ;% PruebaAdc_P.uposiit_Value
	  section.data(14).logicalSrcIdx = 25;
	  section.data(14).dtTransOffset = 263;
	
	  ;% PruebaAdc_P.uNegativo_Value
	  section.data(15).logicalSrcIdx = 26;
	  section.data(15).dtTransOffset = 264;
	
	  ;% PruebaAdc_P.Integrator_gainval
	  section.data(16).logicalSrcIdx = 27;
	  section.data(16).dtTransOffset = 265;
	
	  ;% PruebaAdc_P.Integrator_IC
	  section.data(17).logicalSrcIdx = 28;
	  section.data(17).dtTransOffset = 266;
	
	  ;% PruebaAdc_P.Filter_gainval
	  section.data(18).logicalSrcIdx = 29;
	  section.data(18).dtTransOffset = 267;
	
	  ;% PruebaAdc_P.Filter_IC
	  section.data(19).logicalSrcIdx = 30;
	  section.data(19).dtTransOffset = 268;
	
	  ;% PruebaAdc_P.Saturation_UpperSat
	  section.data(20).logicalSrcIdx = 31;
	  section.data(20).dtTransOffset = 269;
	
	  ;% PruebaAdc_P.Saturation_LowerSat
	  section.data(21).logicalSrcIdx = 32;
	  section.data(21).dtTransOffset = 270;
	
	  ;% PruebaAdc_P.Integrator_gainval_g
	  section.data(22).logicalSrcIdx = 33;
	  section.data(22).dtTransOffset = 271;
	
	  ;% PruebaAdc_P.Integrator_IC_n
	  section.data(23).logicalSrcIdx = 34;
	  section.data(23).dtTransOffset = 272;
	
	  ;% PruebaAdc_P.Filter_gainval_e
	  section.data(24).logicalSrcIdx = 35;
	  section.data(24).dtTransOffset = 273;
	
	  ;% PruebaAdc_P.Filter_IC_c
	  section.data(25).logicalSrcIdx = 36;
	  section.data(25).dtTransOffset = 274;
	
	  ;% PruebaAdc_P.Saturation1_UpperSat
	  section.data(26).logicalSrcIdx = 37;
	  section.data(26).dtTransOffset = 275;
	
	  ;% PruebaAdc_P.Saturation1_LowerSat
	  section.data(27).logicalSrcIdx = 38;
	  section.data(27).dtTransOffset = 276;
	
	  ;% PruebaAdc_P.Gain2_Gain
	  section.data(28).logicalSrcIdx = 39;
	  section.data(28).dtTransOffset = 277;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(3) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% PruebaAdc_P.Prismatico_p1
	  section.data(1).logicalSrcIdx = 40;
	  section.data(1).dtTransOffset = 0;
	
	  ;% PruebaAdc_P.Rotacional_p1
	  section.data(2).logicalSrcIdx = 41;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(4) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 1;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (PruebaAdc_B)
    ;%
      section.nData     = 10;
      section.data(10)  = dumData; %prealloc
      
	  ;% PruebaAdc_B.Output
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% PruebaAdc_B.Gain
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% PruebaAdc_B.Gain1
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% PruebaAdc_B.FilterCoefficient
	  section.data(4).logicalSrcIdx = 5;
	  section.data(4).dtTransOffset = 3;
	
	  ;% PruebaAdc_B.FilterCoefficient_n
	  section.data(5).logicalSrcIdx = 8;
	  section.data(5).dtTransOffset = 4;
	
	  ;% PruebaAdc_B.rx
	  section.data(6).logicalSrcIdx = 9;
	  section.data(6).dtTransOffset = 5;
	
	  ;% PruebaAdc_B.thetay
	  section.data(7).logicalSrcIdx = 10;
	  section.data(7).dtTransOffset = 6;
	
	  ;% PruebaAdc_B.IntegralGain
	  section.data(8).logicalSrcIdx = 11;
	  section.data(8).dtTransOffset = 7;
	
	  ;% PruebaAdc_B.IntegralGain_g
	  section.data(9).logicalSrcIdx = 12;
	  section.data(9).dtTransOffset = 8;
	
	  ;% PruebaAdc_B.TmpSignalConversionAtsfunxyInpo
	  section.data(10).logicalSrcIdx = 13;
	  section.data(10).dtTransOffset = 9;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 3;
    sectIdxOffset = 1;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (PruebaAdc_DW)
    ;%
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% PruebaAdc_DW.Integrator_DSTATE
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% PruebaAdc_DW.Filter_DSTATE
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% PruebaAdc_DW.Integrator_DSTATE_a
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% PruebaAdc_DW.Filter_DSTATE_g
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 6;
      section.data(6)  = dumData; %prealloc
      
	  ;% PruebaAdc_DW.Posiciongrados_PWORK.LoggedData
	  section.data(1).logicalSrcIdx = 4;
	  section.data(1).dtTransOffset = 0;
	
	  ;% PruebaAdc_DW.Posicionmm_PWORK.LoggedData
	  section.data(2).logicalSrcIdx = 5;
	  section.data(2).dtTransOffset = 1;
	
	  ;% PruebaAdc_DW.DigitalOutput_PWORK
	  section.data(3).logicalSrcIdx = 6;
	  section.data(3).dtTransOffset = 2;
	
	  ;% PruebaAdc_DW.DigitalOutput_PWORK_e
	  section.data(4).logicalSrcIdx = 7;
	  section.data(4).dtTransOffset = 3;
	
	  ;% PruebaAdc_DW.DigitalOutput_PWORK_c
	  section.data(5).logicalSrcIdx = 8;
	  section.data(5).dtTransOffset = 4;
	
	  ;% PruebaAdc_DW.DigitalOutput_PWORK_j
	  section.data(6).logicalSrcIdx = 9;
	  section.data(6).dtTransOffset = 5;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% PruebaAdc_DW.obj
	  section.data(1).logicalSrcIdx = 10;
	  section.data(1).dtTransOffset = 0;
	
	  ;% PruebaAdc_DW.obj_f
	  section.data(2).logicalSrcIdx = 11;
	  section.data(2).dtTransOffset = 1;
	
	  ;% PruebaAdc_DW.obj_c
	  section.data(3).logicalSrcIdx = 12;
	  section.data(3).dtTransOffset = 2;
	
	  ;% PruebaAdc_DW.obj_o
	  section.data(4).logicalSrcIdx = 13;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 3015540206;
  targMap.checksum1 = 3626744215;
  targMap.checksum2 = 915852336;
  targMap.checksum3 = 2554401901;

