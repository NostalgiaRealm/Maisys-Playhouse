
/* ==== FUN_0049a9ca @ 0049a9ca ==== 
 * signature: undefined __fastcall FUN_0049a9ca(int param_1, int param_2)
 * body: 0049a9ca-0049a9cb
 */

void __fastcall FUN_0049a9ca(int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  char cVar3;
  undefined4 in_EAX;
  byte *pbVar4;
  char *pcVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  byte *pbVar9;
  char cVar11;
  int *piVar12;
  byte *unaff_EBX;
  uint *puVar14;
  int unaff_ESI;
  int unaff_EDI;
  char in_AF;
  int iVar10;
  char cVar13;
  
  bVar2 = (byte)in_EAX;
  pcVar5 = (char *)(unaff_EDI + -0x60a3ffb7 + (int)unaff_EBX * 4);
  *pcVar5 = *pcVar5 + (char)((uint)(param_1 + -1) >> 8);
  bVar7 = (char)param_1 - 2;
  pbVar4 = (byte *)(unaff_ESI + -0x53ffb661);
  bVar8 = *pbVar4;
  *pbVar4 = *pbVar4 + bVar7;
  bVar7 = ((char)*pbVar4 < '\0') << 7 | (*pbVar4 == 0) << 6 | in_AF << 4 |
          ((POPCOUNT(*pbVar4) & 1U) == 0) << 2 | 2U | CARRY1(bVar8,bVar7);
  pcVar5 = (char *)(unaff_EDI + -0x6061ffb7 + (int)unaff_EBX * 4);
  cVar11 = (char)param_2;
  *pcVar5 = *pcVar5 + cVar11;
  pbVar4 = (byte *)(param_2 + -0x57ffb661);
  bVar8 = *pbVar4;
  *pbVar4 = *pbVar4 + bVar7;
  pbVar4 = (byte *)CONCAT22((short)((uint)in_EAX >> 0x10),
                            CONCAT11(((char)*pbVar4 < '\0') << 7 | (*pbVar4 == 0) << 6 | in_AF << 4
                                     | ((POPCOUNT(*pbVar4) & 1U) == 0) << 2 | 2U |
                                     CARRY1(bVar8,bVar7),bVar2));
  pbVar9 = (byte *)(param_1 + -5);
  *pbVar4 = *pbVar4 + bVar2;
  bVar8 = (byte)pbVar9;
  *pbVar4 = *pbVar4 | bVar8;
  *pbVar4 = *pbVar4 | bVar8;
  *pbVar4 = *pbVar4 | bVar8;
  *pbVar4 = *pbVar4 | bVar8;
  *pbVar4 = *pbVar4 | bVar8;
  *pbVar4 = *pbVar4 | bVar8;
  *pbVar4 = *pbVar4 | bVar8;
  *pbVar4 = *pbVar4 | bVar8;
  *pbVar4 = *pbVar4 | bVar8;
  *pbVar4 = *pbVar4 | bVar8;
  *pbVar4 = *pbVar4 | bVar8;
  *pbVar4 = *pbVar4 | bVar8;
  *pbVar4 = *pbVar4 | bVar8;
  *pbVar9 = *pbVar9 | bVar2;
  *pbVar4 = *pbVar4 | bVar8;
  bVar8 = bVar8 + *pbVar4;
  iVar10 = CONCAT31((int3)((uint)pbVar9 >> 8),bVar8);
  *unaff_EBX = *unaff_EBX | bVar2;
  pbVar4[iVar10] = pbVar4[iVar10] | bVar2;
  *pbVar4 = *pbVar4 | bVar8;
  *pbVar4 = *pbVar4 | bVar8;
  *pbVar4 = *pbVar4 | bVar8;
  *pbVar4 = *pbVar4 | bVar8;
  *pbVar4 = *pbVar4 | bVar8;
  *pbVar4 = *pbVar4 | bVar8;
  *pbVar4 = *pbVar4 | bVar8;
  *pbVar4 = *pbVar4 | bVar8;
  *pbVar4 = *pbVar4 | bVar8;
  *pbVar4 = *pbVar4 | bVar8;
  *pbVar4 = *pbVar4 | bVar8;
  *pbVar4 = *pbVar4 | bVar8;
  pbVar4 = pbVar4 + 0x6080808;
  *pbVar4 = *pbVar4 | bVar8;
  *pbVar4 = *pbVar4 | bVar8;
  *pbVar4 = *pbVar4 | bVar8;
  *pbVar4 = *pbVar4 | bVar8;
  *pbVar4 = *pbVar4 | bVar8;
  cVar3 = (char)pbVar4;
  cRama0c80049 = cVar3;
  pbRamcb0049a0 = pbVar4;
  *(char *)(unaff_EDI + -0x4dffb65e) = *(char *)(unaff_EDI + -0x4dffb65e) + cVar11;
  cVar13 = (char)((uint)param_2 >> 8) + cVar3;
  piVar12 = (int *)CONCAT22((short)((uint)param_2 >> 0x10),CONCAT11(cVar13,cVar11));
  puVar14 = (uint *)CONCAT31((int3)((uint)unaff_EBX >> 8),(char)unaff_EBX + (bVar8 - 3));
  pcVar5 = (char *)CONCAT22((short)((uint)pbVar4 >> 0x10),
                            CONCAT11((char)((uint)pbVar4 >> 8) + cVar13,cVar3));
  cRama0710049 = cVar3;
  cRama29f0049 = cVar3;
  cRama2cb0049 = cVar3;
  cRama2de0049 = cVar3;
  *pcVar5 = *pcVar5 + cVar3;
  *piVar12 = (int)(pcVar5 + *piVar12);
  uVar6 = CONCAT31((int3)((uint)pcVar5 >> 8),cVar3 + (char)*piVar12) | *puVar14;
  *puVar14 = *puVar14 |
             iVar10 - 5U | *puVar14 | *puVar14 | *puVar14 |
             *(uint *)CONCAT31((int3)(uVar6 >> 8),(char)uVar6 + '\x05') | *puVar14;
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


