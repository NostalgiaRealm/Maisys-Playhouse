
/* ==== FUN_12023c01 @ 12023c01 ==== 
 * signature: undefined __fastcall FUN_12023c01(char * param_1, uint * param_2)
 * body: 12023c01-12023c03
 */

void __fastcall FUN_12023c01(char *param_1,uint *param_2)

{
  byte *pbVar1;
  byte bVar2;
  code *pcVar3;
  byte bVar4;
  char cVar5;
  char *in_EAX;
  undefined3 uVar7;
  uint uVar6;
  char cVar8;
  uint *puVar9;
  char cVar10;
  uint *puVar11;
  undefined3 uVar13;
  int *piVar12;
  char *unaff_EBX;
  int unaff_EBP;
  uint *unaff_ESI;
  uint *unaff_EDI;
  
  cVar10 = (char)param_2 + (char)*unaff_EDI + (in_EAX < (char *)*param_2);
  puVar9 = (uint *)CONCAT31((int3)((uint)param_2 >> 8),cVar10);
  bVar4 = (byte)in_EAX;
  uVar6 = CONCAT22((short)((uint)in_EAX >> 0x10),
                   CONCAT11((char)((uint)in_EAX >> 8) + *in_EAX + (in_EAX < (char *)*puVar9),bVar4))
  ;
  puVar11 = (uint *)CONCAT22((short)((uint)param_2 >> 0x10),
                             CONCAT11((char)((uint)param_2 >> 8) + (char)*puVar9 + (uVar6 < *puVar9)
                                      ,cVar10));
  pbVar1 = (byte *)(CONCAT22((short)((uint)unaff_EBX >> 0x10),
                             CONCAT11((char)((uint)unaff_EBX >> 8) + *unaff_EBX + (uVar6 < *puVar11)
                                      ,(char)unaff_EBX)) + 2 + (int)unaff_EDI);
  bVar2 = bVar4 + *pbVar1;
  uVar7 = (undefined3)(uVar6 >> 8);
  cVar5 = bVar2 + (uVar6 < *puVar11);
  cVar8 = (char)param_1 + *(char *)(unaff_EBP + 0x3b) +
          (CARRY1(bVar4,*pbVar1) || CARRY1(bVar2,uVar6 < *puVar11));
  puVar9 = (uint *)CONCAT31((int3)(CONCAT22((short)((uint)param_1 >> 0x10),
                                            CONCAT11((char)((uint)param_1 >> 8) + *param_1 +
                                                     (uVar6 < *puVar9),(char)param_1)) >> 8),cVar8);
  uVar13 = (undefined3)((uint)puVar11 >> 8);
  cVar10 = cVar10 + (char)*puVar11;
  piVar12 = (int *)CONCAT31(uVar13,cVar10 + *(char *)CONCAT31(uVar13,cVar10));
  *(char *)puVar9 = (char)*puVar9 + cVar8;
  *puVar9 = *puVar9 | (uint)puVar9;
  *puVar9 = *puVar9 | (uint)puVar9;
  *puVar9 = *puVar9 | (uint)puVar9;
  *piVar12 = *piVar12 + CONCAT31(uVar7,cVar5);
  puVar9 = (uint *)((int)puVar9 + *puVar9);
  *puVar9 = *puVar9 | (uint)puVar9;
  uVar6 = CONCAT31(uVar7,cVar5 + '\x05');
  *puVar9 = *puVar9 | (uint)puVar9;
  *unaff_ESI = *unaff_ESI | uVar6;
  *puVar9 = *puVar9 | (uint)puVar9;
  *puVar9 = *puVar9 | (uint)puVar9;
  *puVar9 = *puVar9 | (uint)puVar9;
  *puVar9 = *puVar9 | (uint)puVar9;
  *puVar9 = *puVar9 | (uint)puVar9;
  *puVar9 = *puVar9 | (uint)puVar9;
  *puVar9 = *puVar9 | (uint)puVar9;
  *puVar9 = *puVar9 | (uint)puVar9;
  *puVar9 = *puVar9 | (uint)puVar9;
  *puVar9 = *puVar9 | (uint)puVar9;
  *puVar9 = *puVar9 | (uint)puVar9;
  *puVar9 = *puVar9 | (uint)puVar9;
  *puVar9 = *puVar9 | (uint)puVar9;
  *puVar9 = *puVar9 | (uint)puVar9;
  *puVar9 = *puVar9 | (uint)puVar9;
  *puVar9 = *puVar9 | (uint)puVar9;
  *puVar9 = *puVar9 | (uint)puVar9;
  *puVar9 = *puVar9 | (uint)puVar9;
  *puVar9 = *puVar9 | (uint)puVar9;
  *puVar9 = *puVar9 | (uint)puVar9;
  *puVar9 = *puVar9 | (uint)puVar9;
  *puVar9 = *puVar9 | (uint)puVar9;
  *puVar9 = *puVar9 | (uint)puVar9;
  *puVar9 = *puVar9 | (uint)puVar9;
  *puVar9 = *puVar9 | (uint)puVar9;
  *puVar9 = *puVar9 | (uint)puVar9;
  *puVar9 = *puVar9 | (uint)puVar9;
  *puVar9 = *puVar9 | (uint)puVar9;
  *puVar9 = *puVar9 | (uint)puVar9;
  *puVar9 = *puVar9 | (uint)puVar9;
  *puVar9 = *puVar9 | (uint)puVar9;
  *puVar9 = *puVar9 | (uint)puVar9;
  *puVar9 = *puVar9 | (uint)puVar9;
  *puVar9 = *puVar9 | (uint)puVar9;
  *puVar9 = *puVar9 | (uint)puVar9;
  *puVar9 = *puVar9 | (uint)puVar9;
  *puVar9 = *puVar9 | (uint)puVar9;
  *puVar9 = *puVar9 | (uint)puVar9;
  *puVar9 = *puVar9 | (uint)puVar9;
  *puVar9 = *puVar9 | (uint)puVar9;
  *unaff_EDI = *unaff_EDI | uVar6;
  *puVar9 = *puVar9 | (uint)puVar9;
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


