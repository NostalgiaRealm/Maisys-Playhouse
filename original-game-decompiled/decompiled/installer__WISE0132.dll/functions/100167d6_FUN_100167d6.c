
/* ==== FUN_100167d6 @ 100167d6 ==== 
 * signature: undefined __stdcall FUN_100167d6(void)
 * body: 100167d6-100167d7
 */

void FUN_100167d6(void)

{
  byte *pbVar1;
  int *piVar2;
  uint *puVar3;
  byte bVar4;
  uint uVar6;
  char extraout_CL;
  byte extraout_CH;
  uint uVar7;
  int unaff_EBX;
  short unaff_SI;
  undefined2 in_DS;
  undefined8 uVar8;
  byte bVar5;
  
  uVar8 = func_0x00116944();
  uVar7 = (uint)((ulonglong)uVar8 >> 0x20);
  piVar2 = (int *)segment(in_DS,(short)unaff_EBX + unaff_SI);
  *piVar2 = *piVar2 + uVar7;
  puVar3 = (uint *)segment(in_DS,(short)unaff_EBX + unaff_SI);
  uVar6 = *puVar3;
  *puVar3 = *puVar3 + uVar7;
  pbVar1 = (byte *)((int)uVar8 + 1);
  bVar4 = *pbVar1;
  bVar5 = *pbVar1;
  *pbVar1 = bVar5 + extraout_CH + CARRY4(uVar6,uVar7);
  *(char *)(unaff_EBX + 0x5f5e0845) =
       *(char *)(unaff_EBX + 0x5f5e0845) + extraout_CL +
       (CARRY1(bVar4,extraout_CH) || CARRY1(bVar5 + extraout_CH,CARRY4(uVar6,uVar7)));
  return;
}


