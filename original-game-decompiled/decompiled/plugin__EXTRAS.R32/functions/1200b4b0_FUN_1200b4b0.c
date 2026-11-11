
/* ==== FUN_1200b4b0 @ 1200b4b0 ==== 
 * signature: int __cdecl FUN_1200b4b0(int param_1, uint * param_2, undefined4 param_3, short * param_4)
 * body: 1200b4b0-1200b894
 */

int __cdecl FUN_1200b4b0(int param_1,uint *param_2,undefined4 param_3,short *param_4)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  int local_14;
  undefined2 local_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 local_a;
  undefined2 uStack_8;
  int iStack_4;
  
  uVar1 = FUN_120271d0(param_2,(uint *)s_destination_1203739c);
  if ((char)uVar1 != '\0') {
    if (*param_4 == 10) {
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)param_4;
      *(short *)(param_1 + 0x18) = param_4[2];
      return 0;
    }
    pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x3c),1,0,(int *)&local_10);
    DAT_12039a9c = (*pcVar2)(CONCAT22(uStack_e,local_10),param_1,param_4,param_1 + 0x14);
    return DAT_12039a9c;
  }
  uVar1 = FUN_120271d0(param_2,(uint *)s_speed_12037388);
  if ((char)uVar1 != '\0') {
    if (*param_4 != 0xf) {
      local_10 = 0xf;
      uStack_e = 0;
      uStack_c = 0;
      local_a = 0;
      uStack_8 = 0;
      pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x3c),1,0,&local_14);
      iVar3 = (*pcVar2)(local_14,param_1,param_4,&local_10);
      DAT_12039a9c = iVar3;
      if (iVar3 == 0) {
        if (0.0 < (double)CONCAT26(uStack_8,CONCAT24(local_a,CONCAT22(uStack_c,uStack_e)))) {
          *(uint *)(param_1 + 0x20) = CONCAT22(uStack_e,local_10);
          *(uint *)(param_1 + 0x24) = CONCAT22(local_a,uStack_c);
          *(undefined2 *)(param_1 + 0x28) = uStack_8;
          return 0;
        }
        iVar3 = 0x10000;
      }
      return iVar3;
    }
    if (0.0 < *(double *)(param_4 + 1)) {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)param_4;
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_4 + 2);
      *(short *)(param_1 + 0x28) = param_4[4];
      return 0;
    }
    return 0x10000;
  }
  uVar1 = FUN_120271d0(param_2,(uint *)s_duration_12037374);
  if ((char)uVar1 == '\0') {
    uVar1 = FUN_120271d0(param_2,(uint *)s_updaterate_12037360);
    if ((char)uVar1 == '\0') {
      return 0x10000;
    }
    if (*param_4 == 1) {
      if ((0 < *(int *)(param_4 + 1)) && (*(int *)(param_4 + 1) < 0x65)) {
        *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)param_4;
        *(short *)(param_1 + 0x38) = param_4[2];
        if (*(char *)(param_1 + 0x9c) != '\0') {
          pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x14),1,3,&local_14);
          lVar4 = __ftol();
          DAT_12039a9c = (*pcVar2)(local_14,param_1,0,(int)lVar4);
        }
        return 0;
      }
      return 0x10000;
    }
    local_10 = 1;
    uStack_e = 0;
    uStack_c = 0;
    pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x3c),1,0,&local_14);
    iVar3 = (*pcVar2)(local_14,param_1,param_4,&local_10);
    DAT_12039a9c = iVar3;
    if (iVar3 == 0) {
      if ((CONCAT22(uStack_c,uStack_e) < 1) || (100 < CONCAT22(uStack_c,uStack_e))) {
        iVar3 = 0x10000;
      }
      else {
        *(uint *)(param_1 + 0x34) = CONCAT22(uStack_e,local_10);
        *(undefined2 *)(param_1 + 0x38) = uStack_c;
        if (*(char *)(param_1 + 0x9c) != '\0') {
          pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x14),1,3,&iStack_4);
          lVar4 = __ftol();
          DAT_12039a9c = (*pcVar2)(iStack_4,param_1,0,(int)lVar4);
          return 0;
        }
      }
    }
    return iVar3;
  }
  if (*param_4 == 0xf) {
    if (0.0 < *(double *)(param_4 + 1)) {
      *(undefined4 *)(param_1 + 0x2a) = *(undefined4 *)param_4;
      *(undefined4 *)(param_1 + 0x2e) = *(undefined4 *)(param_4 + 2);
      *(short *)(param_1 + 0x32) = param_4[4];
      return 0;
    }
    return 0x10000;
  }
  local_10 = 0xf;
  uStack_e = 0;
  uStack_c = 0;
  local_a = 0;
  uStack_8 = 0;
  pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x3c),1,0,&local_14);
  DAT_12039a9c = (*pcVar2)(local_14,param_1,param_4,&local_10);
  if ((DAT_12039a9c == 0) &&
     (0.0 < (double)CONCAT26(uStack_8,CONCAT24(local_a,CONCAT22(uStack_c,uStack_e))))) {
    *(uint *)(param_1 + 0x2a) = CONCAT22(uStack_e,local_10);
    *(uint *)(param_1 + 0x2e) = CONCAT22(local_a,uStack_c);
    *(undefined2 *)(param_1 + 0x32) = uStack_8;
    return 0;
  }
  return 0x10000;
}


