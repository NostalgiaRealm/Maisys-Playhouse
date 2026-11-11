
/* ==== FUN_11009840 @ 11009840 ==== 
 * signature: undefined __cdecl FUN_11009840(byte * param_1, byte * param_2, int param_3, int param_4)
 * body: 11009840-110098dd
 */

void __cdecl FUN_11009840(byte *param_1,byte *param_2,int param_3,int param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  uint local_8;
  
  iVar4 = *(int *)(param_4 + 0x14);
  iVar5 = *(int *)(param_4 + 0x28);
  for (; param_3 != 0; param_3 = param_3 + -1) {
    bVar3 = *(byte *)(iVar5 + 2 + (uint)*param_1 * 4);
    pbVar1 = (byte *)(iVar5 + (uint)*param_1 * 4);
    pbVar2 = (byte *)(iVar5 + (uint)*param_2 * 4);
    bVar6 = *(byte *)(iVar5 + 2 + (uint)*param_2 * 4);
    if (bVar3 <= bVar6) {
      bVar6 = bVar3;
    }
    bVar3 = pbVar1[1];
    bVar7 = pbVar2[1];
    if (bVar3 <= bVar7) {
      bVar7 = bVar3;
    }
    bVar3 = *pbVar1;
    local_8 = (uint)(bVar7 >> 4);
    bVar7 = *pbVar2;
    if (bVar3 <= bVar7) {
      bVar7 = bVar3;
    }
    param_1 = param_1 + 1;
    *param_2 = *(byte *)((((uint)(bVar6 >> 4) << 4 | local_8) << 4 | (uint)(bVar7 >> 4)) + iVar4);
    param_2 = param_2 + 1;
  }
  return;
}


