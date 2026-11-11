
/* ==== FUN_10008ae1 @ 10008ae1 ==== 
 * signature: undefined __cdecl FUN_10008ae1(HDC param_1, short * param_2, uint param_3, uint param_4, ushort param_5, ushort param_6, int param_7, int param_8, uint param_9, COLORREF param_10, int * param_11, int * param_12)
 * body: 10008ae1-10008de6
 */

void __cdecl
FUN_10008ae1(HDC param_1,short *param_2,uint param_3,uint param_4,ushort param_5,ushort param_6,
            int param_7,int param_8,uint param_9,COLORREF param_10,int *param_11,int *param_12)

{
  short *psVar1;
  HBRUSH hbr;
  short *psVar2;
  uint uVar3;
  int iVar4;
  HPEN h;
  HPEN h_00;
  HGDIOBJ h_01;
  int iVar5;
  int iVar6;
  RECT local_1c;
  void *local_c;
  uint local_8;
  
  psVar1 = param_2;
  FUN_10011f09((int)(param_2 + 5),param_1,&DAT_10023f28);
  local_8 = GetDialogBaseUnits();
  iVar5 = 0;
  iVar6 = 0;
  local_c = (void *)(*(int *)(param_2 + 2) + 10 + (int)param_2);
  if (param_9 == 0) {
    if ((param_12 == (int *)0x0) || (param_7 != 0)) {
      psVar2 = (short *)((int)((local_8 & 0xffff) * (uint)param_5) / 4);
      uVar3 = (int)((local_8 >> 0x10) * (uint)param_6) / 8;
      param_2 = psVar2;
      param_9 = uVar3;
      if (param_7 != 0) {
        param_2 = (short *)(((ulonglong)param_5 << 3) / 4);
        param_9 = (uint)(((ulonglong)param_6 << 4) / 8);
        iVar5 = ((int)psVar2 - (int)param_2) / 2;
        iVar6 = (int)(uVar3 - param_9) / 2;
      }
    }
    else {
      iVar5 = *param_12;
      iVar6 = param_12[1];
      param_4 = 0;
      param_3 = 0;
      param_2 = (short *)(param_12[2] - iVar5);
      param_9 = param_12[3] - iVar6;
    }
  }
  else {
    param_2 = (short *)(uint)param_5;
    param_9 = (uint)param_6;
    if (param_7 != 0) {
      iVar5 = ((int)((local_8 & 0xffff) * (int)param_2) / 8 - (int)param_2) / 2;
      iVar6 = (int)((int)((local_8 >> 0x10) * param_9) / 0x10 - param_9) / 2;
    }
    local_1c.top = (int)((local_8 >> 0x10) * (param_4 & 0xffff)) / 8;
    local_1c.left = (int)((param_3 & 0xffff) * (local_8 & 0xffff)) / 4;
    local_1c.bottom = local_1c.top + iVar6 * 2 + param_9;
    local_1c.right = local_1c.left + iVar5 * 2 + (int)param_2;
    if (param_11 != (int *)0x0) {
      param_11[2] = local_1c.right;
      param_11[1] = local_1c.top;
      *param_11 = local_1c.left;
      param_11[3] = local_1c.bottom;
    }
    if ((iVar5 != 0) || (iVar6 != 0)) {
      hbr = CreateSolidBrush(param_10);
      FillRect(param_1,&local_1c,hbr);
      DeleteObject(hbr);
    }
  }
  if (param_12 == (int *)0x0) {
    _param_5 = (*psVar1 * 3) / 100;
    if (_param_5 < 3) {
      _param_5 = 3;
    }
    iVar4 = FUN_10016580((int)param_2 - (int)*psVar1);
    if (iVar4 <= _param_5) {
      param_2 = (short *)(int)*psVar1;
    }
    _param_5 = (psVar1[1] * 3) / 100;
    if (_param_5 < 3) {
      _param_5 = 3;
    }
    iVar4 = FUN_10016580(param_9 - (int)psVar1[1]);
    if (iVar4 <= _param_5) {
      param_9 = (uint)psVar1[1];
    }
  }
  StretchDIBits(param_1,(int)((param_3 & 0xffff) * (local_8 & 0xffff)) / 4 + iVar5,
                (int)((local_8 >> 0x10) * (param_4 & 0xffff)) / 8 + iVar6,(int)param_2,param_9,0,0,
                (int)*psVar1,(int)psVar1[1],local_c,(BITMAPINFO *)(psVar1 + 5),0,0xcc0020);
  if (param_8 != 0) {
    h = CreatePen(0,1,0xffffff);
    h_00 = CreatePen(0,1,0x808080);
    h_01 = SelectObject(param_1,h);
    MoveToEx(param_1,local_1c.right + -1,local_1c.top,(LPPOINT)0x0);
    LineTo(param_1,local_1c.right + -1,local_1c.bottom + -1);
    LineTo(param_1,local_1c.left,local_1c.bottom + -1);
    SelectObject(param_1,h_00);
    LineTo(param_1,local_1c.left,local_1c.top);
    LineTo(param_1,local_1c.right,local_1c.top);
    SelectObject(param_1,h_01);
    DeleteObject(h);
    DeleteObject(h_00);
  }
  return;
}


