
/* ==== FUN_1101d395 @ 1101d395 ==== 
 * signature: undefined __fastcall FUN_1101d395(uint * param_1, uint param_2)
 * body: 1101d395-1101d397
 */

void __fastcall FUN_1101d395(uint *param_1,uint param_2)

{
  uint uVar1;
  undefined1 *puVar3;
  bool bVar4;
  code *pcVar5;
  uint in_EAX;
  int *piVar6;
  byte bVar7;
  uint uVar8;
  uint *puVar9;
  uint unaff_EBX;
  uint unaff_EBP;
  uint unaff_ESI;
  bool bVar10;
  uint unaff_retaddr;
  uint uVar2;
  
  bVar7 = (byte)param_1;
  *(byte *)param_1 = (char)*param_1 << (bVar7 & 7) | (byte)*param_1 >> 8 - (bVar7 & 7);
  bVar4 = ((uint)param_1 & 0x1f) == 0;
  puVar9 = (uint *)(param_2 + 0xc31101d2);
  uVar8 = (uint)(byte)(bVar4 * ((unaff_retaddr & 1) != 0) | !bVar4 * ((*param_1 & 1) != 0));
  uVar1 = *puVar9;
  uVar2 = *puVar9;
  *puVar9 = uVar2 + unaff_ESI + uVar8;
  *(byte *)param_1 = (char)*param_1 << (bVar7 & 7) | (byte)*param_1 >> 8 - (bVar7 & 7);
  bVar4 = ((uint)param_1 & 0x1f) == 0;
  uVar2 = (uint)(byte)(bVar4 * (CARRY4(uVar1,unaff_ESI) || CARRY4(uVar2 + unaff_ESI,uVar8)) |
                      !bVar4 * ((*param_1 & 1) != 0));
  piVar6 = (int *)(in_EAX + unaff_EBX + uVar2);
  *(byte *)param_1 = (char)*param_1 << (bVar7 & 7) | (byte)*param_1 >> 8 - (bVar7 & 7);
  bVar4 = ((uint)param_1 & 0x1f) == 0;
  uVar2 = (uint)(byte)(bVar4 * (CARRY4(in_EAX,unaff_EBX) || CARRY4(in_EAX + unaff_EBX,uVar2)) |
                      !bVar4 * ((*param_1 & 1) != 0));
  uVar8 = param_2 + unaff_EBP + uVar2;
  *(byte *)param_1 = (char)*param_1 << (bVar7 & 7) | (byte)*param_1 >> 8 - (bVar7 & 7);
  bVar4 = ((uint)param_1 & 0x1f) == 0;
  uVar2 = (uint)(byte)(bVar4 * (CARRY4(param_2,unaff_EBP) || CARRY4(param_2 + unaff_EBP,uVar2)) |
                      !bVar4 * ((*param_1 & 1) != 0));
  uVar1 = uVar8 + unaff_ESI;
  puVar9 = (uint *)(uVar1 + uVar2);
  *(byte *)param_1 = (char)*param_1 << (bVar7 & 7) | (byte)*param_1 >> 8 - (bVar7 & 7);
  bVar4 = ((uint)param_1 & 0x1f) == 0;
  uVar8 = (uint)(byte)(bVar4 * (CARRY4(uVar8,unaff_ESI) || CARRY4(uVar1,uVar2)) |
                      !bVar4 * ((*param_1 & 1) != 0));
  uVar2 = *param_1;
  uVar1 = *param_1;
  *param_1 = uVar1 + (int)puVar9 + uVar8;
  *param_1 = *param_1 << (bVar7 & 0x1f) | *param_1 >> 0x20 - (bVar7 & 0x1f);
  bVar4 = ((uint)param_1 & 0x1f) == 0;
  uVar8 = (uint)(byte)(bVar4 * (CARRY4(uVar2,(uint)puVar9) || CARRY4(uVar1 + (int)puVar9,uVar8)) |
                      !bVar4 * ((*param_1 & 1) != 0));
  uVar2 = *param_1;
  uVar1 = *param_1;
  *param_1 = uVar1 + unaff_EBX + uVar8;
  *param_1 = *param_1 << (bVar7 & 0x1f) | *param_1 >> 0x20 - (bVar7 & 0x1f);
  bVar4 = ((uint)param_1 & 0x1f) == 0;
  uVar2 = (uint)(byte)(bVar4 * (CARRY4(uVar2,unaff_EBX) || CARRY4(uVar1 + unaff_EBX,uVar8)) |
                      !bVar4 * ((*param_1 & 1) != 0));
  bVar10 = CARRY4((uint)puRam8f1101d3,(uint)&stack0x00000004);
  puVar3 = &stack0x00000004 + (int)puRam8f1101d3;
  puRam8f1101d3 = puVar3 + uVar2;
  *param_1 = *param_1 << (bVar7 & 0x1f) | *param_1 >> 0x20 - (bVar7 & 0x1f);
  bVar4 = ((uint)param_1 & 0x1f) == 0;
  *piVar6 = (int)piVar6 +
            (uint)(byte)(bVar4 * (bVar10 || CARRY4((uint)puVar3,uVar2)) |
                        !bVar4 * ((*param_1 & 1) != 0)) + *piVar6;
  *param_1 = *param_1 + (int)param_1;
  *puVar9 = *puVar9 | (uint)piVar6;
  puVar9 = (uint *)((int)param_1 + *param_1);
  *(uint *)((int)puVar9 * 2) = *(uint *)((int)puVar9 * 2) | (uint)piVar6;
  *puVar9 = *puVar9 | (uint)puVar9;
  *puVar9 = *puVar9 | (uint)puVar9;
  *(uint *)((int)piVar6 + 0x7090609) = *(uint *)((int)piVar6 + 0x7090609) | (uint)puVar9;
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


