
/* ==== FUN_110097a0 @ 110097a0 ==== 
 * signature: undefined __cdecl FUN_110097a0(byte * param_1, byte * param_2, int param_3, int param_4)
 * body: 110097a0-1100983d
 */

void __cdecl FUN_110097a0(byte *param_1,byte *param_2,int param_3,int param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint local_8;
  
  iVar3 = *(int *)(param_4 + 0x14);
  iVar4 = *(int *)(param_4 + 0x28);
  for (; param_3 != 0; param_3 = param_3 + -1) {
    bVar5 = *(byte *)(iVar4 + 2 + (uint)*param_1 * 4);
    pbVar1 = (byte *)(iVar4 + (uint)*param_1 * 4);
    bVar6 = *(byte *)(iVar4 + 2 + (uint)*param_2 * 4);
    pbVar2 = (byte *)(iVar4 + (uint)*param_2 * 4);
    if (bVar6 <= bVar5) {
      bVar6 = bVar5;
    }
    bVar5 = pbVar1[1];
    bVar7 = pbVar2[1];
    if (bVar7 <= bVar5) {
      bVar7 = bVar5;
    }
    bVar5 = *pbVar2;
    local_8 = (uint)(bVar7 >> 4);
    bVar7 = *pbVar1;
    if (bVar5 <= bVar7) {
      bVar5 = bVar7;
    }
    param_1 = param_1 + 1;
    *param_2 = *(byte *)((((uint)(bVar6 >> 4) << 4 | local_8) << 4 | (uint)(bVar5 >> 4)) + iVar3);
    param_2 = param_2 + 1;
  }
  return;
}


