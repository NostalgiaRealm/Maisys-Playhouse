
/* ==== FUN_00465f80 @ 00465f80 ==== 
 * signature: undefined __cdecl FUN_00465f80(byte * param_1, byte * param_2, int param_3, int param_4)
 * body: 00465f80-00466016
 */

void __cdecl FUN_00465f80(byte *param_1,byte *param_2,int param_3,int param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  uint local_8;
  
  iVar3 = *(int *)(param_4 + 0x14);
  iVar4 = *(int *)(param_4 + 0x28);
  for (; param_3 != 0; param_3 = param_3 + -1) {
    pbVar1 = (byte *)(iVar4 + (uint)*param_1 * 4);
    pbVar2 = (byte *)(iVar4 + (uint)*param_2 * 4);
    bVar5 = pbVar2[2];
    if (pbVar2[2] <= pbVar1[2]) {
      bVar5 = pbVar1[2];
    }
    bVar6 = pbVar1[1];
    if (pbVar1[1] <= pbVar2[1]) {
      bVar6 = pbVar2[1];
    }
    local_8 = (uint)(bVar6 >> 4);
    bVar6 = *pbVar2;
    if (*pbVar2 <= *pbVar1) {
      bVar6 = *pbVar1;
    }
    param_1 = param_1 + 1;
    *param_2 = *(byte *)((((uint)(bVar5 >> 4) << 4 | local_8) << 4 | (uint)(bVar6 >> 4)) + iVar3);
    param_2 = param_2 + 1;
  }
  return;
}


