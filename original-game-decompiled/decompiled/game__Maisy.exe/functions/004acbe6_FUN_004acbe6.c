
/* ==== FUN_004acbe6 @ 004acbe6 ==== 
 * signature: undefined __stdcall FUN_004acbe6(short param_1)
 * body: 004acbe6-004acc7e
 */

void FUN_004acbe6(short param_1)

{
  HANDLE h;
  int iVar1;
  HDC hdc;
  short sVar2;
  char *pcVar3;
  int local_44 [7];
  CHAR local_28 [32];
  void *local_8;
  
  sVar2 = 10;
  pcVar3 = "System";
  h = GetStockObject(0x11);
  if (h == (HGDIOBJ)0x0) {
    h = GetStockObject(0xd);
    if (h == (HGDIOBJ)0x0) goto LAB_004acc60;
  }
  iVar1 = GetObjectA(h,0x3c,local_44);
  if (iVar1 != 0) {
    pcVar3 = local_28;
    hdc = GetDC((HWND)0x0);
    if (local_44[0] < 0) {
      local_44[0] = -local_44[0];
    }
    iVar1 = GetDeviceCaps(hdc,0x5a);
    iVar1 = MulDiv(local_44[0],0x48,iVar1);
    ReleaseDC((HWND)0x0,hdc);
    sVar2 = (short)iVar1;
  }
LAB_004acc60:
  if (param_1 == 0) {
    param_1 = sVar2;
  }
  FUN_004acaa2(local_8,pcVar3,param_1);
  return;
}


