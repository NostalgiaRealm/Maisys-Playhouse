
/* ==== FUN_12011e10 @ 12011e10 ==== 
 * signature: undefined4 __cdecl FUN_12011e10(int param_1, int param_2, undefined4 param_3, int * param_4)
 * body: 12011e10-12011fdd
 */

undefined4 __cdecl FUN_12011e10(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  code *pcVar1;
  int local_28;
  int local_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  *param_4 = 2;
  pcVar1 = (code *)FUN_12027370(param_2,1,4,&local_24);
  DAT_12039a9c = (*pcVar1)(local_24,param_1,&local_28);
  *param_4 = *param_4 + local_28;
  pcVar1 = (code *)FUN_12027370(param_2,1,4,&iStack_20);
  DAT_12039a9c = (*pcVar1)(iStack_20,param_1 + 0x2e,&local_28);
  *param_4 = *param_4 + local_28;
  pcVar1 = (code *)FUN_12027370(param_2,1,4,&iStack_1c);
  DAT_12039a9c = (*pcVar1)(iStack_1c,param_1 + 0x38,&local_28);
  *param_4 = *param_4 + local_28;
  pcVar1 = (code *)FUN_12027370(param_2,1,4,&iStack_18);
  DAT_12039a9c = (*pcVar1)(iStack_18,param_1 + 0x3e,&local_28);
  *param_4 = *param_4 + local_28;
  pcVar1 = (code *)FUN_12027370(param_2,1,4,&iStack_14);
  DAT_12039a9c = (*pcVar1)(iStack_14,param_1 + 0x50,&local_28);
  *param_4 = *param_4 + local_28;
  pcVar1 = (code *)FUN_12027370(param_2,1,4,&iStack_10);
  DAT_12039a9c = (*pcVar1)(iStack_10,param_1 + 10,&local_28);
  *param_4 = *param_4 + local_28;
  pcVar1 = (code *)FUN_12027370(param_2,1,4,&iStack_c);
  DAT_12039a9c = (*pcVar1)(iStack_c,param_1 + 0x10,&local_28);
  *param_4 = *param_4 + local_28;
  pcVar1 = (code *)FUN_12027370(param_2,1,4,&iStack_8);
  DAT_12039a9c = (*pcVar1)(iStack_8,param_1 + 0x16,&local_28);
  *param_4 = *param_4 + local_28;
  pcVar1 = (code *)FUN_12027370(param_2,1,4,&iStack_4);
  DAT_12039a9c = (*pcVar1)(iStack_4,param_1 + 0x28,&local_28);
  *param_4 = *param_4 + local_28;
  return 0;
}


