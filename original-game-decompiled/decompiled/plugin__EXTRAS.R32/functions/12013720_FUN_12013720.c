
/* ==== FUN_12013720 @ 12013720 ==== 
 * signature: undefined4 __cdecl FUN_12013720(int param_1, int param_2, undefined4 param_3, int * param_4)
 * body: 12013720-1201388d
 */

undefined4 __cdecl FUN_12013720(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  code *pcVar1;
  int local_20;
  int local_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  *param_4 = 2;
  pcVar1 = (code *)FUN_12027370(param_2,1,4,&local_1c);
  DAT_12039a9c = (*pcVar1)(local_1c,param_1,&local_20);
  *param_4 = *param_4 + local_20;
  pcVar1 = (code *)FUN_12027370(param_2,1,4,&iStack_18);
  DAT_12039a9c = (*pcVar1)(iStack_18,param_1 + 10,&local_20);
  *param_4 = *param_4 + local_20;
  pcVar1 = (code *)FUN_12027370(param_2,1,4,&iStack_14);
  DAT_12039a9c = (*pcVar1)(iStack_14,param_1 + 0x14,&local_20);
  *param_4 = *param_4 + local_20;
  pcVar1 = (code *)FUN_12027370(param_2,1,4,&iStack_10);
  DAT_12039a9c = (*pcVar1)(iStack_10,param_1 + 0x26,&local_20);
  *param_4 = *param_4 + local_20;
  pcVar1 = (code *)FUN_12027370(param_2,1,4,&iStack_c);
  DAT_12039a9c = (*pcVar1)(iStack_c,param_1 + 0x38,&local_20);
  *param_4 = *param_4 + local_20;
  pcVar1 = (code *)FUN_12027370(param_2,1,4,&iStack_8);
  DAT_12039a9c = (*pcVar1)(iStack_8,param_1 + 0x4a,&local_20);
  *param_4 = *param_4 + local_20;
  pcVar1 = (code *)FUN_12027370(param_2,1,4,&iStack_4);
  DAT_12039a9c = (*pcVar1)(iStack_4,param_1 + 0x5c,&local_20);
  *param_4 = *param_4 + local_20;
  return 0;
}


