
/* ==== FUN_11005950 @ 11005950 ==== 
 * signature: undefined __cdecl FUN_11005950(undefined4 param_1, short * param_2, short param_3)
 * body: 11005950-11005991
 */

void __cdecl FUN_11005950(undefined4 param_1,short *param_2,short param_3)

{
  void *_Dst;
  int iVar1;
  
  iVar1 = (int)param_3;
  if (iVar1 < *param_2 + -1) {
    _Dst = (void *)(*(int *)(param_2 + 1) + iVar1 * 0xc);
    FID_conflict__memcpy(_Dst,(void *)((int)_Dst + 0xc),(*param_2 - iVar1) * 0xc - 0xc);
  }
  *param_2 = *param_2 + -1;
  return;
}


