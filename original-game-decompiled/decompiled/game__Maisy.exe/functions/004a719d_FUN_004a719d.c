
/* ==== FUN_004a719d @ 004a719d ==== 
 * signature: undefined __stdcall FUN_004a719d(void)
 * body: 004a719d-004a720e
 */

void FUN_004a719d(void)

{
  code *pcVar1;
  int iVar2;
  BOOL BVar3;
  _AFX_THREAD_STATE *p_Var4;
  DWORD dwThreadId;
  HHOOK pHVar5;
  
  iVar2 = FUN_004bafca();
  if (*(char *)(iVar2 + 0x14) == '\0') {
    iVar2 = 0x60;
    do {
      BVar3 = SetMessageQueue(iVar2);
      if (BVar3 != 0) break;
      iVar2 = iVar2 + -8;
    } while (iVar2 != 0);
    p_Var4 = AfxGetThreadState();
    dwThreadId = GetCurrentThreadId();
    pHVar5 = SetWindowsHookExA(-1,FUN_004a766d,(HINSTANCE)0x0,dwThreadId);
    *(HHOOK *)(p_Var4 + 0x34) = pHVar5;
    iVar2 = FUN_004bbf67();
    pcVar1 = *(code **)(iVar2 + 0x14);
    if (pcVar1 != (code *)0x0) {
      iVar2 = FUN_004bafca();
      (*pcVar1)(*(undefined4 *)(iVar2 + 8));
    }
    FUN_004bbe8e(&DAT_004e53c8,CreateObject);
  }
  return;
}


