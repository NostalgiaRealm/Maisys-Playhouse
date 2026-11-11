
/* ==== CCtrlView::CCtrlView @ 004b2b9a ==== 
 * signature: undefined __thiscall CCtrlView(CCtrlView * this, char * param_1, ulong param_2)
 * body: 004b2b9a-004b2bf8
 * note: Library Function - Single Match  public: __thiscall CCtrlView::CCtrlView(char const *,unsigned long)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: __thiscall CCtrlView::CCtrlView(char const *,unsigned long)
   
   Library: Visual Studio 1998 Release */

CView * __thiscall CCtrlView::CCtrlView(CCtrlView *this,char *param_1,ulong param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  CView *this_00;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(CView **)(unaff_EBP + -0x10) = this_00;
  CView::CView(this_00);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004abb44((undefined4 *)(this_00 + 0x40));
  pcVar1 = *(char **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *(undefined ***)this_00 = &PTR_FUN_004ccffc;
  CString::operator=((CString *)(this_00 + 0x40),pcVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uVar2 = *(undefined4 *)(unaff_EBP + -0xc);
  *(undefined4 *)(this_00 + 0x44) = *(undefined4 *)(unaff_EBP + 0xc);
  *unaff_FS_OFFSET = uVar2;
  return this_00;
}


