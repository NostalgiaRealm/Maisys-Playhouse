
/* ==== FUN_0040ef60 @ 0040ef60 ==== 
 * signature: undefined __fastcall FUN_0040ef60(undefined4 * param_1)
 * body: 0040ef60-0040f04a
 */

void __fastcall FUN_0040ef60(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_0040f04b;
  *param_1 = &PTR_FUN_004be200;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  if (DAT_004d99c4 != 0) {
    if (param_1[0x33] != 0) {
      FUN_0040ff40((int)param_1);
    }
    if (DAT_004da380 != 0) {
      FUN_0041f1c0(DAT_004da380);
    }
    FUN_00434700();
    FUN_0040fd10();
    FUN_0040fec0();
    FUN_004293a0();
    if ((LPVOID)param_1[0x30] != (LPVOID)0x0) {
      FUN_0043f6d0((LPVOID)param_1[0x30]);
    }
    FUN_004430b0();
    FUN_00434980();
    WritePrivateProfileStringA((LPCSTR)0x0,(LPCSTR)0x0,(LPCSTR)0x0,s_win_ini_004d99d4);
    WritePrivateProfileStringA
              (s_DrawDib_004d99c8,&DAT_004d99d0,(LPCSTR)((DAT_004e00c0 == '\0') - 1 & 0x4e00c0),
               s_win_ini_004d99d4);
  }
  local_8 = 0xffffffff;
  FUN_0040f055();
  *unaff_FS_OFFSET = local_10;
  return;
}


