
/* ==== FUN_11004d91 @ 11004d91 ==== 
 * signature: int __fastcall FUN_11004d91(byte * param_1, int * param_2)
 * body: 11004d91-11004d93
 */

int __fastcall FUN_11004d91(byte *param_1,int *param_2)

{
  byte bVar1;
  short sVar2;
  char cVar3;
  undefined4 in_EAX;
  undefined3 uVar5;
  int iVar4;
  byte *pbVar6;
  byte bVar7;
  uint *unaff_EBP;
  ushort *puVar8;
  int *unaff_ESI;
  undefined4 *puVar9;
  int unaff_EDI;
  undefined4 *puVar10;
  undefined2 in_ES;
  undefined4 auStack_46 [2];
  code *pcStack_3e;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 *puStack_12;
  undefined4 uStack_e;
  
  uVar5 = (undefined3)((uint)in_EAX >> 8);
  cVar3 = (char)in_EAX + 'M';
  bVar1 = *param_1;
  bVar7 = (byte)param_2;
  *param_1 = *param_1 + bVar7;
  pbVar6 = (byte *)(((int)param_1 - *unaff_EBP) - (uint)CARRY1(bVar1,bVar7));
  *param_2 = *param_2 + unaff_EDI +
             (uint)(param_1 < (byte *)*unaff_EBP ||
                   (int)param_1 - *unaff_EBP < (uint)CARRY1(bVar1,bVar7));
  *pbVar6 = *pbVar6 + bVar7;
  puVar8 = (ushort *)((int)unaff_EBP + -2);
  bVar1 = *pbVar6;
  *pbVar6 = *pbVar6 + bVar7;
  sVar2 = ((ushort)pbVar6 & 3) - (*puVar8 & 3);
  *puVar8 = *puVar8 + (ushort)(0 < sVar2) * sVar2;
  *(int *)((int)param_2 + 0x4d) =
       *(int *)((int)param_2 + 0x4d) + unaff_EDI + (uint)CARRY1(bVar1,bVar7);
  *pbVar6 = *pbVar6 + bVar7;
  *pbVar6 = *pbVar6 + bVar7;
  *(char *)unaff_ESI = (char)*unaff_ESI + cVar3;
  uStack_e = CONCAT22(uStack_e._2_2_,in_ES);
  puStack_12 = (undefined4 *)CONCAT22(puStack_12._2_2_,in_ES);
  *unaff_ESI = *unaff_ESI + CONCAT31(uVar5,cVar3);
  pcStack_3e = (code *)CONCAT22(pcStack_3e._2_2_,in_ES);
  iVar4 = CONCAT31(uVar5,cVar3 + (char)*unaff_ESI) + *unaff_ESI;
  iVar4 = CONCAT31((int3)((uint)iVar4 >> 8),(char)iVar4 + '\x06') + -0x137c3334;
  *(byte *)((int)unaff_ESI + 0x57) = *(byte *)((int)unaff_ESI + 0x57) ^ bVar7;
  if (puStack_12[2] != 0) {
    puVar9 = puStack_12;
    puVar10 = auStack_46;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + -1;
      puVar10 = puVar10 + -1;
    }
    *(undefined2 *)puVar10 = *(undefined2 *)puVar9;
    uStack_2c = uStack_e;
    auStack_46[1] = 0x1c0;
    uStack_28 = 0x1c;
    iVar4 = (*pcStack_3e)(auStack_46);
  }
  return iVar4;
}


