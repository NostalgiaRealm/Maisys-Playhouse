
/* ==== CString::Mid @ 004a44bd ==== 
 * signature: CString __thiscall Mid(CString * this, int param_1)
 * body: 004a44bd-004a44fb
 * note: Library Function - Single Match  public: class CString __thiscall CString::Mid(int)const   Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: class CString __thiscall CString::Mid(int)const 
   
   Library: Visual Studio 1998 Release */

undefined4 __thiscall CString::Mid(CString *this,int param_1)

{
  undefined4 uVar1;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  FUN_004a4515();
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  *(byte *)(unaff_EBP + -0x10) = *(byte *)(unaff_EBP + -0x10) | 1;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return uVar1;
}


