
/* ==== CMapPtrToPtr::CMapPtrToPtr @ 004a589d ==== 
 * signature: undefined __thiscall CMapPtrToPtr(CMapPtrToPtr * this, int param_1)
 * body: 004a589d-004a58f3
 * note: Library Function - Single Match  public: __thiscall CMapPtrToPtr::CMapPtrToPtr(int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: __thiscall CMapPtrToPtr::CMapPtrToPtr(int)
   
   Library: Visual Studio 1998 Release */

undefined4 * __thiscall CMapPtrToPtr::CMapPtrToPtr(CMapPtrToPtr *this,int param_1)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_004cacec;
  *extraout_ECX = &PTR_FUN_004cd2cc;
  extraout_ECX[1] = 0;
  extraout_ECX[3] = 0;
  extraout_ECX[4] = 0;
  extraout_ECX[5] = 0;
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  extraout_ECX[2] = 0x11;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  extraout_ECX[6] = uVar1;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return extraout_ECX;
}


