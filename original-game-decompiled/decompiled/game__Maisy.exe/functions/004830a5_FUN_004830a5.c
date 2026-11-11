
/* ==== FUN_004830a5 @ 004830a5 ==== 
 * signature: undefined __fastcall FUN_004830a5(byte * param_1, undefined4 param_2)
 * body: 004830a5-004830a7
 */

void __fastcall FUN_004830a5(byte *param_1,undefined4 param_2)

{
  char *pcVar1;
  code *pcVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined4 in_EAX;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar16;
  byte *pbVar15;
  byte bVar17;
  byte *unaff_EBX;
  int unaff_EBP;
  uint unaff_ESI;
  int *unaff_EDI;
  byte in_CF;
  bool bVar18;
  bool bVar19;
  char in_PF;
  byte in_AF;
  char in_ZF;
  char in_SF;
  
  pbVar8 = (byte *)CONCAT22((short)((uint)in_EAX >> 0x10),
                            CONCAT11(in_SF << 7 | in_ZF << 6 | in_AF << 4 | in_PF << 2 | 2 | in_CF,
                                     (char)in_EAX));
  bVar12 = (byte)param_1;
  *pbVar8 = *pbVar8 ^ bVar12;
  iVar7 = unaff_EBP - *unaff_EDI;
  bVar13 = (byte)((uint)param_1 >> 8);
  bVar18 = CARRY1(bRam4b00482f,bVar13);
  bRam4b00482f = bRam4b00482f + bVar13;
  bVar3 = (byte)(pbVar8 + -1);
  bVar5 = 9 < (bVar3 & 0xf) | in_AF;
  bVar17 = (byte)unaff_EBX;
  *(char *)(iVar7 + 0x2f) = *(char *)(iVar7 + 0x2f) + bVar17;
  bVar16 = (byte)((uint)param_2 >> 8);
  *(char *)(iVar7 + 0x2f) = *(char *)(iVar7 + 0x2f) + bVar16;
  iVar6 = CONCAT31((int3)((uint)(pbVar8 + -1) >> 8),
                   bVar3 + bVar5 * -6 + (0x99 < bVar3 || bVar18) * -0x60) + -3;
  pbVar8 = (byte *)(iVar7 + -0x5affb7d1);
  bVar3 = *pbVar8;
  *pbVar8 = *pbVar8 + bVar12;
  bVar4 = (byte)iVar6;
  bVar5 = 9 < (bVar4 & 0xf) | bVar5;
  pcVar1 = (char *)((int)unaff_EDI + iVar7 + 0x2fbe0048);
  *pcVar1 = *pcVar1 + bVar16;
  iVar7 = CONCAT31((int3)((uint)iVar6 >> 8),
                   bVar4 + bVar5 * -6 + (0x99 < bVar4 || CARRY1(bVar3,bVar12)) * -0x60) + -2;
  bVar14 = (byte)param_2;
  bVar3 = (byte)iVar7;
  bVar5 = 9 < (bVar3 & 0xf) | bVar5;
  iVar7 = CONCAT31((int3)((uint)iVar7 >> 8),
                   bVar3 + bVar5 * -6 + (0x99 < bVar3 || CARRY1(bVar16,bVar14)) * -0x60) + -1;
  bVar3 = (byte)iVar7;
  bVar5 = 9 < (bVar3 & 0xf) | bVar5;
  iVar7 = CONCAT31((int3)((uint)iVar7 >> 8),
                   bVar3 + bVar5 * -6 + (0x99 < bVar3 || CARRY1(bVar16 + bVar14,bVar13)) * -0x60);
  pbVar8 = (byte *)(iVar7 + -1);
  *pbVar8 = *pbVar8 + (char)pbVar8;
  *pbVar8 = *pbVar8 ^ bVar12;
  pbVar15 = (byte *)CONCAT22((short)((uint)param_2 >> 0x10),
                             CONCAT11(bVar16 + bVar14 + bVar13 + *pbVar8,bVar14));
  pbVar8 = (byte *)(iVar7 + -2);
  *param_1 = *param_1 + (char)((uint)pbVar8 >> 8);
  *pbVar8 = *pbVar8 ^ bVar12;
  puVar10 = (uint *)(CONCAT22((short)((uint)pbVar8 >> 0x10),
                              CONCAT11(((char)*pbVar8 < '\0') << 7 | (*pbVar8 == 0) << 6 |
                                       bVar5 << 4 | ((POPCOUNT(*pbVar8) & 1U) == 0) << 2,
                                       (char)pbVar8)) | 0x200);
  *(byte *)puVar10 = (byte)*puVar10 ^ bVar12;
  *puVar10 = *puVar10 ^ unaff_ESI;
  *(byte *)((int)puVar10 + 0x2f) = *(byte *)((int)puVar10 + 0x2f) + (char)pbVar8 + -1;
  pbVar15[0x30] = pbVar15[0x30] + bVar14;
  *(byte *)(unaff_EDI + 0x120c) = (char)unaff_EDI[0x120c] + bVar17;
  *(byte *)((int)puVar10 + -3) = *(byte *)((int)puVar10 + -3) ^ bVar12;
  puVar9 = puVar10 + -1;
  *(byte *)puVar9 = (byte)*puVar9 + (char)puVar9;
  *(byte *)puVar9 = (byte)*puVar9 ^ bVar12;
  LOCK();
  *puVar9 = unaff_ESI;
  UNLOCK();
  bVar3 = *pbVar15;
  *pbVar15 = *pbVar15 + bVar14;
  bVar4 = (byte)(byte *)((int)puVar10 + -5);
  puVar10 = (uint *)(CONCAT31((int3)((uint)((int)puVar10 + -5) >> 8),
                              bVar4 + (9 < (bVar4 & 0xf) | bVar5) * -6 +
                              (0x99 < bVar4 || CARRY1(bVar3,bVar14)) * -0x60) + -1);
  *(byte *)puVar10 = *(byte *)puVar10 + (char)puVar10;
  uVar11 = *puVar10;
  *puVar10 = (uint)(unaff_EBX + *puVar10);
  bVar18 = *(byte *)puVar10 < bVar17 ||
           (byte)(*(byte *)puVar10 - bVar17) < CARRY4(uVar11,(uint)unaff_EBX);
  *(byte *)puVar10 = (*(byte *)puVar10 - bVar17) - CARRY4(uVar11,(uint)unaff_EBX);
  bVar3 = *(byte *)puVar10;
  bVar5 = *(byte *)puVar10;
  *(byte *)puVar10 = (bVar5 - bVar17) - bVar18;
  *(byte *)puVar10 =
       (*(byte *)puVar10 - bVar17) - (bVar3 < bVar17 || (byte)(bVar5 - bVar17) < bVar18);
  uVar11 = CONCAT31((int3)((uint)puVar10 >> 8),(char)puVar10 + *unaff_EBX + '\x18');
  pbVar8 = (byte *)(uVar11 + 0x18070618);
  *pbVar8 = (*pbVar8 - bVar17) - (0xe7f8f9e7 < uVar11);
  *pbVar8 = *pbVar8 | bVar17;
  bVar3 = *param_1;
  *param_1 = *param_1 - bVar12;
  bVar18 = *pbVar8 < bVar17 || (byte)(*pbVar8 - bVar17) < (bVar3 < bVar12);
  *pbVar8 = (*pbVar8 - bVar17) - (bVar3 < bVar12);
  bVar19 = *pbVar8 < bVar17 || (byte)(*pbVar8 - bVar17) < bVar18;
  *pbVar8 = (*pbVar8 - bVar17) - bVar18;
  bVar18 = *pbVar8 < bVar17 || (byte)(*pbVar8 - bVar17) < bVar19;
  *pbVar8 = (*pbVar8 - bVar17) - bVar19;
  bVar19 = *pbVar8 < bVar17 || (byte)(*pbVar8 - bVar17) < bVar18;
  *pbVar8 = (*pbVar8 - bVar17) - bVar18;
  bVar18 = *pbVar8 < bVar17 || (byte)(*pbVar8 - bVar17) < bVar19;
  *pbVar8 = (*pbVar8 - bVar17) - bVar19;
  bVar19 = *pbVar8 < bVar17 || (byte)(*pbVar8 - bVar17) < bVar18;
  *pbVar8 = (*pbVar8 - bVar17) - bVar18;
  bVar18 = *pbVar8 < bVar17 || (byte)(*pbVar8 - bVar17) < bVar19;
  *pbVar8 = (*pbVar8 - bVar17) - bVar19;
  bVar19 = *pbVar8 < bVar17 || (byte)(*pbVar8 - bVar17) < bVar18;
  *pbVar8 = (*pbVar8 - bVar17) - bVar18;
  bVar18 = *pbVar8 < bVar17 || (byte)(*pbVar8 - bVar17) < bVar19;
  *pbVar8 = (*pbVar8 - bVar17) - bVar19;
  bVar19 = *pbVar8 < bVar17 || (byte)(*pbVar8 - bVar17) < bVar18;
  *pbVar8 = (*pbVar8 - bVar17) - bVar18;
  bVar18 = *pbVar8 < bVar17 || (byte)(*pbVar8 - bVar17) < bVar19;
  *pbVar8 = (*pbVar8 - bVar17) - bVar19;
  bVar19 = *pbVar8 < bVar17 || (byte)(*pbVar8 - bVar17) < bVar18;
  *pbVar8 = (*pbVar8 - bVar17) - bVar18;
  bVar18 = *pbVar8 < bVar17 || (byte)(*pbVar8 - bVar17) < bVar19;
  *pbVar8 = (*pbVar8 - bVar17) - bVar19;
  bVar19 = *pbVar8 < bVar17 || (byte)(*pbVar8 - bVar17) < bVar18;
  *pbVar8 = (*pbVar8 - bVar17) - bVar18;
  bVar18 = *pbVar8 < bVar17 || (byte)(*pbVar8 - bVar17) < bVar19;
  *pbVar8 = (*pbVar8 - bVar17) - bVar19;
  bVar19 = *pbVar8 < bVar17 || (byte)(*pbVar8 - bVar17) < bVar18;
  *pbVar8 = (*pbVar8 - bVar17) - bVar18;
  bVar18 = *pbVar8 < bVar17 || (byte)(*pbVar8 - bVar17) < bVar19;
  *pbVar8 = (*pbVar8 - bVar17) - bVar19;
  bVar19 = *pbVar8 < bVar17 || (byte)(*pbVar8 - bVar17) < bVar18;
  *pbVar8 = (*pbVar8 - bVar17) - bVar18;
  bVar18 = *pbVar8 < bVar17 || (byte)(*pbVar8 - bVar17) < bVar19;
  *pbVar8 = (*pbVar8 - bVar17) - bVar19;
  bVar19 = *pbVar8 < bVar17 || (byte)(*pbVar8 - bVar17) < bVar18;
  *pbVar8 = (*pbVar8 - bVar17) - bVar18;
  bVar18 = *pbVar8 < bVar17 || (byte)(*pbVar8 - bVar17) < bVar19;
  *pbVar8 = (*pbVar8 - bVar17) - bVar19;
  bVar19 = *pbVar8 < bVar17 || (byte)(*pbVar8 - bVar17) < bVar18;
  *pbVar8 = (*pbVar8 - bVar17) - bVar18;
  bVar18 = *pbVar8 < bVar17 || (byte)(*pbVar8 - bVar17) < bVar19;
  *pbVar8 = (*pbVar8 - bVar17) - bVar19;
  bVar19 = *pbVar8 < bVar17 || (byte)(*pbVar8 - bVar17) < bVar18;
  *pbVar8 = (*pbVar8 - bVar17) - bVar18;
  bVar18 = *pbVar8 < bVar17 || (byte)(*pbVar8 - bVar17) < bVar19;
  *pbVar8 = (*pbVar8 - bVar17) - bVar19;
  bVar19 = *pbVar8 < bVar17 || (byte)(*pbVar8 - bVar17) < bVar18;
  *pbVar8 = (*pbVar8 - bVar17) - bVar18;
  bVar18 = *pbVar8 < bVar17 || (byte)(*pbVar8 - bVar17) < bVar19;
  *pbVar8 = (*pbVar8 - bVar17) - bVar19;
  bVar19 = *pbVar8 < bVar17 || (byte)(*pbVar8 - bVar17) < bVar18;
  *pbVar8 = (*pbVar8 - bVar17) - bVar18;
  bVar18 = *pbVar8 < bVar17 || (byte)(*pbVar8 - bVar17) < bVar19;
  *pbVar8 = (*pbVar8 - bVar17) - bVar19;
  bVar19 = *pbVar8 < bVar17 || (byte)(*pbVar8 - bVar17) < bVar18;
  *pbVar8 = (*pbVar8 - bVar17) - bVar18;
  bVar18 = *pbVar8 < bVar17 || (byte)(*pbVar8 - bVar17) < bVar19;
  *pbVar8 = (*pbVar8 - bVar17) - bVar19;
  bVar19 = *pbVar8 < bVar17 || (byte)(*pbVar8 - bVar17) < bVar18;
  *pbVar8 = (*pbVar8 - bVar17) - bVar18;
  bVar18 = *pbVar8 < bVar17 || (byte)(*pbVar8 - bVar17) < bVar19;
  *pbVar8 = (*pbVar8 - bVar17) - bVar19;
  bVar19 = *pbVar8 < bVar17 || (byte)(*pbVar8 - bVar17) < bVar18;
  *pbVar8 = (*pbVar8 - bVar17) - bVar18;
  bVar18 = *pbVar8 < bVar17 || (byte)(*pbVar8 - bVar17) < bVar19;
  *pbVar8 = (*pbVar8 - bVar17) - bVar19;
  bVar19 = *pbVar8 < bVar17 || (byte)(*pbVar8 - bVar17) < bVar18;
  *pbVar8 = (*pbVar8 - bVar17) - bVar18;
  bVar3 = *pbVar8;
  bVar5 = *pbVar8;
  *pbVar8 = (bVar5 - bVar17) - bVar19;
  *pbVar8 = (*pbVar8 - bVar17) - (bVar3 < bVar17 || (byte)(bVar5 - bVar17) < bVar19);
  bVar5 = (byte)((uint)pbVar8 | 0x11100f1e);
  bVar3 = bVar5 + 0x18;
  bVar18 = 0xe7 < bVar5 || CARRY1(bVar3,CARRY1(bVar14,*unaff_EBX));
  pbVar8 = (byte *)CONCAT31((int3)(((uint)pbVar8 | 0x11100f1e) >> 8),
                            bVar3 + CARRY1(bVar14,*unaff_EBX));
  bVar3 = *pbVar8;
  bVar5 = *pbVar8;
  *pbVar8 = (bVar5 - bVar17) - bVar18;
  uVar11 = (uint)(bVar3 < bVar17 || (byte)(bVar5 - bVar17) < bVar18);
  bVar18 = (byte *)0xe7e9e7e7 < pbVar8 || CARRY4((uint)(pbVar8 + 0x18161818),uVar11);
  pbVar8 = pbVar8 + 0x18161818 + uVar11;
  bVar3 = *pbVar8;
  bVar5 = *pbVar8;
  *pbVar8 = (bVar5 - bVar17) - bVar18;
  *pbVar8 = (*pbVar8 - bVar17) - (bVar3 < bVar17 || (byte)(bVar5 - bVar17) < bVar18);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


