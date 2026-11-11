
/* ==== FUN_120314e1 @ 120314e1 ==== 
 * signature: undefined __fastcall FUN_120314e1(byte param_1, int param_2)
 * body: 120314e1-120314e3
 */

void __fastcall FUN_120314e1(byte param_1,int param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  byte bVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  byte bVar10;
  char cVar11;
  undefined4 *puVar12;
  uint *unaff_EBX;
  byte *unaff_ESI;
  undefined4 *unaff_EDI;
  byte in_CF;
  bool bVar13;
  bool bVar14;
  
  uVar6 = in((short)param_2);
  bVar9 = (byte)uVar6 + (byte)*unaff_EBX;
  bVar13 = CARRY1((byte)uVar6,(byte)*unaff_EBX) || CARRY1(bVar9,in_CF);
  uVar7 = CONCAT31((int3)((uint)uVar6 >> 8),bVar9 + in_CF);
  pbVar1 = (byte *)((int)unaff_EBX + param_2 + 3);
  bVar9 = param_1 + *pbVar1;
  bVar14 = CARRY1(param_1,*pbVar1) || CARRY1(bVar9,bVar13);
  bVar9 = bVar9 + bVar13;
  bVar5 = bVar9 + *(byte *)(param_2 + -0x52edfced);
  bVar10 = bVar5 + bVar14;
  uVar2 = (uint)(CARRY1(bVar9,*(byte *)(param_2 + -0x52edfced)) || CARRY1(bVar5,bVar14));
  uVar3 = uVar7 + *unaff_EBX;
  iVar8 = uVar3 + uVar2;
  pbVar1 = (byte *)((int)unaff_EBX + param_2 + 3);
  bVar13 = CARRY1(bVar10,*pbVar1) ||
           CARRY1(bVar10 + *pbVar1,CARRY4(uVar7,*unaff_EBX) || CARRY4(uVar3,uVar2));
  bVar5 = (byte)((uint)iVar8 >> 8);
  bVar10 = (byte)((uint)param_2 >> 8);
  bVar9 = bVar5 + bVar10;
  uVar7 = CONCAT22((short)((uint)iVar8 >> 0x10),CONCAT11(bVar9 + bVar13,(char)iVar8));
  uVar2 = (uint)(CARRY1(bVar5,bVar10) || CARRY1(bVar9,bVar13));
  uVar3 = uVar7 + *unaff_EBX;
  bVar13 = CARRY4(uVar7,*unaff_EBX) || CARRY4(uVar3,uVar2);
  iVar8 = uVar3 + uVar2;
  bVar9 = (byte)param_2 + *unaff_ESI;
  bVar14 = CARRY1((byte)param_2,*unaff_ESI) || CARRY1(bVar9,bVar13);
  cVar11 = bVar9 + bVar13;
  bVar5 = (byte)iVar8;
  bVar9 = bVar5 + 3;
  bVar13 = 0xfc < bVar5 || CARRY1(bVar9,bVar14);
  bVar9 = bVar9 + bVar14;
  bVar5 = bVar10 + (byte)*unaff_EBX;
  bVar14 = CARRY1(bVar10,(byte)*unaff_EBX) || CARRY1(bVar5,bVar13);
  bVar10 = bVar9 + 3;
  puVar12 = (undefined4 *)
            CONCAT31((int3)(CONCAT22((short)((uint)param_2 >> 0x10),CONCAT11(bVar5 + bVar13,cVar11))
                           >> 8),
                     cVar11 + *(char *)(CONCAT31((int3)((uint)iVar8 >> 8),bVar10 + bVar14) + 0x14) +
                     (0xfc < bVar9 || CARRY1(bVar10,bVar14)));
  uVar6 = in((short)puVar12 + (short)*puVar12);
  *unaff_EDI = uVar6;
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


