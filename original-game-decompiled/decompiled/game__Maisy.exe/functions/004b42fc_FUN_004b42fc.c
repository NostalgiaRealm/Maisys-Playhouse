
/* ==== FUN_004b42fc @ 004b42fc ==== 
 * signature: bool __stdcall FUN_004b42fc(CString * param_1)
 * body: 004b42fc-004b4394
 */

bool FUN_004b42fc(CString *param_1)

{
  LPCSTR lpString;
  int iVar1;
  int iVar2;
  int iVar3;
  
  CString::operator=(param_1,&DAT_004dd6e8);
  lpString = (LPCSTR)FUN_004ac16a(param_1,0x80);
  while( true ) {
    iVar1 = FUN_004b41f9();
    CString::ReleaseBuffer(param_1,-1);
    if (iVar1 == 0) break;
    iVar2 = lstrlenA(lpString);
    if ((iVar2 < 0x80) || (lpString[iVar2 + -1] == '\n')) break;
    iVar1 = *(int *)(*(int *)param_1 + -8);
    iVar2 = FUN_004ac16a(param_1,iVar1 + 0x80);
    lpString = (LPCSTR)(iVar1 + iVar2);
  }
  iVar3 = FUN_004ac16a(param_1,0);
  iVar2 = *(int *)(*(int *)param_1 + -8);
  if ((iVar2 != 0) && (*(char *)(iVar3 + -1 + iVar2) == '\n')) {
    CString::GetBufferSetLength(param_1,iVar2 + -1);
  }
  return (bool)('\x01' - (iVar1 == 0));
}


