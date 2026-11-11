
/* ==== FUN_0043c730 @ 0043c730 ==== 
 * signature: undefined __cdecl FUN_0043c730(short * param_1)
 * body: 0043c730-0043c812
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0043c730(short *param_1)

{
  BOOL BVar1;
  tagRECT local_40;
  tagRECT local_30;
  tagMSG local_20;
  
  BVar1 = PeekMessageA(&local_20,(HWND)0x0,0x200,0x200,1);
  if (BVar1 != 0) {
    *param_1 = (short)local_20.lParam;
    param_1[1] = (short)((uint)local_20.lParam >> 0x10);
    if ((DAT_004da39c != (HWND)0x0) && (DAT_004da39c != local_20.hwnd)) {
      if ((DAT_004dc1c0 == 0) || (*(HWND *)(DAT_004dc1c0 + 0x1c) != local_20.hwnd)) {
        GetWindowRect(local_20.hwnd,&local_40);
        GetWindowRect(DAT_004da39c,&local_30);
      }
      else {
        local_40.top._0_2_ = 0;
        local_40.left._0_2_ = 0;
        local_20.pt.x._0_2_ = (short)*(undefined4 *)(DAT_004dcf78 + 0x44);
        local_30.left._0_2_ = (short)local_20.pt.x;
        local_20.pt.x._2_2_ = (short)((uint)*(undefined4 *)(DAT_004dcf78 + 0x44) >> 0x10);
        local_30.top._0_2_ = local_20.pt.x._2_2_;
      }
      *param_1 = *param_1 + ((short)local_40.left - (short)local_30.left);
      param_1[1] = param_1[1] + ((short)local_40.top - (short)local_30.top);
    }
    _DAT_004db500 = *(undefined4 *)param_1;
    *(undefined4 *)param_1 = _DAT_004db500;
    return;
  }
  *(undefined4 *)param_1 = _DAT_004db500;
  return;
}


