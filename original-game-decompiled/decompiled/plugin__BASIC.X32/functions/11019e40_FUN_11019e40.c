
/* ==== FUN_11019e40 @ 11019e40 ==== 
 * signature: undefined __cdecl FUN_11019e40(undefined4 * param_1, short * param_2)
 * body: 11019e40-11019e92
 */

void __cdecl FUN_11019e40(undefined4 *param_1,short *param_2)

{
  if (*param_2 == 0xd) {
    if (*(int *)(param_2 + 2) != 0) {
      FUN_11002530(param_1,*(int *)(param_2 + 2));
      *param_2 = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      return;
    }
  }
  else {
    if (*param_2 != 0x1fd) {
      *param_2 = 0;
      return;
    }
    FUN_11020e00(param_1,param_2);
  }
  *param_2 = 0;
  return;
}


