
/* ==== FUN_0042eb20 @ 0042eb20 ==== 
 * signature: undefined __thiscall FUN_0042eb20(void * this, undefined4 * param_1)
 * body: 0042eb20-0042ee3d
 */

void __thiscall FUN_0042eb20(void *this,undefined4 *param_1)

{
  short *psVar1;
  undefined4 uVar2;
  HGLOBAL hMem;
  int iVar3;
  void *this_00;
  HBRUSH hbr;
  HRGN hrgn;
  bool bVar4;
  bool bVar5;
  HGDIOBJ *ppvVar6;
  tagRECT local_6c;
  HGDIOBJ local_5c [4];
  short local_4c;
  tagRECT local_48;
  int local_38;
  LPCSTR local_34;
  tagRECT local_30;
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  short local_10;
  short local_c;
  short sStack_a;
  undefined4 local_8;
  
  psVar1 = (short *)*param_1;
  if ((*psVar1 < psVar1[2]) && (psVar1[1] < psVar1[3])) {
    uVar2 = *(undefined4 *)(*(int *)((int)this + 0x3e) + 0xc2);
    local_20._2_2_ = (short)((uint)uVar2 >> 0x10);
    local_c = (short)*(undefined4 *)psVar1;
    sStack_a = (short)((uint)*(undefined4 *)psVar1 >> 0x10);
    local_8._0_2_ = (short)*(undefined4 *)(psVar1 + 2);
    local_8._2_2_ = (short)((uint)*(undefined4 *)(psVar1 + 2) >> 0x10);
    _local_c = CONCAT22(sStack_a + local_20._2_2_,local_c + (short)uVar2);
    local_8 = (HGDIOBJ)CONCAT22(local_8._2_2_ + local_20._2_2_,(short)local_8 + (short)uVar2);
    local_20 = uVar2;
    if ((*(void **)((int)this + 0x48) == (void *)0x0) || (*(char *)((int)this + 0x6c) != '\0')) {
      local_1c = DAT_004da338;
      local_18 = DAT_004da334;
      local_10 = 0;
    }
    else {
      FUN_0048bea0(*(void **)((int)this + 0x48),&local_1c);
    }
    if (DAT_004db888 != '\0') {
      local_18 = local_1c;
    }
    FUN_0043c8a0();
    FUN_0043c8b0();
    hMem = (HGLOBAL)FUN_00445fa0(*(void **)((int)this + 0x3e));
    local_34 = GlobalLock(hMem);
    local_38 = FUN_00445fe0(*(void **)((int)this + 0x3e));
    local_4c = 0;
    local_5c[0] = (HGDIOBJ)0x0;
    iVar3 = (**(code **)(**(int **)((int)this + 0x3e) + 0x41c))();
    if (iVar3 != 0) {
      ppvVar6 = local_5c;
      this_00 = (void *)(**(code **)(**(int **)((int)this + 0x3e) + 0x41c))();
      FUN_004390e0(this_00,ppvVar6);
    }
    if (local_5c[0] == (HGDIOBJ)0x0) {
      local_5c[0] = DAT_004dae34;
    }
    local_20 = GetBkMode(DAT_004da398);
    SetTextColor(DAT_004da398,
                 (local_18 >> 8 & 0xff) << 8 | (local_18 & 0xff) << 0x10 | local_18 >> 0x10 & 0xff);
    local_48.left = (LONG)local_c;
    local_48.top = (LONG)sStack_a;
    local_48.right = (LONG)(short)local_8;
    local_48.bottom = (LONG)local_8._2_2_;
    psVar1 = (short *)*param_1;
    local_30.left = (LONG)*psVar1;
    local_30.top = (LONG)psVar1[1];
    local_30.right = (LONG)psVar1[2];
    local_30.bottom = (LONG)psVar1[3];
    if (*(HRGN *)((int)param_1 + 0x1a) != (HRGN)0x0) {
      GetRgnBox(*(HRGN *)((int)param_1 + 0x1a),&local_30);
    }
    if ((local_10 == 0x24) || (local_10 == 0x224)) {
      SetBkMode(DAT_004da398,1);
    }
    else {
      hbr = CreateSolidBrush((local_1c >> 8 & 0xff) << 8 | (local_1c & 0xff) << 0x10 |
                             local_1c >> 0x10 & 0xff);
      FillRect(DAT_004da398,&local_30,hbr);
      DeleteObject(hbr);
      SetBkMode(DAT_004da398,2);
      SetBkColor(DAT_004da398,
                 (local_1c >> 8 & 0xff) << 8 | (local_1c & 0xff) << 0x10 | local_1c >> 0x10 & 0xff);
    }
    local_8 = SelectObject(DAT_004da398,local_5c[0]);
    bVar4 = local_4c == 1;
    bVar5 = local_4c == -1;
    if (local_48.bottom < local_30.bottom) {
      local_48.bottom = local_30.bottom;
    }
    GetClipBox(DAT_004da398,&local_6c);
    hrgn = CreateRectRgn(local_6c.left,local_6c.top,local_6c.right,local_6c.bottom);
    IntersectClipRect(DAT_004da398,local_30.left,local_30.top,local_30.right,local_30.bottom);
    DrawTextA(DAT_004da398,local_34,local_38,&local_48,(uint)bVar4 | -(uint)bVar5 & 2 | 0x850);
    SelectClipRgn(DAT_004da398,hrgn);
    DeleteObject(hrgn);
    GlobalUnlock(hMem);
    SelectObject(DAT_004da398,local_8);
    SetBkMode(DAT_004da398,local_20);
    FUN_0043c8a0();
    FUN_0043c8b0();
  }
  return;
}


