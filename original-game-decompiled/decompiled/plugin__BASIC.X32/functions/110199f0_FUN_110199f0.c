
/* ==== FUN_110199f0 @ 110199f0 ==== 
 * signature: undefined __cdecl FUN_110199f0(undefined4 param_1, int param_2, short * param_3, int param_4)
 * body: 110199f0-11019a39
 */

void __cdecl FUN_110199f0(undefined4 param_1,int param_2,short *param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  
  if (param_4 != 10000) {
    return;
  }
  iVar1 = -1;
  if (*param_3 == 1) {
    iVar1 = *(int *)(param_3 + 1);
  }
  else {
    if (*param_3 != 0x15) goto LAB_11019a20;
    lVar2 = __ftol();
    iVar1 = (int)lVar2;
  }
  iVar1 = iVar1 + -1;
LAB_11019a20:
  if (iVar1 < 0) {
    if (iVar1 < *(short *)(param_2 + 0x28)) {
      *(short *)(param_2 + 0x2a) = (short)iVar1;
      return;
    }
  }
  else {
    *(short *)(param_2 + 0x2a) = (short)iVar1;
  }
  return;
}


