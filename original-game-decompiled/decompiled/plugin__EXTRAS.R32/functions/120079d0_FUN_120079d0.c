
/* ==== FUN_120079d0 @ 120079d0 ==== 
 * signature: undefined4 __cdecl FUN_120079d0(int param_1, undefined4 param_2)
 * body: 120079d0-12007feb
 */

undefined4 __cdecl FUN_120079d0(int param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  undefined4 local_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  undefined4 local_58;
  undefined2 uStack_54;
  int iStack_52;
  undefined4 uStack_4e;
  int iStack_4a;
  short sStack_2c;
  int iStack_2a;
  
  pcVar3 = (code *)FUN_12027370(param_1,0,0x20,&local_58);
  iVar8 = 1;
  DAT_12039a9c = (*pcVar3)(CONCAT22(local_58._2_2_,(undefined2)local_58),&local_74);
  sStack_2c = 1;
  iStack_78 = 0x10;
  iStack_2a = 0;
  pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&iStack_80);
  DAT_12039a9c = (*pcVar3)(iStack_80,local_74,s_movie_12037290,0,&sStack_2c);
  if ((sStack_2c != 1) || (iStack_2a == 0)) {
    return 0x10000;
  }
  iVar6 = *(int *)(param_1 + 0xc);
  iStack_68 = iStack_2a;
  iStack_60 = *(int *)(param_1 + 0x2a);
  bVar9 = iStack_60 == 0;
  iStack_70 = FUN_12027fe0();
  iStack_5c = iStack_70;
  if (iVar6 == 5) {
    iStack_7c = FUN_12007ff0();
  }
  else if (iVar6 == 4) {
    iStack_7c = *(int *)(param_1 + 0x24);
  }
  else if (iVar6 == 3) {
    local_58._0_2_ = 1;
    iStack_6c = 0x3c;
    local_58._2_2_ = 0;
    uStack_54 = 0;
    pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x3c),1,0,&iStack_80);
    DAT_12039a9c = (*pcVar3)(iStack_80,param_1,param_2,&local_58);
    if (DAT_12039a9c == 0) {
      iStack_7c = CONCAT22(uStack_54,local_58._2_2_);
      DAT_12039a9c = 0;
    }
    else {
      local_58._0_2_ = 0xb;
      local_58._2_2_ = 0;
      uStack_54 = 0;
      iStack_52 = 0;
      pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + iStack_6c),1,0,&iStack_80);
      DAT_12039a9c = (*pcVar3)(iStack_80,param_1,param_2,&local_58);
      if (DAT_12039a9c == 0) {
        iVar6 = 0;
        if ((1 < CONCAT22(uStack_54,local_58._2_2_)) &&
           (CONCAT22(uStack_54,local_58._2_2_) <= iStack_70)) {
          iVar8 = CONCAT22(uStack_54,local_58._2_2_);
        }
        DAT_12039a9c = 0;
        if ((iVar8 <= iStack_52) && (CONCAT22(uStack_54,local_58._2_2_) <= iStack_70)) {
          iStack_5c = CONCAT22(uStack_54,local_58._2_2_);
        }
      }
      else {
        local_58._0_2_ = 0x66;
        local_58._2_2_ = 0xffff;
        uStack_54 = 0xffff;
        iStack_52 = 0;
        uStack_4e = 0;
        iStack_4a = 0;
        pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + iStack_6c),1,0,&iStack_80);
        DAT_12039a9c = (*pcVar3)(iStack_80,param_1,param_2,&local_58);
        if (DAT_12039a9c != 0) {
          if (iStack_4a != 0) {
            pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&iStack_80);
            DAT_12039a9c = (*pcVar3)(iStack_80,iStack_4a);
          }
          return 0x10000;
        }
        iStack_7c = FUN_12007ff0();
        if (iStack_4a != 0) {
          pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&iStack_80);
          DAT_12039a9c = (*pcVar3)(iStack_80,iStack_4a);
        }
      }
    }
  }
  if (((*(short *)(param_1 + 0x30) == 0) || (iStack_60 != 0)) || (iVar6 == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (((iVar6 != 0) && (iVar6 != 1)) && ((iVar6 != 2 && (!bVar2)))) {
    local_58._0_2_ = 1;
    local_58._2_2_ = (undefined2)iStack_7c;
    uStack_54 = (undefined2)((uint)iStack_7c >> 0x10);
    if (iStack_60 == 2) {
      FUN_12027fd3();
      iVar8 = FUN_12028089();
      bVar9 = iVar8 == 0;
    }
    pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + iStack_78),1,6,&iStack_80);
    pcVar5 = s_trackenable_1203727c;
    if (!bVar9) {
      pcVar5 = s_trackdisable_12037268;
    }
    DAT_12039a9c = (*pcVar3)(iStack_80,local_74,pcVar5,0,&local_58);
    return 0;
  }
  iVar7 = 1;
  local_58._0_2_ = 1;
  local_58._2_2_ = 0;
  uStack_54 = 0;
  if (iVar8 <= iStack_5c) {
    do {
      if (iVar7 == 0) break;
      iVar7 = FUN_12027fd3();
      local_58._2_2_ = (undefined2)iVar8;
      uStack_54 = (undefined2)((uint)iVar8 >> 0x10);
      if (iVar7 != 0) {
        if (iStack_60 == 2) {
          iVar4 = FUN_12028089();
          bVar9 = iVar4 == 0;
        }
        if ((iVar6 == 1) || (iVar6 == 2)) {
          FUN_12028062();
          FUN_12028096();
          if (iVar6 == 1) {
            if ((iStack_64 == 0x65646976) ||
               ((iStack_64 == 0x74786574 || (iStack_64 == 0x6765706d)))) {
LAB_12007ee9:
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
          }
          else if ((iStack_64 == 0x6e756f73) || (bVar1 = false, iStack_64 == 0x6973756d))
          goto LAB_12007ee9;
          if (bVar1) {
            pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + iStack_78),1,6,&iStack_70);
            pcVar5 = s_trackenable_1203727c;
            iVar4 = iStack_70;
            if (!bVar9) {
              pcVar5 = s_trackdisable_12037268;
            }
          }
          else {
            if (!bVar2) goto LAB_12007f76;
            pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + iStack_78),1,6,&iStack_6c);
            pcVar5 = s_trackdisable_12037268;
            iVar4 = iStack_6c;
          }
        }
        else {
          if (bVar2) {
            bVar9 = iStack_7c == iVar8;
          }
          if (bVar9) goto LAB_12007f76;
          pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + iStack_78),1,6,&iStack_80);
          pcVar5 = s_trackdisable_12037268;
          iVar4 = iStack_80;
        }
        DAT_12039a9c = (*pcVar3)(iVar4,local_74,pcVar5,0,&local_58);
      }
LAB_12007f76:
      iVar8 = iVar8 + 1;
    } while (iVar8 <= iStack_5c);
  }
  if (bVar2) {
    local_58._2_2_ = (undefined2)iStack_7c;
    uStack_54 = (undefined2)((uint)iStack_7c >> 0x10);
    pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + iStack_78),1,6,&iStack_80);
    DAT_12039a9c = (*pcVar3)(iStack_80,local_74,s_trackenable_1203727c,0,&local_58);
  }
  return 0;
}


