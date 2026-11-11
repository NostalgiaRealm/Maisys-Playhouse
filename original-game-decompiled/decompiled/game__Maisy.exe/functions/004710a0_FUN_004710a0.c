
/* ==== FUN_004710a0 @ 004710a0 ==== 
 * signature: bool __cdecl FUN_004710a0(int param_1, undefined4 param_2)
 * body: 004710a0-004710e2
 */

bool __cdecl FUN_004710a0(int param_1,undefined4 param_2)

{
  code *pcVar1;
  int local_8;
  
  pcVar1 = (code *)FUN_0048b580(*(int *)(param_1 + 2),(int)*(short *)(param_1 + 6),
                                (int)*(short *)(param_1 + 8),&local_8);
  DAT_004e34cc = (*pcVar1)(local_8,param_2);
  return DAT_004e34cc == 0;
}


