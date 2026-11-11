
/* ==== FUN_00419630 @ 00419630 ==== 
 * signature: undefined4 __cdecl FUN_00419630(int param_1, undefined4 param_2)
 * body: 00419630-0041966f
 */

undefined4 __cdecl FUN_00419630(int param_1,undefined4 param_2)

{
  code *pcVar1;
  int local_c;
  undefined1 local_5;
  
  pcVar1 = (code *)FUN_0048b580(*(int *)(param_1 + 2),(int)*(short *)(param_1 + 6),
                                (int)*(short *)(param_1 + 8),&local_c);
  DAT_004e34cc = (*pcVar1)(local_c,param_2,&local_5);
  return CONCAT31((int3)((uint)DAT_004e34cc >> 8),1);
}


