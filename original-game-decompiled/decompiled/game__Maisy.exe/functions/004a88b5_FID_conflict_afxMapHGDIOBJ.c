
/* ==== FID_conflict:afxMapHGDIOBJ @ 004a88b5 ==== 
 * signature: undefined4 __stdcall FID_conflict:afxMapHGDIOBJ(void)
 * body: 004a88b5-004a892f
 * note: Library Function - Multiple Matches With Different Base Names  class CHandleMap * __cdecl afxMapHDC(int)  class CHandleMap * __cdecl afxMapHGDIOBJ(int)  class CHandleMap * __cdecl afxMapHIMAGELIST(int)  class CHandleMap * __cdecl afxMapHMENU(int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Different Base Names
    class CHandleMap * __cdecl afxMapHDC(int)
    class CHandleMap * __cdecl afxMapHGDIOBJ(int)
    class CHandleMap * __cdecl afxMapHIMAGELIST(int)
    class CHandleMap * __cdecl afxMapHMENU(int)
   
   Library: Visual Studio 1998 Release */

undefined4 FID_conflict_afxMapHGDIOBJ(void)

{
  AFX_MODULE_THREAD_STATE *pAVar1;
  _func_int_uint *p_Var2;
  CHandleMap *this;
  undefined4 uVar3;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  pAVar1 = AfxGetModuleThreadState();
  if ((*(int *)(pAVar1 + 0x14) == 0) && (*(int *)(unaff_EBP + 8) != 0)) {
    p_Var2 = AfxSetNewHandler(FUN_004b2f6f);
    this = (CHandleMap *)FUN_004a5fed(0x44);
    *(CHandleMap **)(unaff_EBP + -0x10) = this;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (this == (CHandleMap *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = CHandleMap::CHandleMap(this,(CRuntimeClass *)&PTR_DAT_004dd690,0x1c,1);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(pAVar1 + 0x14) = uVar3;
    AfxSetNewHandler(p_Var2);
  }
  uVar3 = *(undefined4 *)(pAVar1 + 0x14);
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return uVar3;
}


