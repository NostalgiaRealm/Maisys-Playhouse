
/* ==== FUN_004ac30f @ 004ac30f ==== 
 * signature: undefined __fastcall FUN_004ac30f(CString * param_1)
 * body: 004ac30f-004ac322
 */

void __fastcall FUN_004ac30f(CString *param_1)

{
  CString::CopyBeforeWrite(param_1);
  OemToCharA(*(LPCSTR *)param_1,*(LPCSTR *)param_1);
  return;
}


