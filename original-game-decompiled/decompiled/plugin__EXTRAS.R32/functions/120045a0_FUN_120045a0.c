
/* ==== FUN_120045a0 @ 120045a0 ==== 
 * signature: undefined __fastcall FUN_120045a0(int * param_1)
 * body: 120045a0-12004645
 */

void __fastcall FUN_120045a0(int *param_1)

{
  uint *puVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  
  puVar1 = (uint *)(param_1 + 2);
  *puVar1 = param_1[4];
  if ((uint)param_1[5] <= (uint)param_1[4]) {
    *param_1 = -1;
    return;
  }
  uVar5 = FUN_12004540(puVar1);
  pbVar4 = (byte *)*puVar1;
  pbVar6 = pbVar4 + 1;
  *param_1 = *param_1 + uVar5;
  bVar3 = *pbVar4;
  if ((bVar3 & 0xf0) == 0xf0) {
    *(byte *)(param_1 + 1) = bVar3;
    if (bVar3 == 0xff) {
      bVar3 = *pbVar6;
      pbVar6 = pbVar4 + 2;
      *(byte *)((int)param_1 + 5) = bVar3;
    }
    *puVar1 = (uint)pbVar6;
    uVar5 = FUN_12004540(puVar1);
    param_1[3] = uVar5;
    param_1[4] = uVar5 + *puVar1;
    return;
  }
  pbVar2 = (byte *)((int)param_1 + 7);
  if ((bVar3 & 0x80) == 0) {
    *(byte *)((int)param_1 + 5) = bVar3;
    *(byte *)(param_1 + 1) = *pbVar2;
  }
  else {
    pbVar6 = pbVar4 + 2;
    *pbVar2 = bVar3;
    *(byte *)(param_1 + 1) = bVar3;
    *(byte *)((int)param_1 + 5) = pbVar4[1];
  }
  if ((*pbVar2 & 0xe0) != 0xc0) {
    *(byte *)((int)param_1 + 6) = *pbVar6;
    param_1[3] = 3;
    param_1[4] = (int)(pbVar6 + 1);
    return;
  }
  param_1[4] = (int)pbVar6;
  param_1[3] = 2;
  return;
}


