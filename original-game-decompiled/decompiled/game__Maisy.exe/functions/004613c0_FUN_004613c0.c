
/* ==== FUN_004613c0 @ 004613c0 ==== 
 * signature: bool __cdecl FUN_004613c0(int param_1, undefined4 param_2)
 * body: 004613c0-00461407
 */

bool __cdecl FUN_004613c0(int param_1,undefined4 param_2)

{
  code *pcVar1;
  int local_8;
  
  pcVar1 = (code *)FUN_0048b580(*(int *)(param_1 + 2),(int)*(short *)(param_1 + 6),
                                (int)*(short *)(param_1 + 8),&local_8);
  DAT_004e34cc = (*pcVar1)(local_8,param_2,&DAT_004e1c30);
  return DAT_004e34cc == 0;
}


