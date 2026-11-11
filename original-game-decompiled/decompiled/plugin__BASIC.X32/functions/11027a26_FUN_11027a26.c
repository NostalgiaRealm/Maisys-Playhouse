
/* ==== FUN_11027a26 @ 11027a26 ==== 
 * signature: char __fastcall FUN_11027a26(uint * param_1, int param_2)
 * body: 11027a26-11027a27
 */

/* WARNING: Instruction at (ram,0x11027a49) overlaps instruction at (ram,0x11027a47)
    */

char __fastcall FUN_11027a26(uint *param_1,int param_2)

{
  uint *puVar1;
  byte *pbVar2;
  int *piVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  code *pcVar7;
  char in_AL;
  char cVar8;
  byte bVar9;
  int unaff_EBX;
  int unaff_ESI;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  bool in_ZF;
  char in_SF;
  bool bVar13;
  
  lVar6 = (longlong)*(int *)((int)param_1 + 2) * 0x11;
  uVar10 = (uint)lVar6;
  if (!in_ZF && ((int)uVar10 != lVar6) == (bool)in_SF) {
    bVar9 = (byte)param_1;
    *(byte *)(unaff_EBX + 0x42890c41) = *(byte *)(unaff_EBX + 0x42890c41) | bVar9;
    pbVar2 = (byte *)(unaff_EBX + 0x42891041);
    bVar4 = *pbVar2;
    *pbVar2 = *pbVar2 + bVar9;
    *(short *)(param_2 + 0x18) = (short)param_1[5];
    return in_AL + 'f' + CARRY1(bVar4,bVar9);
  }
  puVar1 = (uint *)(CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + (char)*param_1) + 2);
  *puVar1 = *puVar1 & uVar10;
  bVar11 = CARRY4(*param_1,(uint)&stack0x00000000);
  *param_1 = (uint)(&stack0x00000000 + *param_1);
  if ((POPCOUNT(*param_1 & 0xff) & 1U) == 0) {
    bVar12 = true;
    bVar13 = false;
    if ((int)*param_1 < 0) {
      puVar1 = (uint *)(unaff_EBX + 0x21110279);
      uVar5 = (uint)bVar11;
      bVar11 = CARRY4(*puVar1,(uint)&stack0x00000000) ||
               CARRY4((uint)(&stack0x00000000 + *puVar1),uVar5);
      *puVar1 = (uint)(&stack0x00000000 + *puVar1 + uVar5);
      bVar12 = (POPCOUNT(*puVar1 & 0xff) & 1U) == 0;
      goto code_r0x11027a41;
    }
  }
  else {
    puVar1 = (uint *)(uVar10 + 0xa3110279);
    uVar5 = (uint)bVar11;
    bVar11 = CARRY4(*puVar1,(uint)param_1) || CARRY4(*puVar1 + (int)param_1,uVar5);
    *puVar1 = *puVar1 + (int)param_1 + uVar5;
    bVar13 = (int)*puVar1 < 0;
    bVar12 = (POPCOUNT(*puVar1 & 0xff) & 1U) == 0;
  }
  if (bVar13) {
    uVar5 = (uint)bVar11;
    bVar11 = CARRY4(*param_1,(uint)&stack0x00000000) ||
             CARRY4((uint)(&stack0x00000000 + *param_1),uVar5);
    *param_1 = (uint)(&stack0x00000000 + *param_1 + uVar5);
    bVar12 = (POPCOUNT(*param_1 & 0xff) & 1U) == 0;
  }
code_r0x11027a41:
  if (!bVar12) {
    uVar5 = (uint)bVar11;
    bVar11 = CARRY4(*param_1,(uint)&stack0x00000000) ||
             CARRY4((uint)(&stack0x00000000 + *param_1),uVar5);
    *param_1 = (uint)(&stack0x00000000 + *param_1 + uVar5);
    bVar12 = (POPCOUNT(*param_1 & 0xff) & 1U) == 0;
  }
  if (!bVar12) {
    piVar3 = (int *)((int)param_1 + uVar10 * 2 + -0x3333eefe);
    *piVar3 = *piVar3 + unaff_ESI + (uint)bVar11;
    pcVar7 = (code *)swi(3);
    cVar8 = (*pcVar7)();
    return cVar8;
  }
  pcVar7 = (code *)swi(3);
  cVar8 = (*pcVar7)();
  return cVar8;
}


