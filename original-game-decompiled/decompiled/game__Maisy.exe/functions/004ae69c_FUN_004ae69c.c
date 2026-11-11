
/* ==== FUN_004ae69c @ 004ae69c ==== 
 * signature: bool __stdcall FUN_004ae69c(void)
 * body: 004ae69c-004ae75b
 */

bool FUN_004ae69c(void)

{
  AFX_MODULE_THREAD_STATE *pAVar1;
  int iVar2;
  _AFX_THREAD_STATE *p_Var3;
  uint uVar4;
  undefined4 uVar5;
  SIZE_T SVar6;
  
  pAVar1 = AfxGetModuleThreadState();
  pAVar1 = pAVar1 + 0x10;
  if ((*(int *)pAVar1 != 0) && (iVar2 = *(int *)pAVar1 + -1, *(int *)pAVar1 = iVar2, iVar2 == 0)) {
    iVar2 = FUN_004bafca();
    iVar2 = *(int *)(iVar2 + 4);
    if ((iVar2 != 0) && (*(code **)(iVar2 + 0xb8) != (code *)0x0)) {
      (**(code **)(iVar2 + 0xb8))(0,0);
    }
    DeleteTempMap();
    CWnd::DeleteTempMap();
    DeleteTempMap();
    DeleteTempMap();
    p_Var3 = AfxGetThreadState();
    p_Var3 = p_Var3 + 0xc;
    if (*(LPCVOID *)p_Var3 != (LPCVOID)0x0) {
      uVar4 = FUN_00492660(*(LPCVOID *)p_Var3);
      if (*(uint *)(iVar2 + 0xb0) <= uVar4) goto LAB_004ae751;
    }
    if (*(SIZE_T *)(iVar2 + 0xb0) != 0) {
      SVar6 = 0;
      if (*(LPCVOID *)p_Var3 != (LPCVOID)0x0) {
        SVar6 = FUN_00492660(*(LPCVOID *)p_Var3);
        FUN_0048e750(*(LPVOID *)p_Var3);
      }
      iVar2 = FUN_00490210(*(SIZE_T *)(iVar2 + 0xb0));
      *(int *)p_Var3 = iVar2;
      if ((iVar2 == 0) && (SVar6 != 0)) {
        uVar5 = FUN_00490210(SVar6);
        *(undefined4 *)p_Var3 = uVar5;
      }
    }
  }
LAB_004ae751:
  return (bool)('\x01' - (*(int *)pAVar1 == 0));
}


