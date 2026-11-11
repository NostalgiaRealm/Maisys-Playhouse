
/* ==== FUN_11002620 @ 11002620 ==== 
 * signature: undefined __cdecl FUN_11002620(short * param_1)
 * body: 11002620-11002664
 */

void __cdecl FUN_11002620(short *param_1)

{
  if (*param_1 == 0x1c) {
    FUN_1100d8f0(*(LPVOID *)(param_1 + 5));
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  if (*param_1 == 0xd) {
    FUN_1100d8f0(*(LPVOID *)(param_1 + 2));
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}


