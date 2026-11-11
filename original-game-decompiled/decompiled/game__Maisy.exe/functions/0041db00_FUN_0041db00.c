
/* ==== FUN_0041db00 @ 0041db00 ==== 
 * signature: uint __cdecl FUN_0041db00(void * param_1, short * param_2, undefined1 * param_3, HRGN param_4)
 * body: 0041db00-0041dba9
 */

uint __cdecl FUN_0041db00(void *param_1,short *param_2,undefined1 *param_3,HRGN param_4)

{
  HBRUSH hbr;
  uint uVar1;
  undefined4 local_44c [3];
  ushort local_43e;
  RECT local_18;
  HDC local_8;
  
  FUN_0047a8c0(param_1,&local_8,local_44c);
  local_18.top = (LONG)param_2[1];
  local_18.bottom = (LONG)param_2[3];
  local_18.left = (LONG)*param_2;
  local_18.right = (LONG)param_2[2];
  uVar1 = (uint)local_43e;
  if (local_8 != (HDC)0x0) {
    hbr = CreateSolidBrush((uint)CONCAT12(*param_3,CONCAT11(param_3[1],param_3[2])));
    uVar1 = 0;
    if (hbr != (HBRUSH)0x0) {
      if (param_4 == (HRGN)0x0) {
        FillRect(local_8,&local_18,hbr);
      }
      else {
        FillRgn(local_8,param_4,hbr);
      }
      DeleteObject(hbr);
      uVar1 = GdiFlush();
    }
  }
  return uVar1;
}


