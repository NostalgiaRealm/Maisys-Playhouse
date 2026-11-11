
/* ==== CException::CException @ 004a6091 ==== 
 * signature: undefined __thiscall CException(CException * this, int param_1)
 * body: 004a6091-004a60d6
 * note: Library Function - Single Match  public: __thiscall CException::CException(int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: __thiscall CException::CException(int)
   
   Library: Visual Studio 1998 Release */

undefined4 * __thiscall CException::CException(CException *this,int param_1)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_004cacec;
  *extraout_ECX = &PTR_FUN_004caccc;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  extraout_ECX[1] = *(undefined4 *)(unaff_EBP + 8);
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return extraout_ECX;
}


