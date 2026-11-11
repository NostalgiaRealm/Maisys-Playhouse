
/* ==== FUN_004a61e7 @ 004a61e7 ==== 
 * signature: undefined __stdcall FUN_004a61e7(void)
 * body: 004a61e7-004a6217
 */

void FUN_004a61e7(void)

{
  DWORD dwErrCode;
  int iVar1;
  
  dwErrCode = GetLastError();
  iVar1 = FUN_004bbe8e(&DAT_004e362c,CThreadLocal<_AFX_THREAD_STATE>::CreateObject);
  SetLastError(dwErrCode);
  if (*(int *)(iVar1 + 0x10) != 0) {
    *(undefined4 *)(*(int *)(iVar1 + 0x10) + 4) = 0;
  }
  return;
}


