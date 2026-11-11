
/* ==== CPtrList::CPtrList @ 004a54ba ==== 
 * signature: undefined __thiscall CPtrList(CPtrList * this, int param_1)
 * body: 004a54ba-004a550c
 * note: Library Function - Single Match  public: __thiscall CPtrList::CPtrList(int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: __thiscall CPtrList::CPtrList(int)
   
   Library: Visual Studio 1998 Release */

undefined4 * __thiscall CPtrList::CPtrList(CPtrList *this,int param_1)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_004cacec;
  *extraout_ECX = &PTR_FUN_004cd2f4;
  extraout_ECX[3] = 0;
  extraout_ECX[4] = 0;
  extraout_ECX[2] = 0;
  extraout_ECX[1] = 0;
  extraout_ECX[5] = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  extraout_ECX[6] = *(undefined4 *)(unaff_EBP + 8);
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return extraout_ECX;
}


