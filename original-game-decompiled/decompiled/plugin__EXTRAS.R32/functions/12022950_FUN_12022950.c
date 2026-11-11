
/* ==== FUN_12022950 @ 12022950 ==== 
 * signature: undefined4 __cdecl FUN_12022950(int param_1, int param_2, uint param_3, short param_4)
 * body: 12022950-12022fd1
 */

undefined4 __cdecl FUN_12022950(int param_1,int param_2,uint param_3,short param_4)

{
  short sVar1;
  code *pcVar2;
  int iVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  int *piVar4;
  undefined4 local_10;
  undefined2 uStack_c;
  int local_8;
  int local_4;
  
  if (param_4 != 0) {
    if (param_4 != 1) {
      if (param_4 != 2) {
        if (param_4 != 3) {
          if (param_4 < 4) {
            return 0x10000;
          }
          pcVar2 = (code *)FUN_12027370(param_2,1,8,&local_10);
          DAT_12039a9c = (*pcVar2)(CONCAT22(local_10._2_2_,(undefined2)local_10),&local_4,1);
          if (((short)local_4 != 4) && ((short)local_4 != 5)) {
            return 0x10000;
          }
          sVar1 = *(short *)(param_1 + 0xe);
          pcVar2 = (code *)FUN_12027370(param_2,1,6,&local_10);
          DAT_12039a9c = (*pcVar2)(CONCAT22(local_10._2_2_,(undefined2)local_10),param_1);
          iVar3 = FUN_12023050(*(int *)(param_1 + 2));
          *(short *)(param_1 + 0xe) = (short)iVar3;
          pcVar2 = (code *)FUN_12027370(param_2,1,6,&local_8);
          DAT_12039a9c = (*pcVar2)(local_8,param_1 + 10);
          if ((*(short *)(param_1 + 0xc) == 0) && ((param_3 & 0x80) == 0)) {
            return 0;
          }
          local_10._0_2_ = 1;
          local_10._2_2_ = 0;
          uStack_c = 0;
          pcVar2 = (code *)FUN_12027370(param_2,1,6,&local_8);
          DAT_12039a9c = (*pcVar2)(local_8,&local_10);
          if (*(short *)(param_1 + 0xe) != sVar1) {
            iVar3 = *(int *)(param_1 + 0x10);
            if (iVar3 != 0) {
              FUN_120232f0(param_1,iVar3);
              *(int *)(param_1 + 0x10) = 0;
              goto LAB_12022f78;
            }
          }
          if (*(int *)(param_1 + 0x10) != 0) {
            FUN_12023770(param_1,*(int *)(param_1 + 0x10),
                         CONCAT22(extraout_var_03,*(short *)(param_1 + 0xe)),0);
          }
LAB_12022f78:
          if ((CONCAT22(uStack_c,local_10._2_2_) != 0) && (*(int *)(param_1 + 0x10) == 0)) {
            FUN_12023290(param_1);
          }
          iVar3 = *(int *)(param_1 + 0x10);
          if ((short)local_4 != 4) {
            FUN_120236c0(param_2,*(short *)(param_1 + 0xe),iVar3,CONCAT22(uStack_c,local_10._2_2_),
                         param_1);
            return 0;
          }
          FUN_12023540(param_2,*(short *)(param_1 + 0xe),iVar3,CONCAT22(uStack_c,local_10._2_2_),
                       param_1);
          return 0;
        }
        sVar1 = *(short *)(param_1 + 0xe);
        pcVar2 = (code *)FUN_12027370(param_2,1,6,&local_10);
        DAT_12039a9c = (*pcVar2)(CONCAT22(local_10._2_2_,(undefined2)local_10),param_1);
        iVar3 = FUN_12023050(*(int *)(param_1 + 2));
        *(short *)(param_1 + 0xe) = (short)iVar3;
        pcVar2 = (code *)FUN_12027370(param_2,1,6,&local_8);
        DAT_12039a9c = (*pcVar2)(local_8,param_1 + 10);
        if ((*(short *)(param_1 + 0xc) == 0) && ((param_3 & 0x80) == 0)) {
          return 0;
        }
        local_10._0_2_ = 1;
        local_10._2_2_ = 0;
        uStack_c = 0;
        pcVar2 = (code *)FUN_12027370(param_2,1,6,&local_8);
        DAT_12039a9c = (*pcVar2)(local_8,&local_10);
        if (*(short *)(param_1 + 0xe) != sVar1) {
          iVar3 = *(int *)(param_1 + 0x10);
          if (iVar3 != 0) {
            FUN_120232f0(param_1,iVar3);
            *(int *)(param_1 + 0x10) = 0;
            goto LAB_12022e13;
          }
        }
        if (*(int *)(param_1 + 0x10) != 0) {
          FUN_12023770(param_1,*(int *)(param_1 + 0x10),
                       CONCAT22(extraout_var_02,*(short *)(param_1 + 0xe)),0);
        }
LAB_12022e13:
        if ((CONCAT22(uStack_c,local_10._2_2_) != 0) && (*(int *)(param_1 + 0x10) == 0)) {
          FUN_12023290(param_1);
        }
        FUN_12023540(param_2,*(short *)(param_1 + 0xe),*(int *)(param_1 + 0x10),
                     CONCAT22(uStack_c,local_10._2_2_),param_1);
        return 0;
      }
      sVar1 = *(short *)(param_1 + 0xe);
      pcVar2 = (code *)FUN_12027370(param_2,1,6,&local_10);
      DAT_12039a9c = (*pcVar2)(CONCAT22(local_10._2_2_,(undefined2)local_10),param_1);
      iVar3 = FUN_12023050(*(int *)(param_1 + 2));
      *(short *)(param_1 + 0xe) = (short)iVar3;
      if ((param_3 & 0x80) == 0) {
        return 0;
      }
      local_10._0_2_ = 1;
      local_10._2_2_ = 0;
      uStack_c = 0;
      pcVar2 = (code *)FUN_12027370(param_2,1,6,&local_8);
      DAT_12039a9c = (*pcVar2)(local_8,&local_10);
      if (*(short *)(param_1 + 0xe) != sVar1) {
        iVar3 = *(int *)(param_1 + 0x10);
        if (iVar3 != 0) {
          FUN_120232f0(param_1,iVar3);
          *(int *)(param_1 + 0x10) = 0;
          goto LAB_12022cee;
        }
      }
      if (*(int *)(param_1 + 0x10) != 0) {
        FUN_12023770(param_1,*(int *)(param_1 + 0x10),
                     CONCAT22(extraout_var_01,*(short *)(param_1 + 0xe)),0);
      }
LAB_12022cee:
      if ((CONCAT22(uStack_c,local_10._2_2_) != 0) && (*(int *)(param_1 + 0x10) == 0)) {
        FUN_12023290(param_1);
      }
      FUN_12023540(param_2,*(short *)(param_1 + 0xe),*(int *)(param_1 + 0x10),
                   CONCAT22(uStack_c,local_10._2_2_),param_1);
      return 0;
    }
    sVar1 = *(short *)(param_1 + 0xe);
    local_10._0_2_ = 1;
    local_10._2_2_ = 0;
    uStack_c = 0;
    pcVar2 = (code *)FUN_12027370(param_2,1,6,&local_8);
    DAT_12039a9c = (*pcVar2)(local_8,param_1);
    iVar3 = FUN_12023050(*(int *)(param_1 + 2));
    *(short *)(param_1 + 0xe) = (short)iVar3;
    pcVar2 = (code *)FUN_12027370(param_2,1,6,&local_4);
    DAT_12039a9c = (*pcVar2)(local_4,&local_10);
    if (*(short *)(param_1 + 0xe) != sVar1) {
      iVar3 = *(int *)(param_1 + 0x10);
      if (iVar3 != 0) {
        FUN_120232f0(param_1,iVar3);
        *(int *)(param_1 + 0x10) = 0;
        goto LAB_12022b7b;
      }
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_12023770(param_1,*(int *)(param_1 + 0x10),
                   CONCAT22(extraout_var_00,*(short *)(param_1 + 0xe)),0);
    }
LAB_12022b7b:
    piVar4 = (int *)(param_1 + 0x10);
    if ((CONCAT22(uStack_c,local_10._2_2_) != 0) && ((param_3 & 0x80) == 0)) {
      *(undefined2 *)(param_1 + 0xc) = 1;
    }
    if ((*(short *)(param_1 + 0xc) == 0) && ((param_3 & 0x80) == 0)) {
      if (*(short *)(param_1 + 0xe) == -1) {
        FUN_12023720(param_2,0x6d,*piVar4,CONCAT22(uStack_c,local_10._2_2_),param_1);
        return 0;
      }
      FUN_12023720(param_2,*(short *)(param_1 + 0xe),*piVar4,CONCAT22(uStack_c,local_10._2_2_),
                   param_1);
      return 0;
    }
    if ((CONCAT22(uStack_c,local_10._2_2_) != 0) && (*piVar4 == 0)) {
      FUN_12023290(param_1);
    }
    if (*(short *)(param_1 + 0xe) == -1) {
      FUN_12023540(param_2,-1,*piVar4,CONCAT22(uStack_c,local_10._2_2_),param_1);
      return 0;
    }
    FUN_12023540(param_2,*(short *)(param_1 + 0xe),*piVar4,CONCAT22(uStack_c,local_10._2_2_),param_1
                );
    return 0;
  }
  sVar1 = *(short *)(param_1 + 0xe);
  local_10._0_2_ = 1;
  local_10._2_2_ = 0;
  uStack_c = 0;
  pcVar2 = (code *)FUN_12027370(param_2,1,6,&local_8);
  DAT_12039a9c = (*pcVar2)(local_8,param_1);
  iVar3 = FUN_12023050(*(int *)(param_1 + 2));
  *(short *)(param_1 + 0xe) = (short)iVar3;
  pcVar2 = (code *)FUN_12027370(param_2,1,6,&local_4);
  DAT_12039a9c = (*pcVar2)(local_4,&local_10);
  if (*(short *)(param_1 + 0xe) != sVar1) {
    iVar3 = *(int *)(param_1 + 0x10);
    if (iVar3 != 0) {
      FUN_120232f0(param_1,iVar3);
      *(int *)(param_1 + 0x10) = 0;
      goto LAB_12022a13;
    }
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_12023770(param_1,*(int *)(param_1 + 0x10),CONCAT22(extraout_var,*(short *)(param_1 + 0xe)),0
                );
  }
LAB_12022a13:
  piVar4 = (int *)(param_1 + 0x10);
  if ((CONCAT22(uStack_c,local_10._2_2_) != 0) && ((param_3 & 0x80) == 0)) {
    *(undefined2 *)(param_1 + 0xc) = 1;
  }
  if ((*(short *)(param_1 + 0xc) == 0) && ((param_3 & 0x80) == 0)) {
    if (*(short *)(param_1 + 0xe) == -1) {
      FUN_12023720(param_2,0x6d,*piVar4,CONCAT22(uStack_c,local_10._2_2_),param_1);
      return 0;
    }
    FUN_12023720(param_2,*(short *)(param_1 + 0xe),*piVar4,CONCAT22(uStack_c,local_10._2_2_),param_1
                );
    return 0;
  }
  if ((CONCAT22(uStack_c,local_10._2_2_) != 0) && (*piVar4 == 0)) {
    FUN_12023290(param_1);
  }
  if (*(short *)(param_1 + 0xe) == -1) {
    FUN_12023720(param_2,0x6d,*piVar4,CONCAT22(uStack_c,local_10._2_2_),param_1);
    return 0;
  }
  FUN_12023540(param_2,*(short *)(param_1 + 0xe),*piVar4,CONCAT22(uStack_c,local_10._2_2_),param_1);
  return 0;
}


