
/* ==== FUN_00453d2a @ 00453d2a ==== 
 * signature: undefined __fastcall FUN_00453d2a(int param_1, undefined4 param_2)
 * body: 00453d2a-00453d2b
 */

/* WARNING: Unable to track spacebase fully for stack */

void __fastcall FUN_00453d2a(int param_1,undefined4 param_2)

{
  code *pcVar1;
  byte bVar2;
  int in_EAX;
  byte *pbVar3;
  char cVar5;
  char cVar6;
  char cVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  char cVar12;
  undefined3 uVar13;
  char *pcVar11;
  byte *unaff_EBX;
  int unaff_EBP;
  int unaff_EDI;
  int iVar14;
  bool bVar15;
  bool bVar16;
  char cVar4;
  
  iVar14 = unaff_EDI - *(int *)(in_EAX * 2 + 0x453c3900);
  bVar2 = (byte)in_EAX;
  *(char *)(iVar14 + 0x3c) = *(char *)(iVar14 + 0x3c) + bVar2;
  cVar7 = (char)param_2;
  *(char *)(unaff_EBP + 0x3d) = *(char *)(unaff_EBP + 0x3d) + cVar7;
  cVar4 = (char)((uint)in_EAX >> 8);
  unaff_EBX[0x3c] = unaff_EBX[0x3c] + cVar4;
  cVar12 = (char)((uint)param_2 >> 8);
  *(char *)(param_1 + 0x3c) = *(char *)(param_1 + 0x3c) + cVar12;
  *(char *)(iVar14 + 0x3c) = *(char *)(iVar14 + 0x3c) + (char)((uint)unaff_EBX >> 8);
  cVar5 = (char)param_1;
  *(char *)(unaff_EBP + -0x64ffbabf) = *(char *)(unaff_EBP + -0x64ffbabf) + cVar5;
  cVar6 = (char)((uint)param_1 >> 8);
  *(char *)(param_1 + -0x48ffbac4) = *(char *)(param_1 + -0x48ffbac4) + cVar6;
  cVar4 = cVar4 + cVar7;
  pbVar3 = (byte *)CONCAT22((short)((uint)in_EAX >> 0x10),CONCAT11(cVar4,bVar2));
  uVar13 = (undefined3)((uint)param_2 >> 8);
  bVar8 = cVar7 + cVar4;
  *pbVar3 = *pbVar3 + bVar2;
  *(char *)(iVar14 + 0x3c220045) = *(char *)(iVar14 + 0x3c220045) + (char)unaff_EBX;
  bVar10 = *pbVar3;
  *pbVar3 = *pbVar3 + bVar2;
  bVar9 = bVar8 + *(byte *)CONCAT31(uVar13,bVar8);
  bVar15 = CARRY1(bVar8,*(byte *)CONCAT31(uVar13,bVar8)) || CARRY1(bVar9,CARRY1(bVar10,bVar2));
  bVar9 = bVar9 + CARRY1(bVar10,bVar2);
  bVar10 = bVar9 + *(byte *)CONCAT31(uVar13,bVar9);
  bVar16 = CARRY1(bVar9,*(byte *)CONCAT31(uVar13,bVar9)) || CARRY1(bVar10,bVar15);
  bVar10 = bVar10 + bVar15;
  bVar9 = bVar10 + *(byte *)CONCAT31(uVar13,bVar10);
  cVar4 = bVar9 + bVar16;
  pcVar11 = (char *)CONCAT31(uVar13,cVar4);
  bVar10 = bVar2 + *(char *)CONCAT31((int3)(CONCAT22((short)((uint)param_1 >> 0x10),
                                                     CONCAT11(cVar6 + bVar2,cVar5)) >> 8),
                                     cVar5 + cVar12) +
           (CARRY1(bVar10,*(byte *)CONCAT31(uVar13,bVar10)) || CARRY1(bVar9,bVar16));
  bVar10 = cVar4 + *pcVar11 +
           (0xedededf9 <
           CONCAT31((int3)((uint)pbVar3 >> 8),
                    bVar10 + *unaff_EBX + *(char *)((int)pcVar11 * 2) + CARRY1(bVar10,*unaff_EBX)));
  pbVar3 = (byte *)CONCAT31(uVar13,bVar10);
  *pbVar3 = *pbVar3 | bVar10;
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


