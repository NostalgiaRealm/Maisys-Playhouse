
/* ==== FUN_1101d180 @ 1101d180 ==== 
 * signature: undefined __cdecl FUN_1101d180(undefined4 * param_1, undefined4 param_2, short * param_3)
 * body: 1101d180-1101d21f
 */

void __cdecl FUN_1101d180(undefined4 *param_1,undefined4 param_2,short *param_3)

{
  int iVar1;
  short sVar2;
  
  sVar2 = *param_3;
  if (sVar2 == -0x1e) {
    sVar2 = 1;
    do {
      iVar1 = *(int *)(param_3 + sVar2 * 2 + 3);
      if (iVar1 != 0) {
        FUN_11002530(param_1,iVar1);
        *(int *)(param_3 + sVar2 * 2 + 3) = 0;
      }
      sVar2 = sVar2 + -1;
    } while (-1 < sVar2);
    return;
  }
  if (sVar2 != -0x1d) {
    if (sVar2 != -0x1b) {
      return;
    }
    if (*(int *)(param_3 + 3) != 0) {
      FUN_11002530(param_1,*(int *)(param_3 + 3));
      param_3[3] = 0;
      param_3[4] = 0;
    }
    return;
  }
  sVar2 = 2;
  do {
    iVar1 = *(int *)(param_3 + sVar2 * 2 + 3);
    if (iVar1 != 0) {
      FUN_11002530(param_1,iVar1);
      *(int *)(param_3 + sVar2 * 2 + 3) = 0;
    }
    sVar2 = sVar2 + -1;
  } while (-1 < sVar2);
  return;
}


