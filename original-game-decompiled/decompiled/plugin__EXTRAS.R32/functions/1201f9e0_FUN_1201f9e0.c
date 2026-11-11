
/* ==== FUN_1201f9e0 @ 1201f9e0 ==== 
 * signature: undefined4 __cdecl FUN_1201f9e0(int param_1, int param_2)
 * body: 1201f9e0-1201fb92
 */

undefined4 __cdecl FUN_1201f9e0(int param_1,int param_2)

{
  code *pcVar1;
  undefined2 local_2e;
  int local_2c;
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
  
  local_2e = 1;
  pcVar1 = (code *)FUN_12027370(param_2,1,7,&local_2c);
  DAT_12039a9c = (*pcVar1)(local_2c,&local_2e,1);
  pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_28);
  DAT_12039a9c = (*pcVar1)(iStack_28,param_1);
  pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_24);
  DAT_12039a9c = (*pcVar1)(iStack_24,param_1 + 10);
  pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_20);
  DAT_12039a9c = (*pcVar1)(iStack_20,param_1 + 0x10);
  pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_1c);
  DAT_12039a9c = (*pcVar1)(iStack_1c,param_1 + 0x22);
  pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_18);
  DAT_12039a9c = (*pcVar1)(iStack_18,param_1 + 0x28);
  pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_14);
  DAT_12039a9c = (*pcVar1)(iStack_14,param_1 + 0x2e);
  pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_10);
  DAT_12039a9c = (*pcVar1)(iStack_10,param_1 + 0x38);
  pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_c);
  DAT_12039a9c = (*pcVar1)(iStack_c,param_1 + 0x42);
  pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_8);
  DAT_12039a9c = (*pcVar1)(iStack_8,param_1 + 0x4c);
  pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_4);
  DAT_12039a9c = (*pcVar1)(iStack_4,param_1 + 0x50);
  return 0;
}


