
/* ==== CCommandLineInfo::CCommandLineInfo @ 004ba198 ==== 
 * signature: undefined __thiscall CCommandLineInfo(CCommandLineInfo * this)
 * body: 004ba198-004ba215
 * note: Library Function - Single Match  public: __thiscall CCommandLineInfo::CCommandLineInfo(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: __thiscall CCommandLineInfo::CCommandLineInfo(void)
   
   Library: Visual Studio 1998 Release */

undefined4 * __thiscall CCommandLineInfo::CCommandLineInfo(CCommandLineInfo *this)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_004cacec;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004abb44(extraout_ECX + 5);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_004abb44(extraout_ECX + 6);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_004abb44(extraout_ECX + 7);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_004abb44(extraout_ECX + 8);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  *extraout_ECX = &PTR_FUN_004cb0a4;
  extraout_ECX[2] = 0;
  extraout_ECX[3] = 0;
  extraout_ECX[1] = 1;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uVar1 = *(undefined4 *)(unaff_EBP + -0xc);
  extraout_ECX[4] = 0;
  *unaff_FS_OFFSET = uVar1;
  return extraout_ECX;
}


