
/* ==== FUN_14009f50 @ 14009f50 ==== 
 * signature: undefined4 __cdecl FUN_14009f50(int param_1, int param_2, undefined4 param_3, int * param_4)
 * body: 14009f50-14009fcd
 */

undefined4 __cdecl FUN_14009f50(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  code *pcVar1;
  int local_c;
  int local_8;
  int iStack_4;
  
  *param_4 = 2;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,4,&local_8);
  DAT_14028e48 = (*pcVar1)(local_8,param_1,&local_c);
  *param_4 = *param_4 + local_c;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,4,&iStack_4);
  DAT_14028e48 = (*pcVar1)(iStack_4,param_1 + 10,&local_c);
  *param_4 = *param_4 + local_c;
  return 0;
}


