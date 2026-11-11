
/* ==== CBrush::CBrush @ 004b2487 ==== 
 * signature: undefined __thiscall CBrush(CBrush * this, CBitmap * param_1)
 * body: 004b2487-004b24f1
 * note: Library Function - Single Match  public: __thiscall CBrush::CBrush(class CBitmap *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: __thiscall CBrush::CBrush(class CBitmap *)
   
   Library: Visual Studio 1998 Release */

undefined4 * __thiscall CBrush::CBrush(CBrush *this,CBitmap *param_1)

{
  int iVar1;
  bool bVar2;
  HBRUSH pHVar3;
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
  iVar1 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  *this_00 = &PTR_FUN_004cc354;
  pHVar3 = CreatePatternBrush(*(HBITMAP *)(iVar1 + 4));
  bVar2 = Attach(this_00,pHVar3);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    AfxThrowResourceException();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return this_00;
}


