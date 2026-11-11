
/* ==== FUN_11027f66 @ 11027f66 ==== 
 * signature: undefined __fastcall FUN_11027f66(char * param_1, byte * param_2)
 * body: 11027f66-11027f67
 */

/* WARNING: Instruction at (ram,0x11027f89) overlaps instruction at (ram,0x11027f87)
    */
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_11027f66(char *param_1,byte *param_2)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  code *pcVar6;
  byte bVar7;
  byte *in_EAX;
  byte *pbVar8;
  char *unaff_EBX;
  byte *unaff_EBP;
  uint unaff_ESI;
  uint unaff_EDI;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  undefined3 uVar9;
  
  bVar7 = *(byte *)(unaff_ESI + 2);
  bVar10 = bVar7 < 0x11;
  bVar13 = SBORROW1(bVar7,'\x11');
  bVar12 = (char)(bVar7 - 0x11) < '\0';
  bVar11 = bVar7 == 0x11;
  if ((char)bVar7 < '\x12') {
    if ('\x11' < (char)bVar7) {
      puVar1 = (uint *)(unaff_EBX + -0x32eefd82);
      uVar3 = (uint)bVar10;
      uVar5 = *puVar1 + unaff_EDI;
      bVar10 = CARRY4(*puVar1,unaff_EDI) || CARRY4(uVar5,uVar3);
      bVar13 = SCARRY4(*puVar1,unaff_EDI) != SCARRY4(uVar5,uVar3);
      *puVar1 = uVar5 + uVar3;
      bVar12 = (int)*puVar1 < 0;
      bVar11 = *puVar1 == 0;
      goto code_r0x11027f79;
    }
  }
  else {
    puVar1 = (uint *)(unaff_ESI + 0xbb11027e);
    uVar3 = (uint)bVar10;
    puVar4 = &stack0x00000000 + *puVar1;
    bVar10 = CARRY4(*puVar1,(uint)&stack0x00000000) || CARRY4((uint)puVar4,uVar3);
    bVar13 = SCARRY4(*puVar1,(int)&stack0x00000000) != SCARRY4((int)puVar4,uVar3);
    *puVar1 = (uint)(puVar4 + uVar3);
    bVar12 = (int)*puVar1 < 0;
    bVar11 = *puVar1 == 0;
  }
  if (!bVar11 && bVar13 == bVar12) {
    uVar3 = (uint)bVar10;
    pbVar8 = in_EAX + (int)param_1;
    bVar10 = CARRY4((uint)in_EAX,(uint)param_1) || CARRY4((uint)pbVar8,uVar3);
    bVar13 = SCARRY4((int)in_EAX,(int)param_1) != SCARRY4((int)pbVar8,uVar3);
    in_EAX = pbVar8 + uVar3;
    bVar12 = (int)in_EAX < 0;
    bVar11 = in_EAX == (byte *)0x0;
  }
code_r0x11027f79:
  if (!bVar11 && bVar13 == bVar12) {
    uVar3 = (uint)bVar10;
    pbVar8 = in_EAX + (int)param_2;
    bVar10 = CARRY4((uint)in_EAX,(uint)param_2) || CARRY4((uint)pbVar8,uVar3);
    bVar13 = SCARRY4((int)in_EAX,(int)param_2) != SCARRY4((int)pbVar8,uVar3);
    in_EAX = pbVar8 + uVar3;
    bVar12 = (int)in_EAX < 0;
    bVar11 = in_EAX == (byte *)0x0;
  }
  if (!bVar11 && bVar13 == bVar12) {
    uVar3 = (uint)bVar10;
    pbVar8 = in_EAX + unaff_ESI;
    bVar10 = CARRY4((uint)in_EAX,unaff_ESI) || CARRY4((uint)pbVar8,uVar3);
    bVar13 = SCARRY4((int)in_EAX,unaff_ESI) != SCARRY4((int)pbVar8,uVar3);
    in_EAX = pbVar8 + uVar3;
    bVar12 = (int)in_EAX < 0;
    bVar11 = in_EAX == (byte *)0x0;
  }
  if (!bVar11 && bVar13 == bVar12) {
    uVar3 = (uint)bVar10;
    pbVar8 = in_EAX + unaff_EDI;
    bVar10 = CARRY4((uint)in_EAX,unaff_EDI) || CARRY4((uint)pbVar8,uVar3);
    bVar13 = SCARRY4((int)in_EAX,unaff_EDI) != SCARRY4((int)pbVar8,uVar3);
    bVar12 = (int)(pbVar8 + uVar3) < 0;
    bVar11 = pbVar8 + uVar3 == (byte *)0x0;
  }
  bVar7 = (byte)unaff_EBP;
  if (bVar11 || bVar13 != bVar12) {
    if (bVar11 || bVar13 != bVar12) {
      *(byte **)unaff_EBP = unaff_EBP + (uint)bVar10 + *(int *)unaff_EBP;
    }
    *(char **)unaff_EBP = param_1 + *(int *)unaff_EBP;
    *param_2 = *param_2 | bVar7;
    param_1 = param_1 + *(int *)unaff_EBP;
    unaff_EBP[(int)param_1] = unaff_EBP[(int)param_1] | bVar7;
  }
  else {
    *(undefined1 **)(unaff_EBP + 0x7f) =
         &stack0x00000000 + (uint)bVar10 + *(int *)(unaff_EBP + 0x7f);
    *param_1 = *param_1 + bVar7;
    *unaff_EBP = *unaff_EBP | (byte)param_1;
    cVar2 = *unaff_EBX;
    uVar9 = (undefined3)((uint)unaff_EBP >> 8);
    pbVar8 = (byte *)CONCAT31(uVar9,bVar7 + cVar2);
    *pbVar8 = *pbVar8 | (byte)param_1;
    unaff_EBP = (byte *)CONCAT31(uVar9,bVar7 + cVar2 + '\b');
  }
  *unaff_EBP = *unaff_EBP | (byte)param_1;
  *unaff_EBP = *unaff_EBP | (byte)param_1;
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


