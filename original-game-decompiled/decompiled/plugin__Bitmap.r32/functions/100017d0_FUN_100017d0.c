
/* ==== FUN_100017d0 @ 100017d0 ==== 
 * signature: undefined __cdecl FUN_100017d0(int param_1, int param_2, int param_3, int param_4, int param_5)
 * body: 100017d0-100018d3
 */

void __cdecl FUN_100017d0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  HWND pHVar1;
  HDC hdc;
  int iVar2;
  HGDIOBJ h;
  undefined4 *puVar3;
  HDC hdc_00;
  UINT uCmd;
  undefined4 local_c;
  
  hdc_00 = (HDC)0x0;
  uCmd = 5;
  local_c = (HBITMAP)0x0;
  pHVar1 = GetActiveWindow();
  pHVar1 = GetWindow(pHVar1,uCmd);
  hdc = GetDC(pHVar1);
  if (hdc != (HDC)0x0) {
    iVar2 = GetDeviceCaps(hdc,0xc);
    local_c = FUN_100065a0(hdc,param_4 - param_2,param_5 - param_3,iVar2,(undefined4 *)0x0);
    if (local_c != (HBITMAP)0x0) {
      hdc_00 = CreateCompatibleDC(hdc);
      if (hdc_00 != (HDC)0x0) {
        h = SelectObject(hdc_00,local_c);
        BitBlt(hdc_00,0,0,param_4 - param_2,param_5 - param_3,hdc,param_2,param_3,0xcc0020);
        SelectObject(hdc_00,h);
        puVar3 = FUN_100066d0(hdc,local_c);
        if (puVar3 != (undefined4 *)0x0) {
          FUN_10001920(param_1,puVar3);
          FUN_10006570(puVar3);
        }
      }
    }
    if (hdc != (HDC)0x0) {
      ReleaseDC(pHVar1,hdc);
    }
  }
  if (hdc_00 != (HDC)0x0) {
    DeleteObject(hdc_00);
  }
  if (local_c != (HBITMAP)0x0) {
    DeleteObject(local_c);
  }
  return;
}


