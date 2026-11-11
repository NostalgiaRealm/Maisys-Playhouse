
/* ==== FUN_11002bf0 @ 11002bf0 ==== 
 * signature: undefined __cdecl FUN_11002bf0(undefined4 * param_1, int param_2, undefined4 * param_3)
 * body: 11002bf0-11002c7c
 */

void __cdecl FUN_11002bf0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  int local_8 [2];
  
  cVar1 = FUN_11011800(param_1,*param_3,local_8,8);
  if (cVar1 != '\0') {
    uVar3 = 1;
    if (local_8[0] == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_11002580(param_1,local_8[0] + 1);
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        FUN_11011800(param_1,*param_3,iVar2,local_8[0]);
        *(undefined1 *)(local_8[0] + iVar2) = 0;
      }
    }
    if (*(int *)(param_2 + 0x10) != 0) {
      FUN_11002530(param_1,*(int *)(param_2 + 0x10));
    }
    *(int *)(param_2 + 0x10) = iVar2;
    *(undefined1 *)((int)param_3 + 0x12) = uVar3;
  }
  return;
}


