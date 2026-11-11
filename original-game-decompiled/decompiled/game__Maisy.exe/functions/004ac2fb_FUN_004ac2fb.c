
/* ==== FUN_004ac2fb @ 004ac2fb ==== 
 * signature: undefined __fastcall FUN_004ac2fb(CString * param_1)
 * body: 004ac2fb-004ac30e
 */

void __fastcall FUN_004ac2fb(CString *param_1)

{
  CString::CopyBeforeWrite(param_1);
  CharToOemA(*(LPCSTR *)param_1,*(LPCSTR *)param_1);
  return;
}


