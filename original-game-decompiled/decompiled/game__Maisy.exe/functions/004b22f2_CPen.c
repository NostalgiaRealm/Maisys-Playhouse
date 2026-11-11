
/* ==== CPen::CPen @ 004b22f2 ==== 
 * signature: undefined __thiscall CPen(CPen * this, int param_1, int param_2, tagLOGBRUSH * param_3, int param_4, ulong * param_5)
 * body: 004b22f2-004b2365
 * note: Library Function - Single Match  public: __thiscall CPen::CPen(int,int,struct tagLOGBRUSH const *,int,unsigned long const *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: __thiscall CPen::CPen(int,int,struct tagLOGBRUSH const *,int,unsigned long const *)
   
   Library: Visual Studio 1998 Release */

undefined4 * __thiscall
CPen::CPen(CPen *this,int param_1,int param_2,tagLOGBRUSH *param_3,int param_4,ulong *param_5)

{
  DWORD *pstyle;
  DWORD cStyle;
  LOGBRUSH *plbrush;
  DWORD cWidth;
  DWORD iPenStyle;
  bool bVar1;
  HPEN pHVar2;
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
  pstyle = *(DWORD **)(unaff_EBP + 0x18);
  cStyle = *(DWORD *)(unaff_EBP + 0x14);
  plbrush = *(LOGBRUSH **)(unaff_EBP + 0x10);
  cWidth = *(DWORD *)(unaff_EBP + 0xc);
  iPenStyle = *(DWORD *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  *this_00 = &PTR_FUN_004cc324;
  pHVar2 = ExtCreatePen(iPenStyle,cWidth,plbrush,cStyle,pstyle);
  bVar1 = Attach(this_00,pHVar2);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    AfxThrowResourceException();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return this_00;
}


