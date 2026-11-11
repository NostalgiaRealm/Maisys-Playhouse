
/* ==== CException::CException @ 004a603a ==== 
 * signature: undefined __thiscall CException(CException * this)
 * body: 004a603a-004a607e
 * note: Library Function - Single Match  public: __thiscall CException::CException(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: __thiscall CException::CException(void)
   
   Library: Visual Studio 1998 Release */

undefined4 * __thiscall CException::CException(CException *this)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_004cacec;
  *extraout_ECX = &PTR_FUN_004caccc;
  uVar1 = *(undefined4 *)(unaff_EBP + -0xc);
  extraout_ECX[1] = 1;
  *unaff_FS_OFFSET = uVar1;
  return extraout_ECX;
}


