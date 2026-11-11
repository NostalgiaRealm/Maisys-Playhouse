
/* ==== CBrush::CBrush @ 004b2402 ==== 
 * signature: undefined __thiscall CBrush(CBrush * this, int param_1, ulong param_2)
 * body: 004b2402-004b246c
 * note: Library Function - Single Match  public: __thiscall CBrush::CBrush(int,unsigned long)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: __thiscall CBrush::CBrush(int,unsigned long)
   
   Library: Visual Studio 1998 Release */

undefined4 * __thiscall CBrush::CBrush(CBrush *this,int param_1,ulong param_2)

{
  COLORREF color;
  int iHatch;
  bool bVar1;
  HBRUSH pHVar2;
  undefined3 extraout_var;
  undefined4 *this_00;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 **)(unaff_EBP + -0x10) = this_00;
  *this_00 = &PTR_FUN_004cacec;
  *this_00 = &PTR_FUN_004cc33c;
  this_00[1] = 0;
  color = *(COLORREF *)(unaff_EBP + 0xc);
  iHatch = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  *this_00 = &PTR_FUN_004cc354;
  pHVar2 = CreateHatchBrush(iHatch,color);
  bVar1 = Attach(this_00,pHVar2);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    AfxThrowResourceException();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return this_00;
}


