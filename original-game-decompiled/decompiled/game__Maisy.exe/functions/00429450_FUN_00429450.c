
/* ==== FUN_00429450 @ 00429450 ==== 
 * signature: undefined __stdcall FUN_00429450(void)
 * body: 00429450-004294d4;004294dd-00429528;00429531-004295fe
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00429450(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00429619;
  *unaff_FS_OFFSET = &local_10;
  DAT_004e01e0 = 0;
  _DAT_004e01e4 = 0;
  _DAT_004e01e8 = 0;
  _DAT_004e01ec = 0;
  DAT_004e0208 = 1;
  DAT_004e020a = 0x1e00280;
  FUN_00439810();
  puVar1 = FUN_00412c20(0x38);
  local_8 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_00412c90(puVar1,0);
    *puVar1 = &PTR_FUN_004c6e20;
  }
  local_8 = 0xffffffff;
  DAT_004da380 = puVar1;
  FUN_0041eed0(puVar1);
  puVar1 = FUN_00412c20(0x1136);
  local_8 = 2;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_00412c90(puVar1,0);
    *puVar1 = &PTR_FUN_004be078;
  }
  local_8 = 0xffffffff;
  DAT_004da388 = puVar1;
  FUN_0047a0a0(puVar1,0,DAT_004e020a,0);
  DAT_004e0200 = 0x3e9;
  _DAT_004e01f4 = 8;
  DAT_004e0204 = 0xe6;
  _DAT_004e01f6 = 8;
  DAT_004e01f0 = DAT_004e01f0 | 1;
  puVar1 = FUN_00412c20(0xce);
  local_8 = 4;
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_00410970(puVar1);
  }
  local_8 = 0xffffffff;
  DAT_004e01f8 = 0;
  DAT_004e01f9 = 0;
  DAT_004da390 = puVar2;
  FUN_0048a1d0();
  *unaff_FS_OFFSET = local_10;
  return;
}


