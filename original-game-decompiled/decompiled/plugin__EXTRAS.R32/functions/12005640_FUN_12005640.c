
/* ==== FUN_12005640 @ 12005640 ==== 
 * signature: undefined4 __cdecl FUN_12005640(int param_1, int param_2, undefined4 param_3, int * param_4)
 * body: 12005640-1200574f
 */

undefined4 __cdecl FUN_12005640(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  code *pcVar1;
  int local_18;
  int local_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  local_18 = 0;
  pcVar1 = (code *)FUN_12027370(param_2,1,4,&local_14);
  DAT_12039a9c = (*pcVar1)(local_14,param_1,&local_18);
  *param_4 = *param_4 + local_18;
  pcVar1 = (code *)FUN_12027370(param_2,1,4,&iStack_10);
  DAT_12039a9c = (*pcVar1)(iStack_10,param_1 + 10,&local_18);
  *param_4 = *param_4 + local_18;
  pcVar1 = (code *)FUN_12027370(param_2,1,4,&iStack_c);
  DAT_12039a9c = (*pcVar1)(iStack_c,param_1 + 0x1e,&local_18);
  *param_4 = *param_4 + local_18;
  pcVar1 = (code *)FUN_12027370(param_2,1,4,&iStack_8);
  DAT_12039a9c = (*pcVar1)(iStack_8,param_1 + 0x24,&local_18);
  *param_4 = *param_4 + local_18;
  pcVar1 = (code *)FUN_12027370(param_2,1,4,&iStack_4);
  DAT_12039a9c = (*pcVar1)(iStack_4,param_1 + 0x2a,&local_18);
  *param_4 = *param_4 + local_18;
  return 0;
}


