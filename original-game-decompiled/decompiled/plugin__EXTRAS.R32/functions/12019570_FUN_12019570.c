
/* ==== FUN_12019570 @ 12019570 ==== 
 * signature: uint __cdecl FUN_12019570(int param_1, uint * param_2, short * param_3, short * param_4)
 * body: 12019570-12019ba7
 */

uint __cdecl FUN_12019570(int param_1,uint *param_2,short *param_3,short *param_4)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  char local_19;
  int local_18;
  uint local_14;
  uint uStack_10;
  uint local_c;
  undefined2 uStack_8;
  int iStack_6;
  
  local_14 = 0;
  local_c = 0;
  local_19 = '\0';
  pcVar2 = (code *)FUN_12027370(param_1,0,0x2a,&local_18);
  DAT_12039a9c = (*pcVar2)(local_18,&local_19);
  iStack_6 = 0;
  uStack_8 = 1;
  *(undefined4 *)(param_1 + 0x14) = 0;
  uVar3 = FUN_120271d0(param_2,(uint *)s_value_120370b8);
  if ((char)uVar3 != '\0') {
    uVar3 = FUN_12019bb0(param_1,param_3,param_4);
    return uVar3;
  }
  uVar3 = FUN_120271d0(param_2,(uint *)s_count_120370a4);
  if ((char)uVar3 != '\0') {
    if ((local_19 != '\0') && (cVar1 = FUN_1201a110(param_1,param_2,param_3,param_4), cVar1 != '\0')
       ) {
      return DAT_12039a9c;
    }
    uVar3 = FUN_1201a160(param_1,param_4,(undefined4 *)0x0);
    if (uVar3 == 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x14) = 3;
    return uVar3;
  }
  uVar3 = FUN_120271d0(param_2,(uint *)s_delete_1203797c);
  if ((((char)uVar3 != '\0') && (param_3 != (short *)0x0)) && (*param_3 == 1)) {
    if ((local_19 != '\0') && (cVar1 = FUN_1201a110(param_1,param_2,param_3,param_4), cVar1 != '\0')
       ) {
      return DAT_12039a9c;
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,9,&local_18);
      DAT_12039a9c = (*pcVar2)(local_18,*(undefined4 *)(param_1 + 0x10),&local_14);
    }
    uVar3 = *(uint *)(param_3 + 1);
    if ((uVar3 <= local_14) && (0 < (int)uVar3)) {
      iVar4 = FUN_120194d0(param_1,*(int *)(param_1 + 0x10),uVar3,param_4);
      if (iVar4 != 0) {
        *(undefined4 *)(param_1 + 0x14) = 3;
        return 0x10000;
      }
      FUN_12023860(param_1,*(int *)(param_1 + 0x10),*(undefined4 *)(param_3 + 1));
      return 0;
    }
    *(undefined4 *)(param_1 + 0x14) = 2;
    return 0x10000;
  }
  uVar3 = FUN_120271d0(param_2,(uint *)s_random_12037968);
  if (((char)uVar3 == '\0') &&
     (uVar3 = FUN_120271d0(param_2,(uint *)s_randomdelete_12037954), (char)uVar3 == '\0')) {
    uVar3 = FUN_120271d0(param_2,(uint *)s_sortascend_1203707c);
    if (((char)uVar3 != '\0') ||
       (uVar3 = FUN_120271d0(param_2,(uint *)s_sortdescend_12037068), (char)uVar3 != '\0')) {
      uVar3 = FUN_120271d0(param_2,(uint *)s_sortascend_1203707c);
      local_18 = CONCAT31(local_18._1_3_,(char)uVar3);
      if ((local_19 != '\0') &&
         (cVar1 = FUN_1201a110(param_1,param_2,param_3,param_4), cVar1 != '\0')) {
        return DAT_12039a9c;
      }
      uVar3 = FUN_1201a160(param_1,param_4,&local_14);
      if (uVar3 != 0) {
        *(undefined4 *)(param_1 + 0x14) = 3;
        return uVar3;
      }
      if (local_14 == 0) {
        *(undefined4 *)(param_1 + 0x14) = 1;
        return 0x10000;
      }
      uVar5 = FUN_12023900(*(int *)(param_1 + 0x10),*(short *)(param_1 + 0xe),(char)local_18);
      *(int *)(param_1 + 0x14) = (int)(short)uVar5;
      return ((short)uVar5 == 0) - 1 & 0x10000;
    }
    uVar3 = FUN_120271d0(param_2,(uint *)s_listerror_12037940);
    if ((char)uVar3 == '\0') {
      uVar3 = FUN_120271d0(param_2,(uint *)s_shuffle_12037054);
      if ((char)uVar3 == '\0') {
        uVar3 = FUN_120271d0(param_2,(uint *)s_listtype_12037044);
        if ((char)uVar3 == '\0') {
          return 0x10000;
        }
        if ((local_19 != '\0') &&
           (cVar1 = FUN_1201a110(param_1,param_2,param_3,param_4), cVar1 != '\0')) {
          return DAT_12039a9c;
        }
        if (*param_4 == 0x6a) {
          param_4[1] = 0;
          param_4[2] = 0;
          *param_4 = 1;
        }
        uStack_8 = 1;
        if (*(short *)(param_1 + 0xe) == -1) {
          iStack_6 = 0x69;
        }
        else {
          iStack_6 = (int)*(short *)(param_1 + 0xe);
        }
        pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x3c),1,0,&local_18);
        uVar3 = (*pcVar2)(local_18,param_1,&uStack_8,param_4);
        DAT_12039a9c = uVar3;
        if (uVar3 != 0) {
          *(undefined4 *)(param_1 + 0x14) = 3;
          return uVar3;
        }
        return 0;
      }
      if ((local_19 != '\0') &&
         (cVar1 = FUN_1201a110(param_1,param_2,param_3,param_4), cVar1 != '\0')) {
        return DAT_12039a9c;
      }
      uVar3 = FUN_1201a160(param_1,param_4,&local_14);
      if (uVar3 != 0) {
        *(undefined4 *)(param_1 + 0x14) = 3;
        return uVar3;
      }
      if (local_14 == 0) {
        *(undefined4 *)(param_1 + 0x14) = 1;
        return 0;
      }
      uVar3 = FUN_120239a0(*(int *)(param_1 + 0x10));
      *(int *)(param_1 + 0x14) = (int)(short)uVar3;
      return ((short)uVar3 == 0) - 1 & 0x10000;
    }
    if ((local_19 != '\0') && (cVar1 = FUN_1201a110(param_1,param_2,param_3,param_4), cVar1 != '\0')
       ) {
      return DAT_12039a9c;
    }
    if (*param_4 == 0x6a) {
      param_4[1] = 0;
      param_4[2] = 0;
      *param_4 = 1;
    }
    pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x3c),1,0,&local_18);
    uVar3 = (*pcVar2)(local_18,param_1,param_1 + 0x14,param_4);
    DAT_12039a9c = uVar3;
    if (uVar3 != 0) {
      *(undefined4 *)(param_1 + 0x14) = 3;
      return uVar3;
    }
    return 0;
  }
  uStack_10 = 0;
  if ((local_19 != '\0') && (cVar1 = FUN_1201a110(param_1,param_2,param_3,param_4), cVar1 != '\0'))
  {
    return DAT_12039a9c;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,9,&local_18);
    DAT_12039a9c = (*pcVar2)(local_18,*(undefined4 *)(param_1 + 0x10),&local_14);
  }
  if (local_14 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 1;
    return 0x10000;
  }
  pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 4),1,2,&local_18);
  DAT_12039a9c = (*pcVar2)(local_18,1,local_14,&uStack_10);
  if (uStack_10 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 2;
  }
  else {
    iVar4 = FUN_120194d0(param_1,*(int *)(param_1 + 0x10),uStack_10,param_4);
    if (iVar4 == 0) goto LAB_12019b60;
    *(undefined4 *)(param_1 + 0x14) = 3;
  }
  local_c = 0x10000;
LAB_12019b60:
  if ((((local_c == 0) && (uStack_10 != 0)) && (uStack_10 <= local_14)) &&
     (uVar3 = FUN_120271d0(param_2,(uint *)s_randomdelete_12037954), (char)uVar3 != '\0')) {
    FUN_12023860(param_1,*(int *)(param_1 + 0x10),uStack_10);
  }
  return local_c;
}


