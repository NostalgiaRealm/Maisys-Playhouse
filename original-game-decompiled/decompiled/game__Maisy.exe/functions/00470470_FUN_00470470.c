
/* ==== FUN_00470470 @ 00470470 ==== 
 * signature: undefined4 __fastcall FUN_00470470(int param_1)
 * body: 00470470-004704a7
 */

undefined4 __fastcall FUN_00470470(int param_1)

{
  HDC hdc;
  int iVar1;
  
  if (*(int *)(param_1 + 0xae) == 0) {
    hdc = GetDC((HWND)0x0);
    iVar1 = GetDeviceCaps(hdc,0xc);
    *(int *)(param_1 + 0xae) = iVar1;
    ReleaseDC((HWND)0x0,hdc);
  }
  return *(undefined4 *)(param_1 + 0xae);
}


