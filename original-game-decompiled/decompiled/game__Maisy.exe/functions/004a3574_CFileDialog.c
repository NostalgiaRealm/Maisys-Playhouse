
/* ==== CFileDialog::CFileDialog @ 004a3574 ==== 
 * signature: undefined __thiscall CFileDialog(CFileDialog * this, int param_1, char * param_2, char * param_3, ulong param_4, char * param_5, CWnd * param_6)
 * body: 004a3574-004a36d4
 * note: Library Function - Single Match  public: __thiscall CFileDialog::CFileDialog(int,char const *,char const *,unsigned long,char const *,class CWnd *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: __thiscall CFileDialog::CFileDialog(int,char const *,char const *,unsigned long,char
   const *,class CWnd *)
   
   Library: Visual Studio 1998 Release */

CDialog * __thiscall
CFileDialog::CFileDialog
          (CFileDialog *this,int param_1,char *param_2,char *param_3,ulong param_4,char *param_5,
          CWnd *param_6)

{
  CString *this_00;
  int iVar1;
  uchar *puVar2;
  CDialog *this_01;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(CDialog **)(unaff_EBP + -0x10) = this_01;
  this_00 = (CString *)(this_01 + 0xac);
  CDialog::CDialog(this_01,0,*(CWnd **)(unaff_EBP + 0x1c));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  *(undefined ***)this_01 = &PTR_FUN_004cb8bc;
  FUN_004abb44((undefined4 *)this_00);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  *(undefined ***)this_01 = &PTR_FUN_004cb7c4;
  _memset(this_01 + 0x5c,0,0x4c);
  iVar1 = *(int *)(unaff_EBP + 8);
  this_01[0xf0] = (CDialog)0x0;
  this_01[0xb0] = (CDialog)0x0;
  *(undefined4 *)(this_01 + 500) = 0;
  *(int *)(this_01 + 0xa8) = iVar1;
  *(CDialog **)(this_01 + 0x78) = this_01 + 0xf0;
  *(undefined4 *)(this_01 + 0x5c) = 0x4c;
  *(CDialog **)(this_01 + 0x80) = this_01 + 0xb0;
  *(undefined4 *)(this_01 + 0x7c) = 0x104;
  *(undefined4 *)(this_01 + 0x84) = 0x40;
  *(uint *)(this_01 + 0x3c) = (iVar1 == 0) + 0x7004;
  *(undefined4 *)(this_01 + 0x98) = *(undefined4 *)(unaff_EBP + 0xc);
  *(uint *)(this_01 + 0x90) = *(uint *)(this_01 + 0x90) | *(uint *)(unaff_EBP + 0x14) | 0x20;
  if (DAT_004e51f8 == 0) {
    iVar1 = AfxHelpEnabled();
    if (iVar1 != 0) {
      this_01[0x90] = (CDialog)((byte)this_01[0x90] | 0x10);
    }
  }
  if (DAT_004e51f8 != 0) {
    this_01[0x92] = (CDialog)((byte)this_01[0x92] | 8);
    iVar1 = FUN_004bafca();
    *(undefined4 *)(this_01 + 100) = *(undefined4 *)(iVar1 + 0xc);
  }
  *(code **)(this_01 + 0xa0) = FUN_004a41cd;
  if (*(LPCSTR *)(unaff_EBP + 0x10) != (LPCSTR)0x0) {
    lstrcpynA((LPSTR)(this_01 + 0xf0),*(LPCSTR *)(unaff_EBP + 0x10),0x104);
  }
  if (*(char **)(unaff_EBP + 0x18) != (char *)0x0) {
    CString::operator=(this_00,*(char **)(unaff_EBP + 0x18));
    puVar2 = (uchar *)FUN_004ac16a(this_00,0);
    while( true ) {
      puVar2 = __mbschr(puVar2,0x7c);
      if (puVar2 == (uchar *)0x0) break;
      *puVar2 = '\0';
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)(this_01 + 0x68) = *(undefined4 *)this_00;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return this_01;
}


