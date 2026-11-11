
/* ==== FUN_11002400 @ 11002400 ==== 
 * signature: uint __cdecl FUN_11002400(undefined4 param_1, undefined4 param_2, uint param_3)
 * body: 11002400-11002413
 */

uint __cdecl FUN_11002400(undefined4 param_1,undefined4 param_2,uint param_3)

{
  *(undefined2 *)(param_3 + 0xc) = 0;
  *(undefined4 *)(param_3 + 8) = 4;
  return param_3 & 0xffffff00;
}


