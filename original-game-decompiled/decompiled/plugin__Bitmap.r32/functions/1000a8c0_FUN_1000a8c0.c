
/* ==== FUN_1000a8c0 @ 1000a8c0 ==== 
 * signature: undefined __cdecl FUN_1000a8c0(undefined * param_1)
 * body: 1000a8c0-1000a95c
 */

void __cdecl FUN_1000a8c0(undefined *param_1)

{
  if (DAT_1001344c != 0xffffffff) {
    if ((param_1 != (undefined *)0x0) ||
       (param_1 = TlsGetValue(DAT_1001344c), param_1 != (undefined *)0x0)) {
      if (*(undefined **)(param_1 + 0x24) != (undefined *)0x0) {
        FUN_1000bff0(*(undefined **)(param_1 + 0x24));
      }
      if (*(undefined **)(param_1 + 0x28) != (undefined *)0x0) {
        FUN_1000bff0(*(undefined **)(param_1 + 0x28));
      }
      if (*(undefined **)(param_1 + 0x30) != (undefined *)0x0) {
        FUN_1000bff0(*(undefined **)(param_1 + 0x30));
      }
      if (*(undefined **)(param_1 + 0x38) != (undefined *)0x0) {
        FUN_1000bff0(*(undefined **)(param_1 + 0x38));
      }
      if (*(undefined **)(param_1 + 0x40) != (undefined *)0x0) {
        FUN_1000bff0(*(undefined **)(param_1 + 0x40));
      }
      if (*(undefined **)(param_1 + 0x44) != (undefined *)0x0) {
        FUN_1000bff0(*(undefined **)(param_1 + 0x44));
      }
      FUN_1000bff0(param_1);
    }
    TlsSetValue(DAT_1001344c,(LPVOID)0x0);
    return;
  }
  return;
}


