
/* ==== FUN_11002ad0 @ 11002ad0 ==== 
 * signature: undefined __cdecl FUN_11002ad0(undefined4 * param_1, int param_2, int param_3)
 * body: 11002ad0-11002af5
 */

void __cdecl FUN_11002ad0(undefined4 *param_1,int param_2,int param_3)

{
  if (*(int *)(param_2 + 0x10) != 0) {
    FUN_11002530(param_1,*(int *)(param_2 + 0x10));
  }
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 4);
  return;
}


