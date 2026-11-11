
/* ==== FUN_13002250 @ 13002250 ==== 
 * signature: undefined4 __cdecl FUN_13002250(undefined4 param_1)
 * body: 13002250-130024dd
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_13002250(undefined4 param_1)

{
  code *pcVar1;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x10),1,0x2c,&local_30);
  _DAT_13008d34 = (*pcVar1)(local_30,param_1,s_sysversion_130082bc,0x66,4);
  pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x10),1,0x2c,&iStack_2c);
  _DAT_13008d34 = (*pcVar1)(iStack_2c,param_1,s_nativecpu_130082a8,0x66,4);
  pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x10),1,0x2c,&iStack_28);
  _DAT_13008d34 = (*pcVar1)(iStack_28,param_1,s_architecture_13008294,0x66,4);
  pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x10),1,0x2c,&iStack_24);
  _DAT_13008d34 = (*pcVar1)(iStack_24,param_1,&DAT_13008280,0x66,4);
  pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x10),1,0x2c,&iStack_20);
  _DAT_13008d34 = (*pcVar1)(iStack_20,param_1,s_totalram_1300826c,1,5);
  pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x10),1,0x2c,&iStack_1c);
  _DAT_13008d34 = (*pcVar1)(iStack_1c,param_1,s_currentram_13008258,1,4);
  pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x10),1,0x2c,&iStack_18);
  _DAT_13008d34 = (*pcVar1)(iStack_18,param_1,s_computername_13008244,0x66,4);
  pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x10),1,0x2c,&iStack_14);
  _DAT_13008d34 = (*pcVar1)(iStack_14,param_1,s_processor_13008230,0x66,4);
  pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x10),1,0x2c,&iStack_10);
  _DAT_13008d34 = (*pcVar1)(iStack_10,param_1,s_soundcard_1300821c,0x66,4);
  pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x10),1,0x2c,&iStack_c);
  _DAT_13008d34 = (*pcVar1)(iStack_c,param_1,s_bitdepth_13008208,1,4);
  pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x10),1,0x2c,&iStack_8);
  _DAT_13008d34 = (*pcVar1)(iStack_8,param_1,s_screensize_130081f4,10,4);
  pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x10),1,0x2c,&iStack_4);
  _DAT_13008d34 = (*pcVar1)(iStack_4,param_1,s_keyboardtype_130081e0,0x66,4);
  return 0;
}


