
/* ==== FUN_004ac2aa @ 004ac2aa ==== 
 * signature: undefined __fastcall FUN_004ac2aa(CString * param_1)
 * body: 004ac2aa-004ac2bb
 */

void __fastcall FUN_004ac2aa(CString *param_1)

{
  CString::CopyBeforeWrite(param_1);
  CharUpperA(*(LPSTR *)param_1);
  return;
}


