
/* ==== FUN_12011fe0 @ 12011fe0 ==== 
 * signature: undefined4 __cdecl FUN_12011fe0(int param_1, int param_2)
 * body: 12011fe0-1201216d
 */

undefined4 __cdecl FUN_12011fe0(int param_1,int param_2)

{
  code *pcVar1;
  undefined2 local_2a;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  local_2a = 1;
  pcVar1 = (code *)FUN_12027370(param_2,1,7,&local_28);
  DAT_12039a9c = (*pcVar1)(local_28,&local_2a,1);
  pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_24);
  DAT_12039a9c = (*pcVar1)(iStack_24,param_1);
  pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_20);
  DAT_12039a9c = (*pcVar1)(iStack_20,param_1 + 0x2e);
  pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_1c);
  DAT_12039a9c = (*pcVar1)(iStack_1c,param_1 + 0x38);
  pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_18);
  DAT_12039a9c = (*pcVar1)(iStack_18,param_1 + 0x3e);
  pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_14);
  DAT_12039a9c = (*pcVar1)(iStack_14,param_1 + 0x50);
  pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_10);
  DAT_12039a9c = (*pcVar1)(iStack_10,param_1 + 10);
  pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_c);
  DAT_12039a9c = (*pcVar1)(iStack_c,param_1 + 0x10);
  pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_8);
  DAT_12039a9c = (*pcVar1)(iStack_8,param_1 + 0x16);
  pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_4);
  DAT_12039a9c = (*pcVar1)(iStack_4,param_1 + 0x28);
  return 0;
}


