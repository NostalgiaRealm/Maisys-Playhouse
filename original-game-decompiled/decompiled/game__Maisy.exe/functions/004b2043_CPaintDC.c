
/* ==== CPaintDC::CPaintDC @ 004b2043 ==== 
 * signature: undefined __thiscall CPaintDC(CPaintDC * this, CWnd * param_1)
 * body: 004b2043-004b20a6
 * note: Library Function - Single Match  public: __thiscall CPaintDC::CPaintDC(class CWnd *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: __thiscall CPaintDC::CPaintDC(class CWnd *)
   
   Library: Visual Studio 1998 Release */

CDC * __thiscall CPaintDC::CPaintDC(CPaintDC *this,CWnd *param_1)

{
  HWND hWnd;
  HDC pHVar1;
  int iVar2;
  CDC *this_00;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(CDC **)(unaff_EBP + -0x10) = this_00;
  CDC::CDC(this_00);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar2 = *(int *)(unaff_EBP + 8);
  *(undefined ***)this_00 = &PTR_FUN_004cc2a4;
  hWnd = *(HWND *)(iVar2 + 0x1c);
  *(HWND *)(this_00 + 0x10) = hWnd;
  pHVar1 = BeginPaint(hWnd,(LPPAINTSTRUCT)(this_00 + 0x14));
  iVar2 = CDC::Attach(this_00,pHVar1);
  if (iVar2 == 0) {
    AfxThrowResourceException();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return this_00;
}


