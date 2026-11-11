
/* ==== CCmdTarget::CCmdTarget @ 004a78f6 ==== 
 * signature: undefined __thiscall CCmdTarget(CCmdTarget * this)
 * body: 004a78f6-004a7948
 * note: Library Function - Single Match  public: __thiscall CCmdTarget::CCmdTarget(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: __thiscall CCmdTarget::CCmdTarget(void)
   
   Library: Visual Studio 1998 Release */

undefined4 * __thiscall CCmdTarget::CCmdTarget(CCmdTarget *this)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_004cacec;
  *extraout_ECX = &PTR_FUN_004cb264;
  extraout_ECX[2] = 0;
  extraout_ECX[3] = 0;
  extraout_ECX[4] = 0;
  extraout_ECX[6] = 0;
  extraout_ECX[1] = 1;
  extraout_ECX[5] = 1;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return extraout_ECX;
}


