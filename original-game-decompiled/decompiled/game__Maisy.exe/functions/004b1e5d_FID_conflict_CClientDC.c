
/* ==== FID_conflict:CClientDC @ 004b1e5d ==== 
 * signature: CDC * __stdcall FID_conflict:CClientDC(void)
 * body: 004b1e5d-004b1ec5
 * note: Library Function - Multiple Matches With Different Base Names  public: __thiscall CClientDC::CClientDC(class CWnd *)  public: __thiscall CWindowDC::CWindowDC(class CWnd *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Different Base Names
    public: __thiscall CClientDC::CClientDC(class CWnd *)
    public: __thiscall CWindowDC::CWindowDC(class CWnd *)
   
   Library: Visual Studio 1998 Release */

CDC * FID_conflict_CClientDC(void)

{
  CDC *pCVar1;
  HDC pHVar2;
  int iVar3;
  CDC *this;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(CDC **)(unaff_EBP + -0x10) = this;
  CDC::CDC(this);
  iVar3 = *(int *)(unaff_EBP + 8);
  pCVar1 = this + 0x10;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined ***)this = &PTR_FUN_004cc1a4;
  if (iVar3 == 0) {
    *(undefined4 *)pCVar1 = 0;
  }
  else {
    *(undefined4 *)pCVar1 = *(undefined4 *)(iVar3 + 0x1c);
  }
  pHVar2 = GetDC(*(HWND *)pCVar1);
  iVar3 = CDC::Attach(this,pHVar2);
  if (iVar3 == 0) {
    AfxThrowResourceException();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return this;
}


