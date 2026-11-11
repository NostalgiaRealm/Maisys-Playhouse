
/* ==== FUN_0047a140 @ 0047a140 ==== 
 * signature: undefined __fastcall FUN_0047a140(undefined4 * param_1)
 * body: 0047a140-0047a209
 */

void __fastcall FUN_0047a140(undefined4 *param_1)

{
  HPALETTE hPal;
  undefined4 *unaff_FS_OFFSET;
  BOOL bForceBkgd;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_0047a20a;
  *param_1 = &PTR_FUN_004be078;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  FUN_0047a720((int)param_1);
  if (param_1[0x339] != 0) {
    FUN_004396a0(&DAT_004e1c58,param_1[0x33a],'\0');
  }
  if (param_1[0x33c] != 0) {
    if (DAT_004da398 != (HDC)0x0) {
      bForceBkgd = 0;
      hPal = GetStockObject(0xf);
      SelectPalette(DAT_004da398,hPal,bForceBkgd);
    }
    FUN_004396a0(&DAT_004e1c58,param_1[0x33c],'\0');
  }
  if ((LPVOID)param_1[0x33d] != (LPVOID)0x0) {
    FUN_00434950((LPVOID)param_1[0x33d]);
  }
  local_8 = 0xffffffff;
  param_1[0x33d] = 0;
  FUN_0047a214();
  *unaff_FS_OFFSET = local_10;
  return;
}


