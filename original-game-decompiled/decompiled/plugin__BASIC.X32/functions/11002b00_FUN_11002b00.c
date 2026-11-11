
/* ==== FUN_11002b00 @ 11002b00 ==== 
 * signature: undefined __cdecl FUN_11002b00(undefined4 * param_1, int param_2, int param_3)
 * body: 11002b00-11002b2c
 */

void __cdecl FUN_11002b00(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 0x10) != 0) {
    uVar1 = FUN_110024d0(param_1,*(int *)(param_2 + 0x10));
    *(undefined4 *)(param_3 + 4) = uVar1;
    return;
  }
  *(undefined4 *)(param_3 + 4) = 0;
  return;
}


