
/* ==== FUN_0047b420 @ 0047b420 ==== 
 * signature: undefined __fastcall FUN_0047b420(int param_1)
 * body: 0047b420-0047b49c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0047b420(int param_1)

{
  GdiFlush();
  DAT_004da398 = *(undefined4 *)(param_1 + 0xcdc);
  *(undefined4 *)(param_1 + 0xcdc) = 0;
  *(byte *)(param_1 + 0x1134) = *(byte *)(param_1 + 0x1134) & 0xfe;
  _DAT_004e1c48 = 0;
  DAT_004e1c30 = 0;
  DAT_004e1c4a = 0;
  DAT_004e1c34 = 0;
  _DAT_004e1c38 = 0;
  _DAT_004e1c3c = 0;
  _DAT_004e1c4c = 0;
  _DAT_004e1c50 = 0;
  if (((*(byte *)(param_1 + 0x1134) & 4) != 0) && (*(int *)(param_1 + 0x468) != 0)) {
    FUN_0047a720(param_1);
    *(undefined4 *)(param_1 + 0x468) = 0;
    *(undefined4 *)(param_1 + 0x898) = 0;
  }
  return;
}


