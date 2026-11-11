
/* ==== FUN_00488980 @ 00488980 ==== 
 * signature: undefined __fastcall FUN_00488980(CWnd * param_1)
 * body: 00488980-00488a4d
 */

void __fastcall FUN_00488980(CWnd *param_1)

{
  short sVar1;
  HWND hWnd;
  HDC hdc;
  tagPOINT local_1c;
  int local_10;
  
  if (DAT_004da398 == (HDC)0x0) goto LAB_004889c4;
  if (param_1 == (CWnd *)0x0) {
    if (DAT_004da39c != 0) {
LAB_004889ad:
      (**(code **)(*(int *)param_1 + 0x110))();
    }
  }
  else if (*(int *)(param_1 + 0x1c) != DAT_004da39c) goto LAB_004889ad;
  if (DAT_004da398 != (HDC)0x0) {
    return;
  }
LAB_004889c4:
  hWnd = (HWND)0x0;
  if (param_1 != (CWnd *)0x0) {
    hWnd = *(HWND *)(param_1 + 0x1c);
  }
  hdc = GetDC(hWnd);
  GetViewportOrgEx(hdc,&local_1c);
  sVar1 = *(short *)(param_1 + 0x44);
  if (sVar1 < *(short *)(param_1 + 0x48)) {
    if (*(short *)(param_1 + 0x46) < *(short *)(param_1 + 0x4a)) {
      local_10 = (int)*(short *)(param_1 + 0x46);
      CWnd::MoveWindow(param_1,(int)sVar1,local_10,(int)*(short *)(param_1 + 0x48) - (int)sVar1,
                       *(short *)(param_1 + 0x4a) - local_10,1);
    }
  }
  DAT_004da398 = hdc;
  if (param_1 != (CWnd *)0x0) {
    DAT_004da39c = *(undefined4 *)(param_1 + 0x1c);
    return;
  }
  DAT_004da39c = 0;
  return;
}


