
/* ==== FUN_00479390 @ 00479390 ==== 
 * signature: uint __thiscall FUN_00479390(void * this, byte * param_1)
 * body: 00479390-00479409
 */

uint __thiscall FUN_00479390(void *this,byte *param_1)

{
  byte bVar1;
  short sVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  short sVar6;
  bool bVar7;
  ushort local_20 [2];
  byte *local_1c;
  
  uVar4 = *(uint *)((int)this + 0x54);
  sVar6 = 1;
  sVar2 = *(short *)(uVar4 + 0x26);
  if (0 < sVar2) {
    do {
      FUN_00430370(*(void **)((int)this + 0x54),(int)sVar6,local_20);
      pbVar3 = local_1c;
      pbVar5 = param_1;
      do {
        bVar1 = *pbVar3;
        bVar7 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_004793e1:
          uVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_004793e6;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar7 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_004793e1;
        pbVar3 = pbVar3 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      uVar4 = 0;
LAB_004793e6:
      if (uVar4 == 0) {
        return (uint)local_20[0];
      }
      sVar6 = sVar6 + 1;
    } while (sVar6 <= sVar2);
  }
  return uVar4 & 0xffff0000;
}


