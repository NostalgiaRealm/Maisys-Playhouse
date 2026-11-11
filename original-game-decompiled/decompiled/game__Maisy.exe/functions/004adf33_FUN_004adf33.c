
/* ==== FUN_004adf33 @ 004adf33 ==== 
 * signature: undefined __fastcall FUN_004adf33(undefined4 * param_1)
 * body: 004adf33-004adf40
 */

void __fastcall FUN_004adf33(undefined4 *param_1)

{
  if ((HMODULE)*param_1 != (HMODULE)0x0) {
    FreeLibrary((HMODULE)*param_1);
  }
  return;
}


