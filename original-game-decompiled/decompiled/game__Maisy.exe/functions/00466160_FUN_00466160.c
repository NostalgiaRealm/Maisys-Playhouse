
/* ==== FUN_00466160 @ 00466160 ==== 
 * signature: undefined __cdecl FUN_00466160(byte * param_1, byte * param_2, int param_3, int param_4)
 * body: 00466160-00466214
 */

void __cdecl FUN_00466160(byte *param_1,byte *param_2,int param_3,int param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  iVar4 = *(int *)(param_4 + 0x14);
  iVar5 = *(int *)(param_4 + 0x28);
  uVar7 = (uint)*(byte *)(param_4 + 0x1e);
  iVar6 = 0x100 - uVar7;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    bVar3 = *param_1;
    param_1 = param_1 + 1;
    pbVar1 = (byte *)(iVar5 + (uint)bVar3 * 4);
    pbVar2 = (byte *)(iVar5 + (uint)*param_2 * 4);
    *param_2 = *(byte *)(((int)((int)((uint)pbVar2[1] * iVar6 + pbVar1[1] * uVar7 & 0xf000 |
                                     (int)(*pbVar1 * uVar7 + (uint)*pbVar2 * iVar6) >> 4) >> 4 |
                               (uint)pbVar2[2] * iVar6 + pbVar1[2] * uVar7 & 0xf000) >> 4) + iVar4);
    param_2 = param_2 + 1;
  }
  return;
}


