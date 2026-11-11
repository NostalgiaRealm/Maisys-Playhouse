
/* ==== FUN_11013d10 @ 11013d10 ==== 
 * signature: undefined __cdecl FUN_11013d10(undefined4 * param_1, LPVOID param_2)
 * body: 11013d10-11013e0f
 */

void __cdecl FUN_11013d10(undefined4 *param_1,LPVOID param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = 0;
  if ((param_2 != (LPVOID)0x0) &&
     (iVar2 = *(int *)((int)param_2 + 0x2c) + -1, *(int *)((int)param_2 + 0x2c) = iVar2, iVar2 < 1))
  {
    if (*(int *)((int)param_2 + 0x14) != 0) {
      FUN_11013e60();
      if (0 < *(int *)((int)param_2 + 0x14)) {
        iVar2 = 0;
        do {
          iVar1 = *(int *)(*(int *)((int)param_2 + 0x1c) + 10 + iVar2);
          if (iVar1 != 0) {
            FUN_11002530(param_1,iVar1);
          }
          iVar2 = iVar2 + 0xe;
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)((int)param_2 + 0x14));
      }
      FUN_11013e70();
    }
    iVar4 = 0;
    if (*(int *)((int)param_2 + 0x20) != 0) {
      iVar2 = 0;
      FUN_11013e60();
      if (0 < *(int *)((int)param_2 + 0x20)) {
        do {
          iVar1 = *(int *)(*(int *)((int)param_2 + 0x28) + iVar4);
          if (iVar1 != 0) {
            FUN_11002530(param_1,iVar1);
          }
          iVar4 = iVar4 + 4;
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)((int)param_2 + 0x20));
      }
      FUN_11013e70();
    }
    uVar3 = FUN_11013ee0((int)param_2);
    if ((char)uVar3 != '\0') {
      FUN_11013e80(param_1,(int)param_2);
    }
    if (*(int *)((int)param_2 + 0xc) != 0) {
      FUN_11002730(param_1,*(int *)((int)param_2 + 0xc));
    }
    if (*(int *)((int)param_2 + 0x18) != 0) {
      FUN_11002730(param_1,*(int *)((int)param_2 + 0x18));
    }
    if (*(int *)((int)param_2 + 0x24) != 0) {
      FUN_11002730(param_1,*(int *)((int)param_2 + 0x24));
    }
    FUN_11029180(param_2);
  }
  return;
}


