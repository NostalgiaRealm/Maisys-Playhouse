
/* ==== FUN_00457a12 @ 00457a12 ==== 
 * signature: undefined __fastcall FUN_00457a12(undefined4 param_1, char * param_2)
 * body: 00457a12-00457a13
 */

/* WARNING: Instruction at (ram,0x00457aac) overlaps instruction at (ram,0x00457aaa)
    */

void __fastcall FUN_00457a12(undefined4 param_1,char *param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  uint uVar3;
  code *pcVar4;
  byte bVar5;
  char cVar9;
  char *in_EAX;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar15;
  undefined2 uVar13;
  byte bVar16;
  byte bVar17;
  undefined4 unaff_EBX;
  int unaff_EBP;
  undefined1 *unaff_ESI;
  char *unaff_EDI;
  bool bVar18;
  bool bVar19;
  uint uVar14;
  
  bVar15 = (byte)((uint)in_EAX >> 8);
  param_2[-0x36ffba9b] = param_2[-0x36ffba9b] + bVar15;
  bVar10 = (byte)param_1;
  *unaff_EDI = *unaff_EDI + bVar10;
  bVar17 = (byte)((uint)unaff_EBX >> 8);
  *in_EAX = *in_EAX + bVar17;
  cVar9 = (char)((uint)param_2 >> 8);
  *(char *)(unaff_EBP + 0x70) = *(char *)(unaff_EBP + 0x70) + cVar9;
  bVar5 = (byte)param_2;
  in_EAX[-0x42ffba94] = in_EAX[-0x42ffba94] + bVar5;
  uVar13 = SUB42(in_EAX,0);
  uVar2 = in(uVar13);
  *(undefined4 *)unaff_EDI = uVar2;
  *param_2 = *param_2 + cVar9;
  out(*unaff_ESI,uVar13);
  bVar11 = (byte)((uint)param_1 >> 8);
  unaff_EDI[-0x24ffba8e] = unaff_EDI[-0x24ffba8e] + bVar11;
  pbVar1 = unaff_ESI + 5;
  out(*(undefined4 *)(unaff_ESI + 1),uVar13);
  param_2[(int)pbVar1 * 2 + 0x70f80045] = param_2[(int)pbVar1 * 2 + 0x70f80045] + bVar17;
  bVar12 = (byte)in_EAX;
  bVar16 = bVar15 + bVar5;
  uVar14 = CONCAT22((short)((uint)in_EAX >> 0x10),CONCAT11(bVar16,bVar12));
  if (SCARRY1(bVar15,bVar5)) {
    bVar15 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar11;
    if (!CARRY1(bVar15,bVar11)) {
      uVar3 = (uint)CARRY1(bVar15,bVar11);
      pcVar8 = param_2 + 0x15151515;
      pcVar6 = pcVar8 + uVar3;
      uVar3 = (uint)((char *)0xeaeaeaea < param_2 || CARRY4((uint)pcVar8,uVar3));
      pcVar8 = pcVar6 + 0x15151515;
      pcVar7 = pcVar8 + uVar3;
      uVar3 = (uint)((char *)0xeaeaeaea < pcVar6 || CARRY4((uint)pcVar8,uVar3));
      pcVar8 = pcVar7 + 0x15151515;
      pcVar6 = pcVar8 + uVar3;
      uVar3 = (uint)((char *)0xeaeaeaea < pcVar7 || CARRY4((uint)pcVar8,uVar3));
      bVar18 = (char *)0xeaeaeaea < pcVar6 || CARRY4((uint)(pcVar6 + 0x15151515),uVar3);
      param_2 = pcVar6 + 0x15151515 + uVar3;
code_r0x00457aac:
      pcVar8 = param_2 + 0x15151515;
      pcVar6 = pcVar8 + bVar18;
      uVar3 = (uint)((char *)0xeaeaeaea < param_2 || CARRY4((uint)pcVar8,(uint)bVar18));
      pcVar8 = pcVar6 + 0x15151515;
      pcVar7 = pcVar8 + uVar3;
      uVar3 = (uint)((char *)0xeaeaeaea < pcVar6 || CARRY4((uint)pcVar8,uVar3));
      pcVar8 = pcVar7 + 0x15151515;
      pcVar6 = pcVar8 + uVar3;
      uVar3 = (uint)((char *)0xeaeaeaea < pcVar7 || CARRY4((uint)pcVar8,uVar3));
      pcVar8 = pcVar6 + 0x15151515;
      pcVar7 = pcVar8 + uVar3;
      uVar3 = (uint)((char *)0xeaeaeaea < pcVar6 || CARRY4((uint)pcVar8,uVar3));
      pcVar8 = pcVar7 + 0x15151515;
      pcVar6 = pcVar8 + uVar3;
      uVar3 = (uint)((char *)0xeaeaeaea < pcVar7 || CARRY4((uint)pcVar8,uVar3));
      pcVar8 = pcVar6 + 0x15151515;
      pcVar7 = pcVar8 + uVar3;
      uVar3 = (uint)((char *)0xeaeaeaea < pcVar6 || CARRY4((uint)pcVar8,uVar3));
      pcVar8 = pcVar7 + 0x15151515;
      pcVar6 = pcVar8 + uVar3;
      uVar3 = (uint)((char *)0xeaeaeaea < pcVar7 || CARRY4((uint)pcVar8,uVar3));
      bVar18 = (char *)0xeaf3f4f5 < pcVar6 || CARRY4((uint)(pcVar6 + 0x150c0b0a),uVar3);
      pcVar8 = pcVar6 + 0x150c0b0a + uVar3;
      goto code_r0x00457ad4;
    }
    pbVar1 = (byte *)(unaff_EDI + -0x7ffba87);
    bVar15 = (byte)unaff_EBX;
    bVar18 = CARRY1(*pbVar1,bVar15);
    bVar11 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar15;
    if (!SCARRY1(bVar11,bVar15)) {
      pbVar1 = (byte *)(unaff_EBP + 0x4c004580);
      bVar18 = CARRY1(*pbVar1,bVar10);
      *pbVar1 = *pbVar1 + bVar10;
      if (-1 < (char)*pbVar1) goto code_r0x00457aa8;
      bVar18 = CARRY1(bVar17,bVar16);
      if (-1 < (char)(bVar17 + bVar16)) goto code_r0x00457aac;
      unaff_ESI[0x456a] = unaff_ESI[0x456a] + bVar5;
      bVar18 = CARRY4(uRam15151515,uVar14);
      uRam15151515 = uRam15151515 + uVar14;
      pcVar8 = param_2 + 0x4030215;
      pcVar6 = pcVar8 + bVar18;
      uVar3 = (uint)((char *)0xfbfcfdea < param_2 || CARRY4((uint)pcVar8,(uint)bVar18));
      pcVar8 = pcVar6 + 0x7061505;
      pcVar7 = pcVar8 + uVar3;
      uVar3 = (uint)((char *)0xf8f9eafa < pcVar6 || CARRY4((uint)pcVar8,uVar3));
      pcVar8 = pcVar7 + 0x15081515;
      pcVar6 = pcVar8 + uVar3;
      uVar3 = (uint)((char *)0xeaf7eaea < pcVar7 || CARRY4((uint)pcVar8,uVar3));
      pcVar8 = pcVar6 + 0x15151509;
      pcVar7 = pcVar8 + uVar3;
      uVar3 = (uint)((char *)0xeaeaeaf6 < pcVar6 || CARRY4((uint)pcVar8,uVar3));
      pcVar8 = pcVar7 + 0x15151515;
      pcVar6 = pcVar8 + uVar3;
      uVar3 = (uint)((char *)0xeaeaeaea < pcVar7 || CARRY4((uint)pcVar8,uVar3));
      pcVar8 = pcVar6 + 0x15151515;
      pcVar7 = pcVar8 + uVar3;
      uVar3 = (uint)((char *)0xeaeaeaea < pcVar6 || CARRY4((uint)pcVar8,uVar3));
      pcVar8 = pcVar7 + 0x15151515;
      pcVar6 = pcVar8 + uVar3;
      uVar3 = (uint)((char *)0xeaeaeaea < pcVar7 || CARRY4((uint)pcVar8,uVar3));
      pcVar8 = pcVar6 + 0x15151515;
      pcVar7 = pcVar8 + uVar3;
      uVar3 = (uint)((char *)0xeaeaeaea < pcVar6 || CARRY4((uint)pcVar8,uVar3));
      bVar18 = (char *)0xeaeaeaea < pcVar7 || CARRY4((uint)(pcVar7 + 0x15151515),uVar3);
      param_2 = pcVar7 + 0x15151515 + uVar3;
    }
  }
  else {
    pcVar8 = param_2 + 0x15151515;
    pcVar6 = pcVar8 + CARRY1(bVar15,bVar5);
    uVar3 = (uint)((char *)0xeaeaeaea < param_2 || CARRY4((uint)pcVar8,(uint)CARRY1(bVar15,bVar5)));
    pcVar8 = pcVar6 + 0x15151515;
    pcVar7 = pcVar8 + uVar3;
    uVar3 = (uint)((char *)0xeaeaeaea < pcVar6 || CARRY4((uint)pcVar8,uVar3));
    pcVar8 = pcVar7 + 0x15151515;
    pcVar6 = pcVar8 + uVar3;
    uVar3 = (uint)((char *)0xeaeaeaea < pcVar7 || CARRY4((uint)pcVar8,uVar3));
    bVar18 = (char *)0xeaeaeaea < pcVar6 || CARRY4((uint)(pcVar6 + 0x15151515),uVar3);
    param_2 = pcVar6 + 0x15151515 + uVar3;
code_r0x00457aa8:
    pcVar8 = param_2 + 0x15151515;
    pcVar6 = pcVar8 + bVar18;
    uVar3 = (uint)((char *)0xeaeaeaea < param_2 || CARRY4((uint)pcVar8,(uint)bVar18));
    pcVar8 = pcVar6 + 0x15151515;
    pcVar7 = pcVar8 + uVar3;
    uVar3 = (uint)((char *)0xeaeaeaea < pcVar6 || CARRY4((uint)pcVar8,uVar3));
    pcVar8 = pcVar7 + 0x15151515;
    pcVar6 = pcVar8 + uVar3;
    uVar3 = (uint)((char *)0xeaeaeaea < pcVar7 || CARRY4((uint)pcVar8,uVar3));
    pcVar8 = pcVar6 + 0x15151515;
    pcVar7 = pcVar8 + uVar3;
    uVar3 = (uint)((char *)0xeaeaeaea < pcVar6 || CARRY4((uint)pcVar8,uVar3));
    pcVar8 = pcVar7 + 0x15151515;
    pcVar6 = pcVar8 + uVar3;
    uVar3 = (uint)((char *)0xeaeaeaea < pcVar7 || CARRY4((uint)pcVar8,uVar3));
    pcVar8 = pcVar6 + 0x15151515;
    pcVar7 = pcVar8 + uVar3;
    uVar3 = (uint)((char *)0xeaeaeaea < pcVar6 || CARRY4((uint)pcVar8,uVar3));
    param_2 = pcVar7 + 0x15151515 +
              (uint)((char *)0xeaeaeaea < pcVar7 || CARRY4((uint)(pcVar7 + 0x15151515),uVar3)) +
              uVar3 + 0x15151515;
    bVar18 = false;
  }
  pcVar8 = param_2 + 0x15151515;
  pcVar6 = pcVar8 + bVar18;
  uVar3 = (uint)((char *)0xeaeaeaea < param_2 || CARRY4((uint)pcVar8,(uint)bVar18));
  pcVar8 = pcVar6 + 0x15151515;
  pcVar7 = pcVar8 + uVar3;
  uVar3 = (uint)((char *)0xeaeaeaea < pcVar6 || CARRY4((uint)pcVar8,uVar3));
  pcVar8 = pcVar7 + 0x15151515;
  pcVar6 = pcVar8 + uVar3;
  uVar3 = (uint)((char *)0xeaeaeaea < pcVar7 || CARRY4((uint)pcVar8,uVar3));
  pcVar8 = pcVar6 + 0x15151515;
  pcVar7 = pcVar8 + uVar3;
  uVar3 = (uint)((char *)0xeaeaeaea < pcVar6 || CARRY4((uint)pcVar8,uVar3));
  pcVar8 = pcVar7 + 0x15151515;
  pcVar6 = pcVar8 + uVar3;
  uVar3 = (uint)((char *)0xeaeaeaea < pcVar7 || CARRY4((uint)pcVar8,uVar3));
  pcVar8 = pcVar6 + 0x15151515;
  pcVar7 = pcVar8 + uVar3;
  uVar3 = (uint)((char *)0xeaeaeaea < pcVar6 || CARRY4((uint)pcVar8,uVar3));
  pcVar8 = pcVar7 + 0x15151515;
  pcVar6 = pcVar8 + uVar3;
  uVar3 = (uint)((char *)0xeaeaeaea < pcVar7 || CARRY4((uint)pcVar8,uVar3));
  pcVar8 = pcVar6 + 0x15151515;
  pcVar7 = pcVar8 + uVar3;
  uVar3 = (uint)((char *)0xeaeaeaea < pcVar6 || CARRY4((uint)pcVar8,uVar3));
  bVar18 = false;
  pcVar8 = (char *)((uint)(pcVar7 + 0x15151515 +
                          (uint)((char *)0xeaeaeaea < pcVar7 ||
                                CARRY4((uint)(pcVar7 + 0x15151515),uVar3)) + uVar3 + 0xb0a1515) |
                   0x15);
code_r0x00457ad4:
  bVar18 = (char *)0xf0f1eaf2 < pcVar8 || CARRY4((uint)(pcVar8 + 0xf0e150d),(uint)bVar18);
  bVar19 = CARRY1((byte)uRam15151515,bVar12);
  bVar12 = (byte)uRam15151515 + bVar12;
  uRam15151515._0_1_ = bVar12 + bVar18;
  iRam15151312 = iRam15151312 + uVar14 + (uint)(bVar19 || CARRY1(bVar12,bVar18));
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


