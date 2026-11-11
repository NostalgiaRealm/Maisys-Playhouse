
/* ==== FUN_004ac2bc @ 004ac2bc ==== 
 * signature: undefined __fastcall FUN_004ac2bc(CString * param_1)
 * body: 004ac2bc-004ac2cd
 */

void __fastcall FUN_004ac2bc(CString *param_1)

{
  CString::CopyBeforeWrite(param_1);
  CharLowerA(*(LPSTR *)param_1);
  return;
}


