
/* ==== FUN_004758cd @ 004758cd ==== 
 * signature: undefined __fastcall FUN_004758cd(int param_1, uint param_2)
 * body: 004758cd-004758cf
 */

void __fastcall FUN_004758cd(int param_1,uint param_2)

{
  char *pcVar1;
  byte bVar2;
  code *pcVar3;
  char cVar4;
  byte bVar5;
  char cVar6;
  int in_EAX;
  int iVar7;
  int iVar8;
  byte bVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar17;
  uint uVar14;
  int *piVar15;
  char *pcVar16;
  char cVar18;
  byte bVar19;
  undefined4 unaff_EBX;
  byte *pbVar20;
  byte *pbVar21;
  char *unaff_EBP;
  byte *unaff_ESI;
  int unaff_EDI;
  uint *puVar23;
  undefined2 in_SS;
  bool bVar24;
  bool bVar25;
  undefined4 uStack00000058;
  undefined4 uStack0000005c;
  undefined4 uStack00000060;
  undefined4 uStack00000064;
  undefined4 uStack00000068;
  undefined4 uStack0000006c;
  char cVar9;
  undefined3 uVar22;
  
  pcVar1 = (char *)(unaff_EDI + in_EAX * 2);
  *pcVar1 = *pcVar1 - (char)param_2;
  uVar14 = param_2 ^ *(uint *)(unaff_EDI + in_EAX * 2);
  cVar9 = (char)param_1;
  *(char *)(param_1 + 0x54) = *(char *)(param_1 + 0x54) + cVar9;
  cVar11 = (char)uVar14;
  (&stack0x00000043)[uVar14 * 2] = (&stack0x00000043)[uVar14 * 2] + cVar11;
  cVar17 = (char)unaff_EBX;
  *(char *)(unaff_EDI + 0x56) = *(char *)(unaff_EDI + 0x56) + cVar17;
  cVar13 = (char)((uint)param_1 >> 8);
  *(char *)(uVar14 + 0x54) = *(char *)(uVar14 + 0x54) + cVar13;
  cVar12 = (char)(uVar14 >> 8);
  unaff_EBP[0x54] = unaff_EBP[0x54] + cVar12;
  cVar4 = (char)in_EAX;
  *(char *)(in_EAX + -0x74ffb8ac) = *(char *)(in_EAX + -0x74ffb8ac) + cVar4;
  unaff_ESI[-0x5effb8ac] = unaff_ESI[-0x5effb8ac] + cVar11;
  (&stack0x54b7003b)[uVar14 * 2] = (&stack0x54b7003b)[uVar14 * 2] + cVar13;
  cVar13 = cVar13 + cVar9;
  cVar6 = (char)((uint)in_EAX >> 8);
  cVar18 = cVar17 + cVar6;
  pcVar16 = (char *)CONCAT31((int3)((uint)unaff_EBX >> 8),cVar18);
  piVar15 = (int *)CONCAT22((short)(uVar14 >> 0x10),CONCAT11(cVar12 + cVar13,cVar11 + cVar4));
  cVar12 = (char)((uint)unaff_EBX >> 8);
  pcVar1 = (char *)((int)piVar15 * 2 + 0x550f0047);
  *pcVar1 = *pcVar1 + cVar4 + cVar17;
  *(char *)piVar15 = (char)*piVar15 + cVar18;
  cRam30004755 = cRam30004755 + cVar6;
  *pcVar16 = *pcVar16 + cVar12;
  unaff_ESI[0x55] = unaff_ESI[0x55] + cVar4 + cVar17;
  *(char *)(unaff_EDI + 0x68) = *(char *)(unaff_EDI + 0x68) + cVar11 + cVar4;
  *(char *)((int)piVar15 + 0x55) = *(char *)((int)piVar15 + 0x55) + cVar6;
  unaff_EBP[0x55] = unaff_EBP[0x55] + cVar13;
  *(char *)((int)piVar15 + -0x52ffb8ab) = *(char *)((int)piVar15 + -0x52ffb8ab) + cVar18;
  puVar23 = (uint *)(unaff_EDI + 0x17);
  *unaff_EBP = *unaff_EBP + (char)unaff_EBP;
  *piVar15 = (int)(unaff_EBP + *piVar15);
  pbVar20 = (byte *)(pcVar16 + *puVar23);
  bVar19 = (byte)pbVar20;
  *(byte *)puVar23 = *(byte *)puVar23 | bVar19;
  *puVar23 = *puVar23 | (uint)pbVar20;
  bVar10 = cVar9 + cVar12 | *pbVar20;
  bVar5 = (char)unaff_EBP + 5U | 0xd;
  bVar2 = bVar19 + *(byte *)puVar23;
  uVar22 = (undefined3)((uint)pbVar20 >> 8);
  pbVar21 = (byte *)CONCAT31(uVar22,bVar2);
  pcVar16 = (char *)((int)piVar15 + *(uint *)((int)piVar15 + 0x19181716));
  bVar24 = CARRY4((uint)piVar15,*(uint *)((int)piVar15 + 0x19181716)) ||
           CARRY4((uint)pcVar16,(uint)CARRY1(bVar19,*(byte *)puVar23));
  pcVar16 = pcVar16 + CARRY1(bVar19,*(byte *)puVar23);
  bVar19 = bVar2 - *pbVar21;
  bVar25 = bVar2 < *pbVar21 || bVar19 < bVar24;
  cVar18 = bVar19 - bVar24;
  bVar2 = bVar5 - 0x1f;
  iVar7 = (CONCAT31((int3)((uint)unaff_EBP >> 8),bVar2 - bVar25) + 0x1e0074e2) -
          (uint)(bVar5 < 0x1f || bVar2 < bVar25);
  unaff_EBP[0xa004758] = unaff_EBP[0xa004758] + cVar13;
  pcVar1 = (char *)(CONCAT31(uVar22,cVar18) + 0x56);
  cVar12 = (char)pcVar16;
  *pcVar1 = *pcVar1 + cVar12;
  *(char *)(iVar7 + -0x21ffb8aa) = *(char *)(iVar7 + -0x21ffb8aa) + bVar10;
  cVar11 = bVar10 + cVar13;
  cVar17 = (char)((uint)pcVar16 >> 8);
  cVar9 = (char)((uint)iVar7 >> 8) + cVar17;
  iVar8 = CONCAT22((short)((uint)iVar7 >> 0x10),CONCAT11(cVar9,(char)iVar7));
  cVar4 = (char)((uint)pbVar20 >> 8) * '\x02';
  cRam20004757 = cRam20004757 + cVar12;
  pcVar1 = (char *)(iVar8 + 0x57);
  *pcVar1 = *pcVar1 + cVar9;
  cVar13 = cVar13 + cVar11;
  cVar6 = (char)iVar7 + cVar18;
  cVar9 = cVar18 + cVar9;
  cVar17 = cVar17 + cVar13;
  piVar15 = (int *)CONCAT22((short)((uint)pcVar16 >> 0x10),CONCAT11(cVar17,cVar12));
  cVar12 = cVar11 + cVar4;
  uVar14 = CONCAT31((int3)(CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(cVar13,cVar11)) >> 8),
                    cVar12);
  pcVar1 = (char *)(CONCAT31((int3)((uint)iVar8 >> 8),cVar6) +
                   CONCAT31((int3)(CONCAT22((short)((uint)pbVar20 >> 0x10),CONCAT11(cVar4,cVar18))
                                  >> 8),cVar9) * 2);
  *pcVar1 = *pcVar1 + cVar6;
  *(char *)(unaff_EDI + 0x26) = *(char *)(unaff_EDI + 0x26) + cVar12;
  *(char *)piVar15 = (char)*piVar15 + cVar9;
  cRam2d004758 = cRam2d004758 + (char)((uint)(unaff_EDI + 0x23) >> 8);
  cRam3d004758 = cRam3d004758 + cVar17;
  unaff_EBP[0x58] = unaff_EBP[0x58] + (char)(unaff_EDI + 0x21);
  unaff_EBP[0x58] = unaff_EBP[0x58] + cVar9;
  pcVar1 = (char *)(uVar14 + 0x58);
  *pcVar1 = *pcVar1 + cVar17;
  *(char *)(piVar15 + -0x1b7fee2a) = (char)piVar15[-0x1b7fee2a] + cVar12;
  *(char *)(piVar15 + -0x177fee2a) = (char)piVar15[-0x177fee2a] + cVar9;
  unaff_EBP[0x4758] = unaff_EBP[0x4758] + cVar13;
  *piVar15 = *piVar15 + unaff_EDI + 0x1e;
  puVar23 = (uint *)((int)piVar15 + *(int *)unaff_ESI);
  uStack0000006c = CONCAT22((short)((uint)(unaff_EDI + 0x1e) >> 0x10),in_SS);
  uStack00000068 = CONCAT22((short)((uint)(unaff_EDI + 0x20) >> 0x10),in_SS);
  uStack00000064 = CONCAT22((short)((uint)(unaff_EDI + 0x21) >> 0x10),in_SS);
  *unaff_ESI = *unaff_ESI | (byte)puVar23;
  uStack00000060 = CONCAT22((short)((uint)(unaff_EDI + 0x22) >> 0x10),in_SS);
  uStack0000005c = CONCAT22((short)((uint)(unaff_EDI + 0x23) >> 0x10),in_SS);
  uStack00000058 = CONCAT22((short)((uint)(unaff_EDI + 0x24) >> 0x10),in_SS);
  *puVar23 = *puVar23 | uVar14;
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


