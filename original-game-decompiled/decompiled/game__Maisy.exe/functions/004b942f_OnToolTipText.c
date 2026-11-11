
/* ==== CFrameWnd::OnToolTipText @ 004b942f ==== 
 * signature: int __thiscall OnToolTipText(CFrameWnd * this, uint param_1, tagNMHDR * param_2, long * param_3)
 * body: 004b942f-004b9512
 * note: Library Function - Single Match  protected: int __thiscall CFrameWnd::OnToolTipText(unsigned int,struct tagNMHDR *,long *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    protected: int __thiscall CFrameWnd::OnToolTipText(unsigned int,struct tagNMHDR *,long *)
   
   Library: Visual Studio 1998 Release */

int __thiscall
CFrameWnd::OnToolTipText(CFrameWnd *this,uint param_1,tagNMHDR *param_2,long *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  HWND hWnd;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  iVar2 = FUN_004a7c77();
  if (iVar2 == 0) {
    FUN_004abb44((undefined4 *)(unaff_EBP + -0x10));
    puVar1 = *(undefined4 **)(unaff_EBP + 0xc);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    hWnd = (HWND)puVar1[1];
    if (((puVar1[2] == -0x208) && ((*(byte *)(puVar1 + 0x19) & 1) != 0)) ||
       ((puVar1[2] == -0x212 && ((*(byte *)(puVar1 + 0x2d) & 1) != 0)))) {
      uVar3 = GetDlgCtrlID(hWnd);
      hWnd = (HWND)(uVar3 & 0xffff);
    }
    if (hWnd != (HWND)0x0) {
      AfxLoadString((uint)hWnd,(char *)(unaff_EBP + -0x110),0x100);
      AfxExtractSubString((CString *)(unaff_EBP + -0x10),(char *)(unaff_EBP + -0x110),1,'\n');
    }
    if (puVar1[2] == -0x208) {
      lstrcpynA((LPSTR)(puVar1 + 4),*(char **)(unaff_EBP + -0x10),0x50);
    }
    else {
      _mbstowcsz((ushort *)(puVar1 + 4),*(char **)(unaff_EBP + -0x10),0x50);
    }
    **(undefined4 **)(unaff_EBP + 0x10) = 0;
    SetWindowPos((HWND)*puVar1,(HWND)0x0,0,0,0,0,0x13);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_004b951d();
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return iVar2;
}


