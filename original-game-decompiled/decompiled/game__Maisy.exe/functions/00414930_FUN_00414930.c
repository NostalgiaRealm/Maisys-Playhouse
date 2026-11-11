
/* ==== FUN_00414930 @ 00414930 ==== 
 * signature: undefined4 __stdcall FUN_00414930(undefined4 * param_1, uint param_2)
 * body: 00414930-004149a9
 */

undefined4 FUN_00414930(undefined4 *param_1,uint param_2)

{
  if (param_1 == (undefined4 *)0x0) {
    return 0x238;
  }
  if (param_2 < 0x238) {
    return 0;
  }
  param_1[1] = 0x63646976;
  param_1[2] = 0x4152444d;
  *param_1 = 0x238;
  param_1[3] = 0x10;
  param_1[4] = 0x10000;
  param_1[5] = 0x104;
  _wcscpy((wchar_t *)(param_1 + 0xe),u_mFactory_Draw_Proc_004d9ce8);
  _wcscpy((wchar_t *)(param_1 + 6),u_mDraw_004d9d10);
  return 0x238;
}


