
/* ==== FUN_004172b2 @ 004172b2 ==== 
 * signature: uint __fastcall FUN_004172b2(uint param_1, int param_2)
 * body: 004172b2-004172b3
 */

/* WARNING: Instruction at (ram,0x0041733d) overlaps instruction at (ram,0x0041733c)
    */

uint __fastcall FUN_004172b2(uint param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  code *pcVar3;
  undefined8 uVar4;
  byte bVar5;
  char *in_EAX;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  byte bVar9;
  char unaff_BL;
  int unaff_EBP;
  byte *unaff_ESI;
  int *unaff_EDI;
  bool in_CF;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  
  bVar9 = (char)param_2 + 1;
  if (!in_CF) {
    *(char *)(param_1 + 0x72) = *(char *)(param_1 + 0x72) + (char)param_1;
    in_EAX[0x72] = in_EAX[0x72] + bVar9;
    *(char *)((int)unaff_EDI + 0x72) = *(char *)((int)unaff_EDI + 0x72) + bVar9;
    unaff_ESI[0x72] = unaff_ESI[0x72] + unaff_BL;
    bVar5 = (byte)((uint)in_EAX >> 8);
    *(char *)(unaff_EBP + 0x72) = *(char *)(unaff_EBP + 0x72) + bVar5;
    pcVar7 = (char *)(param_2 + 0x42 + (int)unaff_ESI * 2);
    *pcVar7 = *pcVar7 + (char)(param_1 + 5 >> 8);
    bVar2 = *unaff_ESI;
    *unaff_ESI = *unaff_ESI + bVar5;
    if (CARRY1(bVar2,bVar5)) {
      pcVar7 = (char *)((uint)in_EAX & 0xffffff08);
      if ((int)pcVar7 < 0xe) {
        if (pcVar7 == &DAT_0000000d) {
          return 0x66;
        }
        switch(pcVar7) {
        case (char *)0x0:
          return (uint)in_EAX & 0xffff0000;
        }
        goto switchD_00417324_caseD_2;
      }
      bVar12 = SBORROW4((int)pcVar7,0x1fd);
      bVar11 = (int)(pcVar7 + -0x1fd) < 0;
      bVar10 = pcVar7 == (char *)0x1fd;
    }
    else {
      *in_EAX = *in_EAX + (char)in_EAX;
      *unaff_EDI = (int)(in_EAX + *unaff_EDI);
      iVar6 = CONCAT31((int3)((uint)in_EAX >> 8),(char)in_EAX + (char)*unaff_EDI);
      iVar6 = iVar6 + *(int *)((int)unaff_EDI + iVar6);
      in_EAX = (char *)(iVar6 + -0x74f9f8f9);
      *(int *)(param_2 + 0x73) = *(int *)(param_2 + 0x73) + 1;
      uVar8 = param_1 + 6;
      pbVar1 = (byte *)(param_1 + 0x26004178);
      bVar2 = *pbVar1;
      bVar5 = (byte)in_EAX;
      bVar12 = SCARRY1(*pbVar1,bVar5);
      *pbVar1 = *pbVar1 + bVar5;
      bVar11 = (char)*pbVar1 < '\0';
      bVar10 = *pbVar1 == 0;
      pcVar7 = in_EAX;
      if (!CARRY1(bVar2,bVar5)) {
        pbVar1 = (byte *)(iVar6 + 0x1a064879);
        bVar2 = *pbVar1;
        *pbVar1 = *pbVar1 + (byte)uVar8;
        if (CARRY1(bVar2,(byte)uVar8)) {
          uVar4 = rdpmc(uVar8);
          in_EAX = (char *)uVar4;
        }
        else {
          bVar2 = *unaff_ESI;
          bVar5 = (byte)((uint)in_EAX >> 8);
          *unaff_ESI = *unaff_ESI + bVar5;
          if (!CARRY1(bVar2,bVar5)) {
            pbVar1 = unaff_ESI + 0x26004172;
            bVar2 = *pbVar1;
            *pbVar1 = *pbVar1 + bVar9;
            if (!CARRY1(bVar2,bVar9)) {
              *(char *)(unaff_EBP + -0x33ffbe8e) = *(char *)(unaff_EBP + -0x33ffbe8e) + unaff_BL;
              pcVar3 = (code *)swi(3);
              uVar8 = (*pcVar3)();
              return uVar8;
            }
            goto switchD_00417344_switchD;
          }
        }
        goto code_r0x0041733c;
      }
    }
    if (!bVar10 && bVar12 == bVar11) {
switchD_00417324_caseD_2:
      return (uint)pcVar7 & 0xffff0000;
    }
    if (bVar10) {
      return CONCAT22((short)((uint)pcVar7 >> 0x10),0x32d5);
    }
    in_EAX = pcVar7 + -0x10;
    pcVar7 = in_EAX;
    if ((char *)0xf < in_EAX) goto switchD_00417324_caseD_2;
  }
code_r0x0041733c:
  uVar8 = (uint)(byte)in_EAX[0x4173f8];
switchD_00417344_switchD:
                    /* WARNING: Could not recover jumptable at 0x00417344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar8 = (*(code *)(&switchD_00417344::switchdataD_004173cc)[uVar8])();
  return uVar8;
}


