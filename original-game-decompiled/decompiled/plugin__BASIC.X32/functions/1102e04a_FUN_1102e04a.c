
/* ==== FUN_1102e04a @ 1102e04a ==== 
 * signature: float10 __fastcall FUN_1102e04a(byte * param_1)
 * body: 1102e04a-1102e04b
 */

float10 __fastcall FUN_1102e04a(byte *param_1)

{
  uint *puVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  ushort uVar7;
  int iVar8;
  undefined1 uVar9;
  int in_EAX;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  undefined3 uVar15;
  int *piVar14;
  uint *unaff_EBX;
  uint unaff_EBP;
  byte *unaff_ESI;
  byte *unaff_EDI;
  undefined2 in_DS;
  bool bVar16;
  int *piVar10;
  
  bVar11 = *param_1;
  *(int *)(in_EAX + -0x25) =
       (int)(&stack0x00000000 + (uint)!CARRY1((byte)in_DS,*param_1) + *(int *)(in_EAX + -0x25));
  bVar11 = (byte)in_DS + bVar11 + *param_1;
  pbVar3 = unaff_EDI + 1;
  *(int *)(unaff_EBP - 0x24) = *(int *)(unaff_EBP - 0x24) + in_EAX + (uint)(*unaff_ESI < *unaff_EDI)
  ;
  uVar7 = CONCAT11((char)((ushort)in_DS >> 8),bVar11 + *param_1);
  uVar12 = (uint)uVar7;
  uVar9 = in(uVar7);
  piVar10 = (int *)CONCAT31((int3)((uint)in_EAX >> 8),uVar9);
  uVar4 = (uint)CARRY1(bVar11,*param_1);
  bVar16 = CARRY4((uint)pbRam9e1102dd,(uint)pbVar3);
  pbVar6 = pbVar3 + (int)pbRam9e1102dd;
  pbRam9e1102dd = pbVar6 + uVar4;
  uVar4 = (uint)(bVar16 || CARRY4((uint)pbVar6,uVar4));
  uVar13 = uVar12 * 2 + uVar4;
  uVar5 = (uint)(CARRY4(uVar12,uVar12) || CARRY4(uVar12 * 2,uVar4));
  uVar4 = *unaff_EBX;
  uVar12 = *unaff_EBX;
  *unaff_EBX = uVar12 + (int)piVar10 + uVar5;
  puVar1 = (uint *)((int)piVar10 + 0x411102de);
  uVar5 = (uint)(CARRY4(unaff_EBP,uVar13) ||
                CARRY4(unaff_EBP + uVar13,
                       (uint)(CARRY4(uVar4,(uint)piVar10) || CARRY4(uVar12 + (int)piVar10,uVar5))));
  uVar4 = *puVar1;
  uVar12 = *puVar1;
  *puVar1 = uVar12 + uVar13 + uVar5;
  *(uint *)(param_1 + -0x25) =
       (int)piVar10 +
       (uint)(CARRY4(uVar4,uVar13) || CARRY4(uVar12 + uVar13,uVar5)) + *(int *)(param_1 + -0x25);
  uVar15 = (undefined3)(uVar13 >> 8);
  bVar11 = (byte)uVar13 + *param_1;
  *(uint *)(unaff_ESI + -0x24) =
       *(int *)(unaff_ESI + -0x24) + CONCAT31(uVar15,bVar11) + (uint)CARRY1((byte)uVar13,*param_1);
  piVar14 = (int *)CONCAT31(uVar15,bVar11 + *param_1);
  iVar2 = *piVar14;
  iVar8 = *piVar14;
  *piVar10 = (int)piVar10 +
             (uint)(CARRY4((uint)pbVar3,(uint)param_1) ||
                   CARRY4((uint)(pbVar3 + (int)param_1),(uint)CARRY1(bVar11,*param_1))) + *piVar10;
  return (float10)iVar2 + (float10)(short)iVar8;
}


