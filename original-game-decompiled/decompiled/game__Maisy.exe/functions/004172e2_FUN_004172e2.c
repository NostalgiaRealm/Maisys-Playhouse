
/* ==== FUN_004172e2 @ 004172e2 ==== 
 * signature: undefined4 __fastcall FUN_004172e2(int param_1, byte param_2)
 * body: 004172e2-004172e3
 */

/* WARNING: Instruction at (ram,0x0041733d) overlaps instruction at (ram,0x0041733c)
    */

undefined4 __fastcall FUN_004172e2(int param_1,byte param_2)

{
  byte *pbVar1;
  byte bVar2;
  code *pcVar3;
  undefined8 uVar4;
  byte bVar5;
  byte bVar7;
  uint in_EAX;
  undefined2 uVar8;
  undefined4 uVar6;
  uint uVar9;
  char unaff_BL;
  int unaff_EBP;
  byte *unaff_ESI;
  bool in_PF;
  
  uVar8 = (undefined2)(in_EAX >> 0x10);
  if (in_PF) {
    *(char *)(unaff_EBP + -0x3d) = *(char *)(unaff_EBP + -0x3d) + unaff_BL;
    return CONCAT22(uVar8,0x69);
  }
  uVar9 = param_1 + 1;
  pbVar1 = (byte *)(param_1 + 0x26004173);
  bVar2 = *pbVar1;
  bVar5 = (byte)in_EAX;
  bVar7 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar5;
  if (CARRY1(bVar2,bVar5)) {
    if (*pbVar1 != 0 && SCARRY1(bVar7,bVar5) == (char)*pbVar1 < '\0') {
switchD_00417324_caseD_2:
      return in_EAX & 0xffff0000;
    }
    if (*pbVar1 == 0) {
      return CONCAT22(uVar8,0x32d5);
    }
    in_EAX = in_EAX - 0x10;
    if (0xf < in_EAX) goto switchD_00417324_caseD_2;
  }
  else {
    pbVar1 = (byte *)(in_EAX + 0x8f004172);
    bVar2 = *pbVar1;
    *pbVar1 = *pbVar1 + (byte)uVar9;
    if (CARRY1(bVar2,(byte)uVar9)) {
      uVar4 = rdpmc(uVar9);
      in_EAX = (uint)uVar4;
    }
    else {
      bVar2 = *unaff_ESI;
      bVar7 = (byte)(in_EAX >> 8);
      *unaff_ESI = *unaff_ESI + bVar7;
      if (!CARRY1(bVar2,bVar7)) {
        pbVar1 = unaff_ESI + 0x26004172;
        bVar2 = *pbVar1;
        *pbVar1 = *pbVar1 + param_2;
        if (!CARRY1(bVar2,param_2)) {
          *(char *)(unaff_EBP + -0x33ffbe8e) = *(char *)(unaff_EBP + -0x33ffbe8e) + unaff_BL;
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return uVar6;
        }
        goto switchD_00417344_switchD;
      }
    }
  }
  uVar9 = (uint)(&switchD_00417344::switchdataD_004173f8)[in_EAX];
switchD_00417344_switchD:
                    /* WARNING: Could not recover jumptable at 0x00417344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (*(code *)(&switchD_00417344::switchdataD_004173cc)[uVar9])();
  return uVar6;
}


