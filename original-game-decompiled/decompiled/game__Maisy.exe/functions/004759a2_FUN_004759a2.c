
/* ==== FUN_004759a2 @ 004759a2 ==== 
 * signature: undefined __fastcall FUN_004759a2(int param_1, int * param_2, undefined4 param_3, int param_4)
 * body: 004759a2-004759a3
 */

void __fastcall FUN_004759a2(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  int in_EAX;
  int iVar4;
  char cVar6;
  char cVar7;
  char cVar9;
  uint uVar8;
  char cVar10;
  char cVar12;
  uint *puVar11;
  char cVar13;
  int unaff_EBX;
  int unaff_EBP;
  byte *unaff_ESI;
  int unaff_EDI;
  char in_ZF;
  char unaff_retaddr;
  char cVar5;
  
  uVar8 = param_1 - 1;
  if (uVar8 == 0 || in_ZF == '\0') {
    cVar9 = (char)(uVar8 >> 8);
    *(char *)(unaff_EBP + 0xa004758) = *(char *)(unaff_EBP + 0xa004758) + cVar9;
    cVar10 = (char)param_2;
    *(char *)(unaff_EBX + 0x56) = *(char *)(unaff_EBX + 0x56) + cVar10;
    *(char *)(in_EAX + -0x21ffb8aa) = *(char *)(in_EAX + -0x21ffb8aa) + (char)uVar8;
    cVar6 = (char)uVar8 + cVar9;
    cVar12 = (char)((uint)param_2 >> 8);
    cVar5 = (char)((uint)in_EAX >> 8) + cVar12;
    iVar4 = CONCAT22((short)((uint)in_EAX >> 0x10),CONCAT11(cVar5,(char)in_EAX));
    cVar13 = (char)unaff_EBX;
    cVar7 = (char)((uint)unaff_EBX >> 8) * '\x02';
    cRam20004757 = cRam20004757 + cVar10;
    pcVar1 = (char *)(iVar4 + 0x57);
    *pcVar1 = *pcVar1 + cVar5;
    cVar3 = (char)in_EAX + cVar13;
    unaff_EBX = CONCAT31((int3)(CONCAT22((short)((uint)unaff_EBX >> 0x10),CONCAT11(cVar7,cVar13)) >>
                               8),cVar13 + cVar5);
    param_2 = (int *)CONCAT22((short)((uint)param_2 >> 0x10),CONCAT11(cVar12 + cVar9 + cVar6,cVar10)
                             );
    cVar7 = cVar6 + cVar7;
    uVar8 = CONCAT31((int3)(CONCAT22((short)(uVar8 >> 0x10),CONCAT11(cVar9 + cVar6,cVar6)) >> 8),
                     cVar7);
    pcVar1 = (char *)(CONCAT31((int3)((uint)iVar4 >> 8),cVar3) + unaff_EBX * 2);
    *pcVar1 = *pcVar1 + cVar3;
    *(char *)(unaff_EDI + 0xf) = *(char *)(unaff_EDI + 0xf) + cVar7;
    *(char *)param_2 = (char)*param_2 + cVar13 + cVar5;
    cRam2d004758 = cRam2d004758 + (char)((uint)(unaff_EDI + 0xc) >> 8);
  }
  cVar7 = (char)((uint)param_2 >> 8);
  cRam3d004758 = cRam3d004758 + cVar7;
  *(char *)(unaff_EBP + 0x58) = *(char *)(unaff_EBP + 0x58) + unaff_retaddr;
  *(char *)(unaff_EBP + 0x58) = *(char *)(unaff_EBP + 0x58) + (char)unaff_EBX;
  *(char *)(uVar8 + 0x58) = *(char *)(uVar8 + 0x58) + cVar7;
  *(char *)(param_2 + -0x1b7fee2a) = (char)param_2[-0x1b7fee2a] + (char)uVar8;
  *(char *)(param_2 + -0x177fee2a) = (char)param_2[-0x177fee2a] + (char)unaff_EBX;
  *(char *)(unaff_EBP + 0x4758) = *(char *)(unaff_EBP + 0x4758) + (char)(uVar8 >> 8);
  *param_2 = *param_2 + param_4;
  puVar11 = (uint *)((int)param_2 + *(int *)unaff_ESI);
  *unaff_ESI = *unaff_ESI | (byte)puVar11;
  *puVar11 = *puVar11 | uVar8;
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


