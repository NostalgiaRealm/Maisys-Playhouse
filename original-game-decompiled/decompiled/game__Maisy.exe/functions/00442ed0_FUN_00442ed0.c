
/* ==== FUN_00442ed0 @ 00442ed0 ==== 
 * signature: uint __cdecl FUN_00442ed0(undefined4 param_1, undefined4 param_2, int param_3)
 * body: 00442ed0-00442f8c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_00442ed0(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  
  GetVersion();
  DAT_004db868 = 0;
  _DAT_004e0358 = 4;
  DAT_004db830 = 5;
  DAT_004db5a0 = 0;
  if (8 < param_3) {
    param_3 = 8;
  }
  _DAT_004db834 = 0;
  DAT_004db792 = param_3;
  if (0 < param_3) {
    puVar2 = &DAT_004db5a2;
    do {
      *puVar2 = 1;
      param_3 = param_3 + -1;
      puVar2[0x3d] = 1;
      *(undefined4 *)(puVar2 + 0x2a) = 1;
      *(undefined4 *)(puVar2 + 0x2e) = 1;
      *(undefined4 *)(puVar2 + 0x16) = 0;
      *(undefined4 *)(puVar2 + 0x1a) = 1;
      puVar2[0x3c] = 0;
      puVar2 = puVar2 + 0x3e;
    } while (param_3 != 0);
  }
  _DAT_004db796 = 0;
  DAT_004db860 = 0xffffffff;
  waveOutGetDevCapsA(0xffffffff,(LPWAVEOUTCAPSA)&DAT_004e0220,0x34);
  uVar1 = FUN_004448d0(DAT_004e0250,DAT_004e0248);
  return uVar1 & 0xffffff00;
}


