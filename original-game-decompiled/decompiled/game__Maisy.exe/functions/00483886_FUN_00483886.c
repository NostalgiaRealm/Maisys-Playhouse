
/* ==== FUN_00483886 @ 00483886 ==== 
 * signature: undefined __fastcall FUN_00483886(int param_1, undefined4 param_2)
 * body: 00483886-00483887
 */

void __fastcall FUN_00483886(int param_1,undefined4 param_2)

{
  byte bVar1;
  ulonglong uVar2;
  code *pcVar3;
  byte bVar4;
  undefined4 in_EAX;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  byte bVar8;
  char cVar9;
  char cVar11;
  uint *puVar10;
  char *unaff_EBX;
  int unaff_EBP;
  uint *unaff_ESI;
  int unaff_EDI;
  byte in_AF;
  
  uVar6 = *unaff_ESI;
  uVar2 = CONCAT44(param_2,in_EAX) % (ulonglong)uVar6;
  bVar8 = (byte)param_1;
  *(char *)(unaff_EDI + (int)unaff_ESI) = *(char *)(unaff_EDI + (int)unaff_ESI) + bVar8;
  iVar5 = (int)(CONCAT44(param_2,in_EAX) / (ulonglong)uVar6) + -2;
  cVar9 = (char)((uint)iVar5 >> 8);
  *unaff_EBX = *unaff_EBX + cVar9;
  bVar1 = 9 < ((byte)iVar5 & 0xf) | in_AF;
  uVar6 = CONCAT31((int3)((uint)iVar5 >> 8),(byte)iVar5 + bVar1 * '\x06') & 0xffffff0f;
  iVar5 = CONCAT22((short)(uVar6 >> 0x10),CONCAT11(cVar9 + bVar1,(char)uVar6)) + -1;
  *(char *)uVar2 = *(char *)uVar2 + (char)((uint)unaff_EBX >> 8);
  bVar1 = 9 < ((byte)iVar5 & 0xf) | bVar1;
  uVar6 = CONCAT31((int3)((uint)iVar5 >> 8),(byte)iVar5 + bVar1 * '\x06') & 0xffffff0f;
  iVar5 = CONCAT22((short)(uVar6 >> 0x10),CONCAT11((char)((uint)iVar5 >> 8) + bVar1,(char)uVar6));
  *(char *)(param_1 + 0x37) = *(char *)(param_1 + 0x37) + (char)uVar2;
  *(char *)((int)unaff_ESI + 0x37) =
       *(char *)((int)unaff_ESI + 0x37) + (char)((uint)(iVar5 + -2) >> 8);
  cVar11 = (char)(uVar2 >> 8);
  *(char *)((int)unaff_ESI + 0x37) = *(char *)((int)unaff_ESI + 0x37) + cVar11;
  iVar5 = iVar5 + -4;
  *(char *)((int)unaff_ESI + -0x4affb7c9) =
       *(char *)((int)unaff_ESI + -0x4affb7c9) + (char)unaff_EBX;
  bVar1 = 9 < ((byte)iVar5 & 0xf) | bVar1;
  uVar6 = CONCAT31((int3)((uint)iVar5 >> 8),(byte)iVar5 + bVar1 * '\x06') & 0xffffff0f;
  iVar5 = CONCAT22((short)(uVar6 >> 0x10),CONCAT11((char)((uint)iVar5 >> 8) + bVar1,(char)uVar6)) +
          -1;
  bVar4 = (byte)iVar5;
  cVar9 = (char)((uint)param_1 >> 8) + bVar4;
  bVar1 = 9 < (bVar4 & 0xf) | bVar1;
  uVar6 = CONCAT31((int3)((uint)iVar5 >> 8),bVar4 + bVar1 * '\x06') & 0xffffff0f;
  iVar5 = CONCAT22((short)(uVar6 >> 0x10),CONCAT11((char)((uint)iVar5 >> 8) + bVar1,(char)uVar6)) +
          -1;
  puVar10 = (uint *)CONCAT31((int3)(uVar2 >> 8),(char)uVar2 + cVar11);
  bVar1 = 9 < ((byte)iVar5 & 0xf) | bVar1;
  uVar6 = CONCAT31((int3)((uint)iVar5 >> 8),(byte)iVar5 + bVar1 * '\x06') & 0xffffff0f;
  *unaff_EBX = *unaff_EBX + cVar9;
  *(char *)(unaff_EBP + 0x38) = *(char *)(unaff_EBP + 0x38) + cVar11;
  pcVar7 = (char *)((CONCAT22((short)(uVar6 >> 0x10),
                              CONCAT11((char)((uint)iVar5 >> 8) + bVar1,(char)uVar6)) - 1U ^ 0x38) -
                   2);
  *pcVar7 = *pcVar7 + (char)pcVar7;
  *puVar10 = (uint)(pcVar7 + *puVar10);
  bRam0d0d0d0d = bRam0d0d0d0d | bVar8;
  *puVar10 = *puVar10 | CONCAT22((short)((uint)param_1 >> 0x10),CONCAT11(cVar9,bVar8));
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


