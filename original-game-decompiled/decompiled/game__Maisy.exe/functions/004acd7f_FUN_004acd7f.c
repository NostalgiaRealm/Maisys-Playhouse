
/* ==== FUN_004acd7f @ 004acd7f ==== 
 * signature: undefined __cdecl FUN_004acd7f(LPCSTR param_1, ushort param_2, int param_3, int param_4, int * param_5)
 * body: 004acd7f-004ace96
 */

void __cdecl FUN_004acd7f(LPCSTR param_1,ushort param_2,int param_3,int param_4,int *param_5)

{
  HDC hdc;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int nDenominator;
  tagTEXTMETRICA local_88;
  LOGFONTA local_50;
  tagSIZE local_14;
  HGDIOBJ local_c;
  HFONT local_8;
  
  hdc = GetDC((HWND)0x0);
  _memset(&local_50,0,0x3c);
  nDenominator = 0x48;
  iVar1 = GetDeviceCaps(hdc,0x5a);
  local_50.lfHeight = MulDiv((uint)param_2,iVar1,nDenominator);
  local_50.lfHeight = -local_50.lfHeight;
  local_50.lfCharSet = '\x01';
  local_50.lfWeight = (-(uint)(DAT_004e5204 == 0) & 0xfffffed4) + 700;
  lstrcpyA(local_50.lfFaceName,param_1);
  local_8 = CreateFontIndirectA(&local_50);
  if (local_8 == (HFONT)0x0) {
    uVar2 = GetDialogBaseUnits();
    uVar2 = uVar2 & 0xffff;
    uVar3 = GetDialogBaseUnits();
    uVar3 = uVar3 >> 0x10;
  }
  else {
    local_c = SelectObject(hdc,local_8);
    GetTextMetricsA(hdc,&local_88);
    uVar3 = local_88.tmExternalLeading + local_88.tmHeight;
    GetTextExtentPointA(hdc,"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz",0x34,&local_14);
    uVar2 = (local_14.cx + 0x1a) / 0x34;
    SelectObject(hdc,local_c);
    DeleteObject(local_8);
  }
  ReleaseDC((HWND)0x0,hdc);
  iVar1 = MulDiv(param_3,uVar2,4);
  *param_5 = iVar1;
  iVar1 = MulDiv(param_4,uVar3,8);
  param_5[1] = iVar1;
  return;
}


