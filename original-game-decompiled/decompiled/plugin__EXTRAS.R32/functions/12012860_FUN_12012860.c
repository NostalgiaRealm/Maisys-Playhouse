
/* ==== FUN_12012860 @ 12012860 ==== 
 * signature: undefined4 __cdecl FUN_12012860(int param_1, ushort * param_2)
 * body: 12012860-12012c13
 */

undefined4 __cdecl FUN_12012860(int param_1,ushort *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  short *psVar10;
  float10 fVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int local_88;
  int iStack_84;
  short local_80;
  double local_7e;
  int local_54 [21];
  
  bVar3 = false;
  bVar1 = false;
  bVar2 = false;
  switch(*(undefined4 *)(param_1 + 2)) {
  case 1:
    FUN_12028238();
    if ((*(int *)(param_2 + 2) == 0x6b6e6c21) ||
       ((uVar6 = *(uint *)(param_1 + 0xc), (uVar6 & 8) != 0 &&
        (*(int *)(param_1 + 0x2a) != local_54[0])))) {
      bVar2 = false;
    }
    else if (((uVar6 & 1) == 0) || (*param_2 == 0)) {
      if (((uVar6 & 4) == 0) || ((uint)*param_2 != *(uint *)(param_1 + 0x12))) {
        bVar2 = bVar3;
        if ((uVar6 & 2) != 0) {
          if (*(ushort *)(param_1 + 0x86) == 0xfffe) {
            uVar6 = 0;
            if (*(char **)(param_1 + 0x24) != (char *)0x0) {
              uVar6 = *(uint *)(param_1 + 0x20);
            }
            if ((uVar6 != 0) &&
               (uVar4 = FUN_12011570(*(undefined4 *)(param_1 + 0x7c),*(char **)(param_1 + 0x24),
                                     uVar6,0,1), uVar4 == *param_2)) {
              bVar2 = true;
            }
          }
          else if (*param_2 == *(ushort *)(param_1 + 0x86)) {
            bVar2 = true;
          }
        }
      }
      else {
        bVar2 = true;
      }
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      return 0;
    }
    local_80 = 1;
    uVar6 = (uint)*param_2;
    break;
  case 2:
  case 3:
    FUN_12028238();
    if (*(int *)(param_1 + 2) == 2) {
      if (*(ushort *)(param_1 + 0x84) != DAT_120376d0) {
        uVar6 = *(uint *)(param_1 + 0xc);
        if ((((uVar6 & 1) != 0) && (DAT_120376d0 != 0)) ||
           (((uVar6 & 4) != 0 && (*(uint *)(param_1 + 0x12) == (uint)DAT_120376d0))))
        goto LAB_120129ef;
        if ((uVar6 & 2) != 0) {
          if (*(ushort *)(param_1 + 0x86) == 0xfffe) {
            uVar6 = 0;
            if (*(char **)(param_1 + 0x24) != (char *)0x0) {
              uVar6 = *(uint *)(param_1 + 0x20);
            }
            if ((uVar6 != 0) &&
               (uVar4 = FUN_12011570(*(undefined4 *)(param_1 + 0x7c),*(char **)(param_1 + 0x24),
                                     uVar6,0,1), uVar4 == DAT_120376d0)) {
LAB_120129ef:
              bVar1 = true;
            }
          }
          else if (DAT_120376d0 == *(ushort *)(param_1 + 0x86)) goto LAB_120129ef;
        }
        uVar4 = DAT_120376d0;
        bVar2 = bVar1;
        if (bVar1) {
LAB_12012abb:
          local_80 = 1;
          local_7e = (double)CONCAT44(local_7e._4_4_,(uint)uVar4);
          bVar2 = bVar1;
        }
      }
    }
    else if (*(int *)(param_1 + 2) == 3) {
      uVar6 = *(uint *)(param_1 + 0xc);
      if (((((uVar6 & 1) == 0) || (*(ushort *)(param_1 + 0x84) == 0)) ||
          (DAT_120376d0 == *(ushort *)(param_1 + 0x84))) &&
         ((((uVar6 & 4) == 0 || (DAT_120376d0 == *(ushort *)(param_1 + 0x84))) ||
          (*(uint *)(param_1 + 0x12) != (uint)*(ushort *)(param_1 + 0x84))))) {
        if (((uVar6 & 2) != 0) && (uVar4 = *(ushort *)(param_1 + 0x84), DAT_120376d0 != uVar4)) {
          uVar5 = *(ushort *)(param_1 + 0x86);
          if (uVar5 == 0xfffe) {
            uVar6 = 0;
            if (*(char **)(param_1 + 0x24) != (char *)0x0) {
              uVar6 = *(uint *)(param_1 + 0x20);
            }
            if (uVar6 == 0) goto LAB_12012aa7;
            uVar5 = FUN_12011570(*(undefined4 *)(param_1 + 0x7c),*(char **)(param_1 + 0x24),uVar6,0,
                                 1);
          }
          if (uVar4 == uVar5) goto LAB_12012aa5;
        }
      }
      else {
LAB_12012aa5:
        bVar1 = true;
      }
LAB_12012aa7:
      bVar2 = bVar1;
      if (bVar1) {
        uVar4 = *(ushort *)(param_1 + 0x84);
        goto LAB_12012abb;
      }
    }
    *(ushort *)(param_1 + 0x84) = DAT_120376d0;
    goto switchD_1201287f_caseD_7;
  case 4:
  case 10:
    FUN_12028238();
    local_80 = 0xf;
    bVar2 = true;
    fVar11 = FUN_120162f0(DAT_120376d4);
    local_7e = (double)fVar11;
    goto switchD_1201287f_caseD_7;
  case 5:
    bVar2 = true;
    FUN_12028238();
    local_80 = 1;
    FUN_120162f0(DAT_120376d4);
    lVar12 = __ftol();
    uVar6 = (uint)lVar12;
    break;
  case 6:
    bVar2 = true;
    local_80 = 1;
    uVar6 = *(uint *)(param_2 + 2);
    break;
  default:
    goto switchD_1201287f_caseD_7;
  }
  local_7e = (double)CONCAT44(local_7e._4_4_,uVar6);
switchD_1201287f_caseD_7:
  if (!bVar2) {
    return 0;
  }
  pcVar7 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x16,&local_88);
  psVar10 = &local_80;
  if (*(short *)(param_1 + 0x50) != 0x6e) {
    psVar10 = (short *)(param_1 + 0x50);
  }
  piVar15 = local_54;
  uVar9 = *(undefined4 *)(param_1 + 0x3a);
  iVar13 = param_1 + 0x3e;
  iVar14 = param_1 + 0x2e;
  uVar8 = FUN_12027340(param_1);
  DAT_12039a9c = (*pcVar7)(local_88,uVar8,iVar13,iVar14,psVar10,uVar9,piVar15);
  pcVar7 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x17,&iStack_84);
  piVar15 = local_54;
  uVar9 = FUN_12027340(param_1);
  DAT_12039a9c = (*pcVar7)(iStack_84,uVar9,piVar15);
  return DAT_12039a9c;
}


