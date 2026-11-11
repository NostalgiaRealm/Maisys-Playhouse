
/* ==== FUN_100180b0 @ 100180b0 ==== 
 * signature: undefined __cdecl FUN_100180b0(undefined * param_1)
 * body: 100180b0-1001815f
 */

void __cdecl FUN_100180b0(undefined *param_1)

{
  if (DAT_10022334 != 0xffffffff) {
    if ((param_1 != (undefined *)0x0) ||
       (param_1 = TlsGetValue(DAT_10022334), param_1 != (undefined *)0x0)) {
      if (*(undefined **)(param_1 + 0x24) != (undefined *)0x0) {
        FUN_10015a50(*(undefined **)(param_1 + 0x24));
      }
      if (*(undefined **)(param_1 + 0x28) != (undefined *)0x0) {
        FUN_10015a50(*(undefined **)(param_1 + 0x28));
      }
      if (*(undefined **)(param_1 + 0x30) != (undefined *)0x0) {
        FUN_10015a50(*(undefined **)(param_1 + 0x30));
      }
      if (*(undefined **)(param_1 + 0x38) != (undefined *)0x0) {
        FUN_10015a50(*(undefined **)(param_1 + 0x38));
      }
      if (*(undefined **)(param_1 + 0x40) != (undefined *)0x0) {
        FUN_10015a50(*(undefined **)(param_1 + 0x40));
      }
      if (*(undefined **)(param_1 + 0x44) != (undefined *)0x0) {
        FUN_10015a50(*(undefined **)(param_1 + 0x44));
      }
      if (*(undefined **)(param_1 + 0x50) != &DAT_10023060) {
        FUN_10015a50(*(undefined **)(param_1 + 0x50));
      }
      FUN_10015a50(param_1);
    }
    TlsSetValue(DAT_10022334,(LPVOID)0x0);
    return;
  }
  return;
}


