
/* ==== FUN_00412c60 @ 00412c60 ==== 
 * signature: undefined __cdecl FUN_00412c60(int param_1)
 * body: 00412c60-00412c85
 */

void __cdecl FUN_00412c60(int param_1)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + -4) = &DAT_004d9b88;
    FUN_0048e750((LPVOID)(param_1 + -4));
    DAT_004dc590 = DAT_004dc590 + -1;
  }
  return;
}


