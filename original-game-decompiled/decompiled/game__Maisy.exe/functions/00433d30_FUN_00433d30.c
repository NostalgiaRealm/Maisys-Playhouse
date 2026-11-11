
/* ==== FUN_00433d30 @ 00433d30 ==== 
 * signature: undefined __cdecl FUN_00433d30(undefined4 * param_1, uint param_2)
 * body: 00433d30-00433ec4
 */

void __cdecl FUN_00433d30(undefined4 *param_1,uint param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = (param_2 & 0x1fffffff) << 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x40] = FUN_00433940;
  param_1[0x52] = FUN_004339d0;
  param_1[2] = FUN_00433870;
  param_1[4] = FUN_00433610;
  param_1[6] = FUN_004336c0;
  param_1[8] = FUN_00433590;
  param_1[10] = FUN_004335c0;
  param_1[0xe] = FUN_00433720;
  param_1[0x10] = FUN_00433740;
  param_1[0x44] = FUN_00433760;
  param_1[0x12] = FUN_00433770;
  param_1[0x14] = FUN_00433780;
  param_1[0x16] = FUN_00433790;
  param_1[0x1a] = FUN_004337a0;
  param_1[0x1c] = FUN_004337b0;
  param_1[0x22] = FUN_004337c0;
  param_1[0x24] = FUN_004337d0;
  param_1[0x26] = FUN_004337e0;
  param_1[0x34] = FUN_004337f0;
  param_1[0x36] = FUN_00433800;
  param_1[0x38] = FUN_00433810;
  param_1[0x3a] = FUN_00433820;
  param_1[0x4c] = FUN_00433840;
  param_1[0x4e] = FUN_00433850;
  param_1[0x32] = FUN_00433860;
  param_1[0x28] = FUN_00433a80;
  param_1[0x2a] = FUN_00433ae0;
  param_1[0x2c] = FUN_00433b50;
  param_1[0x2e] = FUN_00433b40;
  param_1[0x42] = FUN_004334c0;
  param_1[0x5c] = FUN_00433b60;
  param_1[0x46] = FUN_00433b70;
  param_1[0x50] = FUN_00433b80;
  param_1[0x48] = FUN_00433830;
  param_1[0x4a] = FUN_00433b90;
  param_1[0x54] = FUN_00433ba0;
  param_1[0x60] = FUN_00433bc0;
  param_1[0x56] = FUN_00433c00;
  *param_1 = FUN_004338d0;
  param_1[0x58] = FUN_00433c50;
  param_1[0x5a] = FUN_00433cc0;
  param_1[0x5e] = FUN_00433960;
  return;
}


