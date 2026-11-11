
/* ==== FUN_12017530 @ 12017530 ==== 
 * signature: int __cdecl FUN_12017530(undefined4 * param_1, uint * param_2, short * param_3, short * param_4)
 * body: 12017530-120177f8
 */

int __cdecl FUN_12017530(undefined4 *param_1,uint *param_2,short *param_3,short *param_4)

{
  short sVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  char local_19;
  uint uStack_18;
  undefined4 local_14;
  undefined2 uStack_10;
  undefined4 uStack_e;
  undefined4 uStack_a;
  int iStack_6;
  
  local_19 = '\0';
  iVar4 = 0x10000;
  pcVar2 = (code *)FUN_12027370((int)param_1,0,0x2a,&local_14);
  DAT_12039a9c = (*pcVar2)(CONCAT22(local_14._2_2_,(undefined2)local_14),&local_19);
  if (local_19 != '\0') {
    uStack_18 = uStack_18 & 0xffffff00;
    pcVar2 = (code *)FUN_12027370((int)param_1,0,0x2d,&local_14);
    DAT_12039a9c = (*pcVar2)(CONCAT22(local_14._2_2_,(undefined2)local_14),param_2,param_3,param_4,
                             &uStack_18);
    if ((char)uStack_18 != '\0') {
      return DAT_12039a9c;
    }
  }
  uVar3 = FUN_120271d0(param_2,(uint *)s_events_120370e8);
  if ((char)uVar3 == '\0') {
    uVar3 = FUN_120271d0(param_2,(uint *)s_value_120370b8);
    if ((char)uVar3 != '\0') {
      sVar1 = *param_4;
      if (sVar1 == 0) {
        iVar4 = FUN_12018920((int)param_1);
        return iVar4;
      }
      if (sVar1 != 0x69) {
        if (sVar1 != 0x66) {
          return 0x10000;
        }
        iVar4 = FUN_120186f0((int)param_1,(int)param_4);
        return iVar4;
      }
      iVar4 = FUN_12018630((int)param_1,(int)param_4);
      return iVar4;
    }
    uVar3 = FUN_120271d0(param_2,(uint *)&DAT_12037340);
    if ((char)uVar3 != '\0') {
      if (*param_4 == 0x66) {
        iVar4 = FUN_120186f0((int)param_1,(int)param_4);
        return iVar4;
      }
      if ((*param_4 == 0x69) && (*(int *)(param_4 + 1) != 0)) {
        local_14._0_2_ = 0x66;
        local_14._2_2_ = 0xffff;
        uStack_10 = 0xffff;
        uStack_e = 0;
        uStack_a = 0;
        iStack_6 = 0;
        pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,(int *)&uStack_18);
        DAT_12039a9c = (*pcVar2)(uStack_18,*(undefined4 *)(param_4 + 1),s_value_120370b8,0,&local_14
                                );
        if (DAT_12039a9c != 0) {
          if (iStack_6 != 0) {
            pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,(int *)&uStack_18);
            DAT_12039a9c = (*pcVar2)(uStack_18,iStack_6);
          }
          return DAT_12039a9c;
        }
        iVar4 = FUN_120186f0((int)param_1,(int)&local_14);
        if (iStack_6 != 0) {
          pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,(int *)&uStack_18);
          DAT_12039a9c = (*pcVar2)(uStack_18,iStack_6);
          return iVar4;
        }
      }
      else {
        iVar4 = 0x10000;
      }
    }
  }
  else if (((param_3 != (short *)0x0) && (*param_3 == 1)) && (*param_4 == 0x17)) {
    if (*(int *)(param_3 + 1) == 1) {
      *param_1 = *(undefined4 *)param_4;
      param_1[1] = *(undefined4 *)(param_4 + 2);
      *(short *)(param_1 + 2) = param_4[4];
      return 0;
    }
    return 0x10000;
  }
  return iVar4;
}


