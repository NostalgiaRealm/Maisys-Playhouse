
/* ==== FUN_1100aba0 @ 1100aba0 ==== 
 * signature: uint __cdecl FUN_1100aba0(undefined4 param_1, short * param_2, int param_3)
 * body: 1100aba0-1100abd9
 */

uint __cdecl FUN_1100aba0(undefined4 param_1,short *param_2,int param_3)

{
  short sVar1;
  uint uVar2;
  
  sVar1 = *param_2;
  if (sVar1 == 1) {
    uVar2 = *(uint *)(param_2 + 3);
    *(uint *)(param_3 + 0x10) = uVar2;
    *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)(param_2 + 5);
    return uVar2 & 0xffffff00;
  }
  if (sVar1 != 2) {
    return CONCAT31((int3)(char)((ushort)sVar1 >> 8),1);
  }
  uVar2 = *(uint *)(param_2 + 3);
  *(uint *)(param_3 + 0x18) = uVar2;
  *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(param_2 + 5);
  return uVar2 & 0xffffff00;
}


