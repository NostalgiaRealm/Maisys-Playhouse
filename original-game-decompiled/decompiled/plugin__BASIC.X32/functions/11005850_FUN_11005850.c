
/* ==== FUN_11005850 @ 11005850 ==== 
 * signature: undefined __cdecl FUN_11005850(undefined4 param_1, undefined4 * param_2, short * param_3, short param_4)
 * body: 11005850-110058b4
 */

void __cdecl FUN_11005850(undefined4 param_1,undefined4 *param_2,short *param_3,short param_4)

{
  void *_Src;
  undefined4 *puVar1;
  
  if (param_4 < *param_3) {
    _Src = (void *)(*(int *)(param_3 + 1) + param_4 * 0xc);
    FID_conflict__memcpy((void *)((int)_Src + 0xc),_Src,((int)*param_3 - (int)param_4) * 0xc);
  }
  puVar1 = (undefined4 *)(param_4 * 0xc + *(int *)(param_3 + 1));
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  *param_3 = *param_3 + 1;
  return;
}


