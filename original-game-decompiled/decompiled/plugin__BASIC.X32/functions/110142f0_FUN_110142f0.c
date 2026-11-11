
/* ==== FUN_110142f0 @ 110142f0 ==== 
 * signature: undefined __cdecl FUN_110142f0(undefined4 param_1, int param_2)
 * body: 110142f0-1101434d
 */

void __cdecl FUN_110142f0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  if ((param_2 != 0) && (*(int *)(param_2 + 0x14) != 0)) {
    bVar3 = *(int *)(param_2 + 0x10) == 0;
    if (bVar3) {
      FUN_11013e60();
    }
    iVar1 = 0;
    if (0 < *(int *)(param_2 + 0x14)) {
      iVar2 = 0;
      do {
        iVar2 = iVar2 + 0xe;
        iVar1 = iVar1 + 1;
        *(undefined4 *)(*(int *)(param_2 + 0x1c) + -0xc + iVar2) = 0;
      } while (iVar1 < *(int *)(param_2 + 0x14));
    }
    if (bVar3) {
      FUN_11013e70();
    }
  }
  return;
}


