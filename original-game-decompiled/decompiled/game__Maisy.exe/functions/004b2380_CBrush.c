
/* ==== CBrush::CBrush @ 004b2380 ==== 
 * signature: undefined __thiscall CBrush(CBrush * this, ulong param_1)
 * body: 004b2380-004b23e7
 * note: Library Function - Single Match  public: __thiscall CBrush::CBrush(unsigned long)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: __thiscall CBrush::CBrush(unsigned long)
   
   Library: Visual Studio 1998 Release */

undefined4 * __thiscall CBrush::CBrush(CBrush *this,ulong param_1)

{
  COLORREF color;
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
  color = *(COLORREF *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  *this_00 = &PTR_FUN_004cc354;
  pHVar2 = CreateSolidBrush(color);
  bVar1 = Attach(this_00,pHVar2);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    AfxThrowResourceException();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return this_00;
}


