
/* ==== FUN_1100ab40 @ 1100ab40 ==== 
 * signature: uint __cdecl FUN_1100ab40(undefined4 param_1, short * param_2, int param_3)
 * body: 1100ab40-1100ab9f
 */

uint __cdecl FUN_1100ab40(undefined4 param_1,short *param_2,int param_3)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  
  sVar2 = *param_2;
  if (sVar2 == 1) {
    uVar3 = *(uint *)(param_3 + 0x10);
    *(uint *)(param_2 + 3) = uVar3;
    bVar1 = *(byte *)(param_2 + 1);
    *(undefined4 *)(param_2 + 5) = *(undefined4 *)(param_3 + 0x14);
    *(byte *)(param_2 + 1) = bVar1 & 0xfe;
    param_2[2] = 0;
    *(byte *)(param_2 + 1) = bVar1 & 0xfe | 2;
    return uVar3 & 0xffffff00;
  }
  if (sVar2 != 2) {
    return CONCAT31((int3)(char)((ushort)sVar2 >> 8),1);
  }
  uVar3 = *(uint *)(param_3 + 0x18);
  *(uint *)(param_2 + 3) = uVar3;
  bVar1 = *(byte *)(param_2 + 1);
  *(undefined4 *)(param_2 + 5) = *(undefined4 *)(param_3 + 0x1c);
  *(byte *)(param_2 + 1) = bVar1 & 0xfe;
  param_2[2] = 1;
  *(byte *)(param_2 + 1) = bVar1 & 0xfe | 2;
  return uVar3 & 0xffffff00;
}


