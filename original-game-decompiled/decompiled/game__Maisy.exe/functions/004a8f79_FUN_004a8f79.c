
/* ==== FUN_004a8f79 @ 004a8f79 ==== 
 * signature: bool __stdcall FUN_004a8f79(void)
 * body: 004a8f79-004a8fc7
 */

bool FUN_004a8f79(void)

{
  _AFX_THREAD_STATE *p_Var1;
  int iVar2;
  
  p_Var1 = AfxGetThreadState();
  iVar2 = FUN_004bafca();
  if ((*(char *)(iVar2 + 0x14) != '\0') && (*(HHOOK *)(p_Var1 + 0x30) != (HHOOK)0x0)) {
    UnhookWindowsHookEx(*(HHOOK *)(p_Var1 + 0x30));
    *(undefined4 *)(p_Var1 + 0x30) = 0;
  }
  if (*(HHOOK *)(p_Var1 + 0x2c) != (HHOOK)0x0) {
    UnhookWindowsHookEx(*(HHOOK *)(p_Var1 + 0x2c));
    *(undefined4 *)(p_Var1 + 0x2c) = 0;
  }
  iVar2 = *(int *)(p_Var1 + 0x14);
  if (iVar2 != 0) {
    *(undefined4 *)(p_Var1 + 0x14) = 0;
  }
  return iVar2 == 0;
}


