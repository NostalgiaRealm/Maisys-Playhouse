
/* ==== FUN_10004640 @ 10004640 ==== 
 * signature: undefined4 __cdecl FUN_10004640(int param_1, int param_2, double * param_3, double * param_4)
 * body: 10004640-1000469f
 */

undefined4 __cdecl FUN_10004640(int param_1,int param_2,double *param_3,double *param_4)

{
  HDC hdc;
  int iVar1;
  int iVar2;
  
  hdc = GetDC((HWND)0x0);
  if (hdc == (HDC)0x0) {
    return 0;
  }
  iVar1 = GetDeviceCaps(hdc,0x58);
  iVar2 = GetDeviceCaps(hdc,0x5a);
  *param_3 = (double)param_1 / (double)iVar1;
  *param_4 = (double)param_2 / (double)iVar2;
  ReleaseDC((HWND)0x0,hdc);
  return 1;
}


