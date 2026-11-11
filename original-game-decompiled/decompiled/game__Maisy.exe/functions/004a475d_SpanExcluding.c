
/* ==== CString::SpanExcluding @ 004a475d ==== 
 * signature: CString __thiscall SpanExcluding(CString * this, char * param_1)
 * body: 004a475d-004a47a4
 * note: Library Function - Single Match  public: class CString __thiscall CString::SpanExcluding(char const *)const   Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: class CString __thiscall CString::SpanExcluding(char const *)const 
   
   Library: Visual Studio 1998 Release */

undefined4 __thiscall CString::SpanExcluding(CString *this,char *param_1)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  __mbscspn((uchar *)*extraout_ECX,*(uchar **)(unaff_EBP + 0xc));
  FUN_004a4662();
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  *(byte *)(unaff_EBP + -0x10) = *(byte *)(unaff_EBP + -0x10) | 1;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return uVar1;
}


