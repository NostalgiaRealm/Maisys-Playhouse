
/* ==== FUN_0046a8d0 @ 0046a8d0 ==== 
 * signature: int __cdecl FUN_0046a8d0(int param_1)
 * body: 0046a8d0-0046a92f
 */

int __cdecl FUN_0046a8d0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (DAT_004d95bc == 0) {
    return param_1;
  }
  iVar3 = 0;
  iVar1 = FUN_00430190(DAT_004d95bc);
  if (0 < *(int *)(DAT_004d95bc + 0x26)) {
    piVar2 = (int *)(iVar1 + 0x20);
    do {
      if (*piVar2 == param_1) {
        param_1 = *(int *)(iVar3 * 0x2e + 0x28 + iVar1);
        break;
      }
      piVar2 = (int *)((int)piVar2 + 0x2e);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_004d95bc + 0x26));
  }
  FUN_004301f0(DAT_004d95bc);
  return param_1;
}


