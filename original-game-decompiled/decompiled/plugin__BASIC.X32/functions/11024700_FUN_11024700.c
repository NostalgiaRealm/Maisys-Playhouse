
/* ==== FUN_11024700 @ 11024700 ==== 
 * signature: undefined __cdecl FUN_11024700(undefined4 * param_1, int param_2, int param_3)
 * body: 11024700-110247bd
 */

void __cdecl FUN_11024700(undefined4 *param_1,int param_2,int param_3)

{
  short *psVar1;
  HBRUSH hbr;
  HRGN hrgn;
  LOGBRUSH local_1c;
  RECT local_10;
  
  local_1c.lbStyle = 0;
  local_1c.lbHatch = 0;
  local_1c.lbColor =
       (uint)*(byte *)(param_2 + 0x29) << 8 | (uint)*(byte *)(param_2 + 0x28) << 0x10 |
       (uint)*(byte *)(param_2 + 0x2a);
  hbr = CreateBrushIndirect(&local_1c);
  if (*(short *)(param_2 + 0x22) == 1) {
    psVar1 = *(short **)(param_3 + 0xc);
    local_10.left = (LONG)*psVar1;
    local_10.top = (LONG)psVar1[1];
    local_10.right = (LONG)psVar1[2];
    local_10.bottom = (LONG)psVar1[3];
    FillRect(*(HDC *)((int)param_1 + 0x22),&local_10,hbr);
  }
  else {
    hrgn = FUN_11024340(param_1,*(short **)(param_3 + 4),param_2);
    if (hrgn != (HRGN)0x0) {
      FillRgn(*(HDC *)((int)param_1 + 0x22),hrgn,hbr);
      DeleteObject(hrgn);
    }
  }
  DeleteObject(hbr);
  return;
}


