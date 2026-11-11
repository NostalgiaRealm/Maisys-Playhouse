
/* ==== FUN_110052e0 @ 110052e0 ==== 
 * signature: uint __cdecl FUN_110052e0(undefined4 * param_1, short * param_2, uint param_3)
 * body: 110052e0-11005328
 */

uint __cdecl FUN_110052e0(undefined4 *param_1,short *param_2,uint param_3)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  
  sVar1 = *param_2;
  if (sVar1 == 0) {
    param_2[1] = 1;
    return 0;
  }
  if (sVar1 != 1) {
    if (sVar1 != 2) {
      return CONCAT31((int3)(char)((ushort)sVar1 >> 8),1);
    }
    uVar2 = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)(param_3 + 0x28) = uVar2;
    uVar3 = FUN_11005d90(param_1,uVar2);
    return uVar3 & 0xffffff00;
  }
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_3 + 0x28);
  return param_3 & 0xffffff00;
}


