
/* ==== FUN_12001000 @ 12001000 ==== 
 * signature: uint __cdecl FUN_12001000(int param_1, uint * param_2, short * param_3, short * param_4)
 * body: 12001000-12001802
 */

uint __cdecl FUN_12001000(int param_1,uint *param_2,short *param_3,short *param_4)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 uVar6;
  short *psVar7;
  undefined2 *puVar8;
  short *psVar9;
  undefined4 uVar10;
  int *piVar11;
  char local_cd;
  uint local_cc;
  int iStack_c8;
  code *pcStack_c4;
  int iStack_c0;
  int iStack_bc;
  undefined2 uStack_b8;
  undefined4 uStack_b6;
  undefined4 uStack_b2;
  int local_ac [21];
  short sStack_58;
  uint uStack_56;
  short asStack_2c [22];
  
  local_cc = 0;
  local_cd = '\0';
  pcVar2 = (code *)FUN_12027370(param_1,0,0x2a,local_ac);
  DAT_12039a9c = (*pcVar2)(local_ac[0],&local_cd);
  *(undefined4 *)(param_1 + 0x14) = 0;
  uVar3 = FUN_120271d0(param_2,(uint *)s_value_120370b8);
  if ((char)uVar3 != '\0') {
    uVar3 = FUN_12001810(param_1,param_3,param_4);
    return uVar3;
  }
  uVar3 = FUN_120271d0(param_2,(uint *)s_count_120370a4);
  if ((char)uVar3 != '\0') {
    if ((local_cd != '\0') && (cVar1 = FUN_12001f90(param_1,param_2,param_3,param_4), cVar1 != '\0')
       ) {
      return DAT_12039a9c;
    }
    uStack_56 = 0;
    sStack_58 = 1;
    pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x3c),1,0,local_ac);
    DAT_12039a9c = (*pcVar2)(local_ac[0],param_1,param_4,&sStack_58);
    if (-1 < (int)uStack_56) {
      uVar6 = extraout_var;
      if (*(int *)(param_1 + 0x10) == 0) {
        FUN_12023290(param_1);
        uVar6 = extraout_var_00;
      }
      FUN_12023770(param_1,*(int *)(param_1 + 0x10),CONCAT22(uVar6,*(undefined2 *)(param_1 + 0xe)),
                   uStack_56);
      return 0;
    }
    *(undefined4 *)(param_1 + 0x14) = 4;
    return 0x10000;
  }
  uVar3 = FUN_120271d0(param_2,(uint *)s_insert_12037090);
  if ((((char)uVar3 != '\0') && (param_3 != (short *)0x0)) && (*param_3 == 1)) {
    if ((local_cd != '\0') && (cVar1 = FUN_12001f90(param_1,param_2,param_3,param_4), cVar1 != '\0')
       ) {
      return DAT_12039a9c;
    }
    if (*(int *)(param_3 + 1) < 1) {
      *(undefined4 *)(param_1 + 0x14) = 2;
      return 0x10000;
    }
    if (*(int *)(param_1 + 0x10) == 0) {
      FUN_12023290(param_1);
    }
    pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,9,local_ac);
    DAT_12039a9c = (*pcVar2)(local_ac[0],*(undefined4 *)(param_1 + 0x10),&local_cc);
    FUN_12023eb0(*(short *)(param_1 + 0xe),&sStack_58);
    FUN_12018ee0(param_1,param_4,&sStack_58);
    uVar3 = DAT_12039a9c;
    if (DAT_12039a9c == 0) {
      pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,4,local_ac);
      DAT_12039a9c = (*pcVar2)(local_ac[0],*(undefined4 *)(param_1 + 0x10),
                               *(undefined4 *)(param_3 + 1),&sStack_58);
      return DAT_12039a9c;
    }
    *(undefined4 *)(param_1 + 0x14) = 3;
    return uVar3;
  }
  uVar3 = FUN_120271d0(param_2,(uint *)s_sortascend_1203707c);
  if ((char)uVar3 != '\0') {
    if ((local_cd != '\0') && (cVar1 = FUN_12001f90(param_1,param_2,param_3,param_4), cVar1 != '\0')
       ) {
      return DAT_12039a9c;
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,9,local_ac);
      DAT_12039a9c = (*pcVar2)(local_ac[0],*(undefined4 *)(param_1 + 0x10),&local_cc);
    }
    if (local_cc != 0) {
      uVar4 = FUN_12023900(*(int *)(param_1 + 0x10),*(short *)(param_1 + 0xe),'\x01');
      *(int *)(param_1 + 0x14) = (int)(short)uVar4;
      return ((short)uVar4 == 0) - 1 & 0x10000;
    }
    *(undefined4 *)(param_1 + 0x14) = 1;
    return 0x10000;
  }
  uVar3 = FUN_120271d0(param_2,(uint *)s_sortdescend_12037068);
  if ((char)uVar3 == '\0') {
    uVar3 = FUN_120271d0(param_2,(uint *)s_shuffle_12037054);
    if ((char)uVar3 == '\0') {
      uVar3 = FUN_120271d0(param_2,(uint *)s_listtype_12037044);
      if ((char)uVar3 != '\0') {
        if ((local_cd != '\0') &&
           (cVar1 = FUN_12001f90(param_1,param_2,param_3,param_4), cVar1 != '\0')) {
          return DAT_12039a9c;
        }
        if ((int)*(short *)(param_1 + 0xe) != *(int *)(param_4 + 1)) {
          iVar5 = FUN_120230c0((short)*(int *)(param_4 + 1),'\0');
          if ((short)iVar5 == 0) {
            *(undefined4 *)(param_1 + 0x14) = 3;
            return 0x10000;
          }
          if (*(int *)(param_1 + 0x10) != 0) {
            FUN_120232f0(param_1,*(int *)(param_1 + 0x10));
            *(undefined4 *)(param_1 + 0x10) = 0;
          }
          iVar5 = *(int *)(param_4 + 1);
          *(undefined2 *)(param_1 + 0xe) = 0xffff;
          if (iVar5 != 0x69) {
            *(short *)(param_1 + 0xe) = (short)iVar5;
          }
          FUN_12023290(param_1);
        }
        return 0;
      }
      uVar3 = FUN_120271d0(param_2,(uint *)s_foralldo_12037030);
      if ((char)uVar3 == '\0') {
        return 0x10000;
      }
      if ((*param_4 == 0x69) && (*(int *)(param_4 + 1) != 0)) {
        if ((local_cd != '\0') &&
           (cVar1 = FUN_12001f90(param_1,param_2,param_3,param_4), cVar1 != '\0')) {
          return DAT_12039a9c;
        }
        local_cc = 0;
        if (*(int *)(param_1 + 0x10) != 0) {
          pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,9,&iStack_c8);
          DAT_12039a9c = (*pcVar2)(iStack_c8,*(undefined4 *)(param_1 + 0x10),&local_cc);
        }
        if (local_cc != 0) {
          uStack_b6 = 0x1f9;
          uStack_b2 = 0;
          uStack_b8 = 0x17;
          uVar3 = 1;
          if (local_cc != 0) {
            do {
              asStack_2c[0] = 0x6a;
              FUN_120194d0(param_1,*(int *)(param_1 + 0x10),uVar3,asStack_2c);
              pcStack_c4 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x16,&iStack_c8);
              piVar11 = local_ac;
              psVar9 = asStack_2c;
              puVar8 = &uStack_b8;
              uVar10 = 0;
              psVar7 = param_4;
              uVar4 = FUN_12027340(param_1);
              DAT_12039a9c = (*pcStack_c4)(iStack_c8,uVar4,psVar7,puVar8,psVar9,uVar10,piVar11);
              if (DAT_12039a9c != 0) {
                return 0x10000;
              }
              uVar3 = uVar3 + 1;
              pcStack_c4 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x17,&iStack_c0);
              piVar11 = local_ac;
              uVar4 = FUN_12027340(param_1);
              DAT_12039a9c = (*pcStack_c4)(iStack_c0,uVar4,piVar11);
              pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x1a,&iStack_bc);
              DAT_12039a9c = (*pcVar2)(iStack_bc,param_1,asStack_2c);
            } while (uVar3 <= local_cc);
          }
        }
        return 0;
      }
      return 0x10000;
    }
    if ((local_cd != '\0') && (cVar1 = FUN_12001f90(param_1,param_2,param_3,param_4), cVar1 != '\0')
       ) {
      return DAT_12039a9c;
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,9,local_ac);
      DAT_12039a9c = (*pcVar2)(local_ac[0],*(undefined4 *)(param_1 + 0x10),&local_cc);
    }
    if (local_cc != 0) {
      uVar3 = FUN_120239a0(*(int *)(param_1 + 0x10));
      *(int *)(param_1 + 0x14) = (int)(short)uVar3;
      return ((short)uVar3 == 0) - 1 & 0x10000;
    }
    *(undefined4 *)(param_1 + 0x14) = 1;
    return 0x10000;
  }
  if ((local_cd != '\0') && (cVar1 = FUN_12001f90(param_1,param_2,param_3,param_4), cVar1 != '\0'))
  {
    return DAT_12039a9c;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,9,local_ac);
    DAT_12039a9c = (*pcVar2)(local_ac[0],*(undefined4 *)(param_1 + 0x10),&local_cc);
  }
  if (local_cc != 0) {
    uVar4 = FUN_12023900(*(int *)(param_1 + 0x10),*(short *)(param_1 + 0xe),'\0');
    *(int *)(param_1 + 0x14) = (int)(short)uVar4;
    return ((short)uVar4 == 0) - 1 & 0x10000;
  }
  *(undefined4 *)(param_1 + 0x14) = 1;
  return 0x10000;
}


