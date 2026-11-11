
/* ==== afxMapHWND @ 004b0bf2 ==== 
 * signature: CHandleMap * __cdecl afxMapHWND(int param_1)
 * body: 004b0bf2-004b0c6c
 * note: Library Function - Single Match  class CHandleMap * __cdecl afxMapHWND(int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    class CHandleMap * __cdecl afxMapHWND(int)
   
   Library: Visual Studio 1998 Release */

CHandleMap * __cdecl afxMapHWND(int param_1)

{
  AFX_MODULE_THREAD_STATE *pAVar1;
  _func_int_uint *p_Var2;
  CHandleMap *pCVar3;
  undefined4 uVar4;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  pAVar1 = AfxGetModuleThreadState();
  if ((*(int *)(pAVar1 + 0x1c) == 0) && (*(int *)(unaff_EBP + 8) != 0)) {
    p_Var2 = AfxSetNewHandler(FUN_004b2f6f);
    pCVar3 = (CHandleMap *)FUN_004a5fed(0x44);
    *(CHandleMap **)(unaff_EBP + -0x10) = pCVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (pCVar3 == (CHandleMap *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = CHandleMap::CHandleMap(pCVar3,(CRuntimeClass *)&PTR_DAT_004dd958,4,2);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(pAVar1 + 0x1c) = uVar4;
    AfxSetNewHandler(p_Var2);
  }
  pCVar3 = *(CHandleMap **)(pAVar1 + 0x1c);
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return pCVar3;
}


