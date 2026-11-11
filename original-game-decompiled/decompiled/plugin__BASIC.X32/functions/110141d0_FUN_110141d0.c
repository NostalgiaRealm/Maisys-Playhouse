
/* ==== FUN_110141d0 @ 110141d0 ==== 
 * signature: undefined __cdecl FUN_110141d0(undefined4 * param_1, int param_2)
 * body: 110141d0-11014234
 */

void __cdecl FUN_110141d0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    if ((*(int *)(param_2 + 0xc) != 0) && (*(int *)(param_2 + 0x10) == 0)) {
      uVar1 = FUN_11002840(param_1,*(int *)(param_2 + 0xc));
      *(undefined4 *)(param_2 + 0x10) = uVar1;
    }
    if ((*(int *)(param_2 + 0x18) != 0) && (*(int *)(param_2 + 0x1c) == 0)) {
      uVar1 = FUN_11002840(param_1,*(int *)(param_2 + 0x18));
      *(undefined4 *)(param_2 + 0x1c) = uVar1;
    }
    if ((*(int *)(param_2 + 0x24) != 0) && (*(int *)(param_2 + 0x28) == 0)) {
      uVar1 = FUN_11002840(param_1,*(int *)(param_2 + 0x24));
      *(undefined4 *)(param_2 + 0x28) = uVar1;
    }
  }
  return;
}


