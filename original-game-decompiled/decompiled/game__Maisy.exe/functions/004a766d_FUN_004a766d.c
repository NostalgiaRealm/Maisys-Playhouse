
/* ==== FUN_004a766d @ 004a766d ==== 
 * signature: undefined __stdcall FUN_004a766d(int param_1, WPARAM param_2, LPARAM param_3)
 * body: 004a766d-004a76b8
 */

void FUN_004a766d(int param_1,WPARAM param_2,LPARAM param_3)

{
  int iVar1;
  int *piVar2;
  _AFX_THREAD_STATE *p_Var3;
  
  iVar1 = FUN_004bafca();
  if ((*(char *)(iVar1 + 0x14) == '\0') && ((-1 < param_1 || (param_1 == 0x8001)))) {
    piVar2 = (int *)FUN_004a7052();
    (**(code **)(*piVar2 + 0x74))(param_1,param_3);
  }
  else {
    p_Var3 = AfxGetThreadState();
    CallNextHookEx(*(HHOOK *)(p_Var3 + 0x34),param_1,param_2,param_3);
  }
  return;
}


