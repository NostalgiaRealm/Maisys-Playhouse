
/* ==== FUN_004ad7fc @ 004ad7fc ==== 
 * signature: undefined __fastcall FUN_004ad7fc(int param_1)
 * body: 004ad7fc-004ad858
 */

void __fastcall FUN_004ad7fc(int param_1)

{
  int iVar1;
  HDC hdc;
  
  iVar1 = GetSystemMetrics(0xb);
  *(int *)(param_1 + 8) = iVar1;
  iVar1 = GetSystemMetrics(0xc);
  *(int *)(param_1 + 0xc) = iVar1;
  if (*(int *)(param_1 + 0x88) == 0) {
    FUN_004bc619();
  }
  else {
    FUN_004bc5e9();
  }
  hdc = GetDC((HWND)0x0);
  iVar1 = GetDeviceCaps(hdc,0x58);
  *(int *)(param_1 + 0x18) = iVar1;
  iVar1 = GetDeviceCaps(hdc,0x5a);
  *(int *)(param_1 + 0x1c) = iVar1;
  ReleaseDC((HWND)0x0,hdc);
  return;
}


