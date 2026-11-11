
/* ==== CFileDialog::DoModal @ 004a376a ==== 
 * signature: int __thiscall DoModal(CFileDialog * this)
 * body: 004a376a-004a382d
 * note: Library Function - Single Match  public: virtual int __thiscall CFileDialog::DoModal(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual int __thiscall CFileDialog::DoModal(void)
   
   Library: Visual Studio 1998 Release */

int __thiscall CFileDialog::DoModal(CFileDialog *this)

{
  bool bVar1;
  HWND hWnd;
  HWND__ *pHVar2;
  BOOL BVar3;
  _AFX_THREAD_STATE *p_Var4;
  int iVar5;
  
  bVar1 = false;
  hWnd = GetFocus();
  pHVar2 = CDialog::PreModal((CDialog *)this);
  *(HWND__ **)(this + 0x60) = pHVar2;
  FUN_004a8f79();
  if (*(HWND *)(this + 0x60) != (HWND)0x0) {
    BVar3 = IsWindowEnabled(*(HWND *)(this + 0x60));
    if (BVar3 != 0) {
      bVar1 = true;
      EnableWindow(*(HWND *)(this + 0x60),0);
    }
  }
  p_Var4 = AfxGetThreadState();
  if (((byte)this[0x92] & 8) == 0) {
    FUN_004a8f34((int)this);
  }
  else {
    *(CFileDialog **)(p_Var4 + 0x18) = this;
  }
  if (*(int *)(this + 0xa8) == 0) {
    iVar5 = GetSaveFileNameA((LPOPENFILENAMEA)(this + 0x5c));
  }
  else {
    iVar5 = GetOpenFileNameA((LPOPENFILENAMEA)(this + 0x5c));
  }
  *(undefined4 *)(p_Var4 + 0x18) = 0;
  if (bVar1) {
    EnableWindow(*(HWND *)(this + 0x60),1);
  }
  BVar3 = IsWindow(hWnd);
  if (BVar3 != 0) {
    SetFocus(hWnd);
  }
  CDialog::PostModal((CDialog *)this);
  if (iVar5 == 0) {
    iVar5 = 2;
  }
  return iVar5;
}


