
/* ==== FUN_004091e7 @ 004091e7 ==== 
 * signature: undefined __stdcall FUN_004091e7(void)
 * body: 004091e7-00409306
 */

void FUN_004091e7(void)

{
  HDC hdc;
  UINT UVar1;
  uint iCharSet;
  int iVar2;
  int nDenominator;
  int cWidth;
  int cEscapement;
  int cOrientation;
  int cWeight;
  DWORD bItalic;
  DWORD bUnderline;
  DWORD bStrikeOut;
  DWORD iOutPrecision;
  DWORD iClipPrecision;
  DWORD iQuality;
  DWORD iPitchAndFamily;
  char *pszFaceName;
  char local_108 [256];
  HDC local_8;
  
  local_8 = GetDC(DAT_00413820);
  GetPrivateProfileStringA
            (s_Settings_00410178,s_Text_Font_00410794,&DAT_00413420,local_108,0x100,DAT_00413bf4);
  if (local_108[0] != '\0') {
    DAT_00413824 = (LPSTR)FUN_004098e3(0x100);
    lstrcpyA(DAT_00413824,local_108);
  }
  GetPrivateProfileStringA
            (s_Settings_00410178,s_Title_Font_00410778,s_Times_New_Roman_00410784,local_108,0x100,
             DAT_00413bf4);
  UVar1 = GetPrivateProfileIntA(s_Settings_00410178,s_Font_Character_Set_00410764,0,DAT_00413bf4);
  DAT_00413854 = (byte)UVar1;
  UVar1 = GetPrivateProfileIntA(s_Settings_00410178,s_Font_Character_Size_00410750,8,DAT_00413bf4);
  hdc = local_8;
  pszFaceName = local_108;
  iPitchAndFamily = 0x10;
  iCharSet = (uint)DAT_00413854;
  iQuality = 0;
  iClipPrecision = 0;
  iOutPrecision = 0;
  bStrikeOut = 0;
  bUnderline = 0;
  bItalic = 1;
  cWeight = 700;
  cOrientation = 0;
  cEscapement = 0;
  cWidth = 0;
  nDenominator = 0x48;
  DAT_004138a0 = (char)UVar1;
  iVar2 = GetDeviceCaps(local_8,0x5a);
  iVar2 = MulDiv(0x10,iVar2,nDenominator);
  DAT_00413888 = CreateFontA(-iVar2,cWidth,cEscapement,cOrientation,cWeight,bItalic,bUnderline,
                             bStrikeOut,iCharSet,iOutPrecision,iClipPrecision,iQuality,
                             iPitchAndFamily,pszFaceName);
  GetDeviceCaps(hdc,0xc);
  GetDeviceCaps(hdc,0xe);
  DAT_004138f4 = GetDeviceCaps(hdc,8);
  DAT_004138f8 = GetDeviceCaps(hdc,10);
  return;
}


