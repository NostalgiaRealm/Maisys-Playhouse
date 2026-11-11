
/* ==== FUN_00491721 @ 00491721 ==== 
 * signature: undefined __fastcall FUN_00491721(int param_1, byte * param_2)
 * body: 00491721-00491723
 */

void __fastcall FUN_00491721(int param_1,byte *param_2)

{
  code *pcVar1;
  byte bVar2;
  uint in_EAX;
  char *pcVar3;
  byte bVar5;
  byte bVar6;
  int iVar7;
  undefined3 uVar8;
  char cVar9;
  char cVar10;
  byte *unaff_EBX;
  char *unaff_ESI;
  char *unaff_EDI;
  byte *pbVar4;
  
  iVar7 = param_1 + -1;
  bVar2 = (byte)((uint)iVar7 >> 8);
  pcVar3 = (char *)(in_EAX + (in_EAX < 0x8c004915) + -0x60aa4883 + (uint)CARRY1(bVar2,bVar2));
  *unaff_ESI = *unaff_ESI + (char)((uint)pcVar3 >> 8);
  cVar9 = (char)param_2;
  unaff_ESI[0x16] = unaff_ESI[0x16] + cVar9;
  cVar10 = (char)((uint)param_2 >> 8);
  unaff_EBX[0x16] = unaff_EBX[0x16] + cVar10;
  pcVar3[-0x52ffb6ea] = pcVar3[-0x52ffb6ea] + cVar9;
  iVar7 = CONCAT22((short)((uint)iVar7 >> 0x10),CONCAT11(bVar2 * '\x02',(char)iVar7)) + -5;
  bVar2 = (byte)pcVar3;
  iVar7 = CONCAT22((short)((uint)iVar7 >> 0x10),
                   CONCAT11((char)((uint)iVar7 >> 8) + bVar2,(char)iVar7)) + -1;
  *pcVar3 = *pcVar3 + bVar2;
  uVar8 = (undefined3)((uint)iVar7 >> 8);
  bVar5 = (byte)iVar7 | *param_2 | *param_2 | *param_2 | *param_2 | *param_2 | *param_2 | *param_2 |
          *param_2 | *param_2 | *param_2 | *param_2 | *param_2;
  bVar6 = (bVar5 | *param_2 | *param_2 | *param_2) + *param_2 | *param_2 | *param_2 | *param_2 |
          *param_2 | *param_2 | *param_2 | *param_2 | *param_2 | *param_2 | *param_2;
  bVar2 = bVar2 | *(byte *)CONCAT31(uVar8,bVar5) | *unaff_EBX | param_2[CONCAT31(uVar8,bVar6)] |
          bRam060a0a0a;
  pbVar4 = (byte *)CONCAT31((int3)((uint)pcVar3 >> 8),bVar2);
  bVar5 = bVar6 | *param_2 | *param_2 | *param_2 | *param_2 | *pbVar4 | *param_2 | *param_2;
  bVar5 = bVar5 | *(byte *)CONCAT31(uVar8,bVar5);
  cRam16080049 = cRam16080049 + '\x01';
  *param_2 = *param_2 + cVar9;
  unaff_ESI[(int)param_2] = unaff_ESI[(int)param_2] + (char)unaff_EBX;
  *unaff_EDI = *unaff_EDI + cVar10;
  pcVar3 = (char *)(CONCAT31(uVar8,bVar5) + 0x12);
  *pcVar3 = *pcVar3 + bVar2;
  pbVar4 = pbVar4 + 0x16;
  *pbVar4 = *pbVar4 + (bVar5 - 5);
  unaff_EDI[0x16] = unaff_EDI[0x16] + (bVar5 - 6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


