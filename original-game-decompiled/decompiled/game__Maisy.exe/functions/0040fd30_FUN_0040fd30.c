
/* ==== FUN_0040fd30 @ 0040fd30 ==== 
 * signature: undefined __stdcall FUN_0040fd30(void)
 * body: 0040fd30-0040feb0
 */

void FUN_0040fd30(void)

{
  MCIERROR MVar1;
  undefined4 local_20;
  undefined4 local_1c;
  char *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_18 = s_avivideo_004d9abc;
  local_20 = 0;
  local_1c = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  DAT_004d99b8 = 1;
  MVar1 = mciSendCommandA(0,0x803,0x2000,(DWORD_PTR)&local_20);
  if (MVar1 != 0) {
    DAT_004d99b8 = 0;
    return;
  }
  DAT_004d99bc = LoadLibraryA(s_MSVFW32_DLL_004d9ab0);
  if (DAT_004d99bc == (HMODULE)0x0) {
    DAT_004d99b8 = 0;
    return;
  }
  DAT_004e01bc = GetProcAddress(DAT_004d99bc,s_MCIWndCreateA_004d9aa0);
  DAT_004e01c8 = GetProcAddress(DAT_004d99bc,s_DrawDibGetPalette_004d9a8c);
  DAT_004e01b0 = GetProcAddress(DAT_004d99bc,s_DrawDibChangePalette_004d9a74);
  DAT_004e01b8 = GetProcAddress(DAT_004d99bc,s_DrawDibOpen_004d9a68);
  DAT_004e01ac = GetProcAddress(DAT_004d99bc,s_DrawDibBegin_004d9a58);
  DAT_004e01c0 = GetProcAddress(DAT_004d99bc,s_DrawDibDraw_004d9a4c);
  DAT_004e00b8 = GetProcAddress(DAT_004d99bc,s_DrawDibClose_004d9a3c);
  DAT_004e01d0 = GetProcAddress(DAT_004d99bc,s_ICClose_004d9a34);
  DAT_004e01b4 = GetProcAddress(DAT_004d99bc,s_ICGetDisplayFormat_004d9a20);
  if ((((((DAT_004e01bc != (FARPROC)0x0) && (DAT_004e01c8 != (FARPROC)0x0)) &&
        (DAT_004e01b0 != (FARPROC)0x0)) &&
       ((DAT_004e01b8 != (FARPROC)0x0 && (DAT_004e01ac != (FARPROC)0x0)))) &&
      ((DAT_004e01c0 != (FARPROC)0x0 &&
       ((DAT_004e00b8 != (FARPROC)0x0 && (DAT_004e01d0 != (FARPROC)0x0)))))) &&
     (DAT_004e01b4 != (FARPROC)0x0)) {
    DAT_004d99c0 = FUN_004145e0;
    return;
  }
  DAT_004d99b8 = 0;
  return;
}


