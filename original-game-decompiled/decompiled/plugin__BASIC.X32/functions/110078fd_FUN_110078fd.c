
/* ==== FUN_110078fd @ 110078fd ==== 
 * signature: undefined __fastcall FUN_110078fd(byte * param_1, uint * param_2)
 * body: 110078fd-110078ff
 */

void __fastcall FUN_110078fd(byte *param_1,uint *param_2)

{
  int *piVar1;
  uint *puVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  byte bVar11;
  uint *unaff_EBX;
  uint unaff_EBP;
  uint uVar12;
  uint *unaff_ESI;
  uint uVar13;
  uint unaff_EDI;
  byte in_CF;
  byte *unaff_retaddr;
  
  uVar12 = unaff_EBP * 2 + (uint)in_CF;
  uVar5 = (uint)(CARRY4(unaff_EBP,unaff_EBP) || CARRY4(unaff_EBP * 2,(uint)in_CF));
  uVar6 = (uint)(CARRY4(unaff_EDI,unaff_EDI) || CARRY4(unaff_EDI * 2,uVar5));
  uVar13 = *unaff_ESI;
  uVar4 = *unaff_ESI;
  *unaff_ESI = uVar4 + (int)param_2 + uVar6;
  uVar4 = (uint)(CARRY4(uVar13,(uint)param_2) || CARRY4(uVar4 + (int)param_2,uVar6));
  uVar13 = *param_2;
  uVar6 = *param_2 + uVar12;
  *param_2 = uVar6 + uVar4;
  uVar6 = (uint)(CARRY4(uVar13,uVar12) || CARRY4(uVar6,uVar4));
  uVar13 = *unaff_EBX;
  uVar4 = *unaff_EBX;
  *unaff_EBX = uVar4 + (int)unaff_ESI + uVar6;
  piVar1 = (int *)(unaff_EDI * 2 + uVar5 + 0x78);
  *piVar1 = (int)(param_1 +
                 (uint)(CARRY4(uVar13,(uint)unaff_ESI) || CARRY4(uVar4 + (int)unaff_ESI,uVar6)) +
                 *piVar1);
  bVar3 = *param_1;
  bVar11 = (byte)param_2;
  *param_1 = *param_1 + bVar11;
  uVar13 = (int)unaff_ESI * 2 + (uint)CARRY1(bVar3,bVar11);
  *(byte **)unaff_retaddr =
       unaff_retaddr +
       (uint)(CARRY4((uint)unaff_ESI,(uint)unaff_ESI) ||
             CARRY4((int)unaff_ESI * 2,(uint)CARRY1(bVar3,bVar11))) + *(int *)unaff_retaddr;
  *(byte **)unaff_retaddr = param_1 + *(int *)unaff_retaddr;
  *(byte *)param_2 = (byte)*param_2 | (byte)unaff_retaddr;
  pbVar10 = param_1 + *(int *)unaff_retaddr;
  unaff_retaddr[(int)pbVar10] = unaff_retaddr[(int)pbVar10] | (byte)unaff_retaddr;
  *unaff_retaddr = *unaff_retaddr | (byte)pbVar10;
  *unaff_retaddr = *unaff_retaddr | (byte)pbVar10;
  pbVar8 = unaff_retaddr + 0x7080608;
  if ((POPCOUNT((uint)pbVar8 & 0xff) & 1U) != 0) {
    bVar3 = *pbVar10;
    *pbVar10 = *pbVar10 + bVar11;
    puVar2 = unaff_EBX + -0x5fbbfe2;
    uVar4 = *puVar2;
    uVar5 = *puVar2;
    *puVar2 = (uint)(&stack0x00000004 + uVar5 + CARRY1(bVar3,bVar11));
    *(byte **)pbVar8 =
         pbVar8 + (uint)(CARRY4(uVar13,uVar13) ||
                        CARRY4(uVar13 * 2,
                               (uint)(CARRY4(uVar4,(uint)&stack0x00000004) ||
                                     CARRY4((uint)(&stack0x00000004 + uVar5),
                                            (uint)CARRY1(bVar3,bVar11))))) + *(int *)pbVar8;
    iVar9 = CONCAT31((int3)((uint)pbVar8 >> 8),(char)pbVar8 + '(');
    *(int *)(&stack0x00000004 + iVar9) = *(int *)(&stack0x00000004 + iVar9) + iVar9;
  }
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


