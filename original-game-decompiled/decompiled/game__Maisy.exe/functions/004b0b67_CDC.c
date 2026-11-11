
/* ==== CDC::CDC @ 004b0b67 ==== 
 * signature: undefined __thiscall CDC(CDC * this)
 * body: 004b0b67-004b0bab
 * note: Library Function - Single Match  public: __thiscall CDC::CDC(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: __thiscall CDC::CDC(void)
   
   Library: Visual Studio 1998 Release */

undefined4 * __thiscall CDC::CDC(CDC *this)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_004cacec;
  *extraout_ECX = &PTR_FUN_004cc124;
  extraout_ECX[1] = 0;
  extraout_ECX[2] = 0;
  extraout_ECX[3] = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return extraout_ECX;
}


