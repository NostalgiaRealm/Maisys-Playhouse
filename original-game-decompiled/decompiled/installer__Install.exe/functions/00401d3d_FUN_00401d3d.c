
/* ==== FUN_00401d3d @ 00401d3d ==== 
 * signature: undefined __cdecl FUN_00401d3d(uint param_1, uint * param_2, uint * param_3)
 * body: 00401d3d-00401d88
 */

void __cdecl FUN_00401d3d(uint param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  
  uVar1 = *param_3;
  while (uVar1 < param_1) {
    if (DAT_0040437c < DAT_00404380) {
      uVar1 = (uint)*(byte *)(DAT_0040437c + DAT_00404398);
      DAT_0040437c = DAT_0040437c + 1;
    }
    else {
      uVar1 = FUN_00401e38();
    }
    *param_2 = *param_2 | (uVar1 & 0xff) << ((byte)*param_3 & 0x1f);
    *param_3 = *param_3 + 8;
    uVar1 = *param_3;
  }
  return;
}


