
/* ==== FUN_0047b620 @ 0047b620 ==== 
 * signature: undefined4 __cdecl FUN_0047b620(int param_1, undefined4 param_2)
 * body: 0047b620-0047b65b
 */

undefined4 __cdecl FUN_0047b620(int param_1,undefined4 param_2)

{
  code *pcVar1;
  int local_8;
  
  pcVar1 = (code *)FUN_0048b580(*(int *)(param_1 + 2),(int)*(short *)(param_1 + 6),
                                (int)*(short *)(param_1 + 8),&local_8);
  DAT_004e34cc = (*pcVar1)(local_8,param_2);
  return CONCAT31((int3)((uint)DAT_004e34cc >> 8),1);
}


