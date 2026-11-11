
/* ==== FUN_11027360 @ 11027360 ==== 
 * signature: undefined1 __cdecl FUN_11027360(undefined4 * param_1, int param_2)
 * body: 11027360-110277f2
 */

undefined1 __cdecl FUN_11027360(undefined4 *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  short sVar7;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30 [5];
  undefined4 local_1c;
  undefined4 local_18;
  
  uVar6 = 1;
  iVar2 = *(int *)((int)param_1 + 0x1a);
  iVar3 = *(int *)(iVar2 + 0xc);
  local_34 = *(int *)(iVar2 + 0x10);
  if (iVar3 == 0x7d1) {
    iVar4 = *(int *)(param_2 + 0xc);
    if ((((iVar4 == 0x12d) || (iVar4 == 0x12e)) || ((0x130 < iVar4 && (iVar4 < 0x134)))) ||
       ((iVar4 == 0x135 || (iVar4 == 0x136)))) {
      FUN_11004840(param_1,8,1);
    }
    if ((*(int *)(param_2 + 0xc) == 0x12f) || (*(int *)(param_2 + 0xc) == 0x130)) {
      FUN_11004840(param_1,9,1);
    }
    iVar4 = *(int *)(param_2 + 0x14);
    if ((((iVar4 == 0x12d) || (iVar4 == 0x12e)) || ((0x130 < iVar4 && (iVar4 < 0x134)))) ||
       ((iVar4 == 0x135 || (iVar4 == 0x136)))) {
      FUN_11004840(param_1,8,1);
    }
    if ((*(int *)(param_2 + 0x14) == 0x12f) || (*(int *)(param_2 + 0x14) == 0x130)) {
      FUN_11004840(param_1,9,1);
    }
    if ((*(byte *)(param_2 + 0x26) & 1) != 0) {
      FUN_11004840(param_1,8,1);
      FUN_11004840(param_1,9,1);
    }
  }
  else if (iVar3 == 0x7d2) {
    iVar4 = *(int *)(param_2 + 0xc);
    if ((((iVar4 == 0x12d) || (iVar4 == 0x12e)) || ((0x130 < iVar4 && (iVar4 < 0x134)))) ||
       ((iVar4 == 0x135 || (iVar4 == 0x136)))) {
      FUN_11004840(param_1,8,0);
    }
    if ((*(int *)(param_2 + 0xc) == 0x12f) || (*(int *)(param_2 + 0xc) == 0x130)) {
      FUN_11004840(param_1,9,0);
    }
    iVar4 = *(int *)(param_2 + 0x14);
    if ((((iVar4 == 0x12d) || (iVar4 == 0x12e)) || ((0x130 < iVar4 && (iVar4 < 0x134)))) ||
       ((iVar4 == 0x135 || (iVar4 == 0x136)))) {
      FUN_11004840(param_1,8,0);
    }
    if ((*(int *)(param_2 + 0x14) == 0x12f) || (*(int *)(param_2 + 0x14) == 0x130)) {
      FUN_11004840(param_1,9,0);
    }
    if ((*(byte *)(param_2 + 0x26) & 1) != 0) {
      FUN_11004840(param_1,8,0);
      FUN_11004840(param_1,9,0);
    }
  }
  if (((*(int *)(param_2 + 0xc) == iVar3) && (*(int *)(param_2 + 0x10) == local_34)) &&
     (bVar1 = *(byte *)(param_2 + 0x26), (bVar1 & 1) == 0)) {
    *(byte *)(param_2 + 0x26) = bVar1 | 1;
    *(byte *)(param_2 + 0x26) = bVar1 & 0xfd | 1;
    uVar5 = FUN_1100fc30((int)param_1);
    *(undefined4 *)(param_2 + 0x2e) = uVar5;
    FUN_11004840(param_1,8,1);
    uVar6 = 0;
    FUN_11004840(param_1,9,1);
  }
  if ((*(byte *)(param_2 + 0x26) & 1) != 0) {
    if (iVar3 == 0x12d) {
      FUN_11027870(param_1,param_2,iVar2);
    }
    else if (iVar3 == 0x133) {
      local_38 = *(undefined4 *)(param_2 + 0x2e);
      if ((*(byte *)(param_2 + 0x26) & 2) == 0) {
        FUN_11027870(param_1,param_2,iVar2);
      }
      FUN_1100fc50(param_1,local_38,local_30);
      local_48 = local_1c;
      local_44 = local_18;
      local_40 = *(undefined4 *)(param_2 + 0x32);
      local_3c = *(undefined4 *)(param_2 + 0x36);
      sVar7 = (*(short *)(param_2 + 0x28) + *(short *)(iVar2 + 0x3c)) - (short)local_1c;
      bVar1 = *(byte *)(param_2 + 0x1c);
      local_1c._2_2_ = (*(short *)(param_2 + 0x2a) + *(short *)(iVar2 + 0x3e)) - local_1c._2_2_;
      if ((bVar1 & 2) != 0) {
        local_1c._2_2_ = 0;
      }
      if ((bVar1 & 4) != 0) {
        sVar7 = 0;
      }
      if ((bVar1 & 8) != 0) {
        FUN_11028c90((short *)&local_48,sVar7,local_1c._2_2_);
        if ((short)local_48 < (short)local_40) {
          sVar7 = (sVar7 - (short)local_48) + (short)local_40;
        }
        if ((short)local_3c < (short)local_44) {
          sVar7 = (sVar7 - (short)local_44) + (short)local_3c;
        }
        if (local_48._2_2_ < local_40._2_2_) {
          local_1c._2_2_ = (local_1c._2_2_ - local_48._2_2_) + local_40._2_2_;
        }
        if (local_3c._2_2_ < local_44._2_2_) {
          local_1c._2_2_ = (local_1c._2_2_ - local_44._2_2_) + local_3c._2_2_;
        }
      }
      if ((sVar7 != 0) || (local_1c._2_2_ != 0)) {
        FUN_1101db80(param_1,local_38,0,(int)sVar7,(int)local_1c._2_2_,0,0);
        if (*(char *)(param_2 + 0x2c) == '\0') {
          FUN_11027800(0x1f5,param_1);
          *(undefined1 *)(param_2 + 0x2c) = 1;
        }
      }
    }
    else {
      if (iVar3 != 0x12e) goto LAB_1102771e;
      if (*(char *)(param_2 + 0x2c) != '\0') {
        FUN_11027800(0x1f6,param_1);
        *(undefined1 *)(param_2 + 0x2c) = 0;
        *(byte *)(param_2 + 0x26) = *(byte *)(param_2 + 0x26) & 0xfd;
      }
    }
    uVar6 = 0;
  }
LAB_1102771e:
  iVar2 = *(int *)(param_2 + 0x14);
  if ((((iVar3 == iVar2) && (*(int *)(param_2 + 0x18) == local_34)) || (iVar3 == 0x7d2)) &&
     ((*(byte *)(param_2 + 0x26) & 1) != 0)) {
    *(byte *)(param_2 + 0x26) = *(byte *)(param_2 + 0x26) & 0xfe;
    iVar3 = *(int *)(param_2 + 0xc);
    if ((((iVar3 != 0x12d) && (iVar3 != 0x12e)) && ((iVar3 < 0x131 || (0x133 < iVar3)))) &&
       ((((((iVar3 != 0x135 && (iVar3 != 0x136)) && (iVar2 != 0x12d)) && (iVar2 != 0x12e)) &&
         ((iVar2 < 0x131 || (0x133 < iVar2)))) && ((iVar2 != 0x135 && (iVar2 != 0x136)))))) {
      FUN_11004840(param_1,8,0);
    }
    if (((*(int *)(param_2 + 0xc) != 0x12f) && (*(int *)(param_2 + 0xc) != 0x130)) &&
       ((*(int *)(param_2 + 0x14) != 0x12f && (*(int *)(param_2 + 0x14) != 0x130)))) {
      FUN_11004840(param_1,9,0);
    }
    uVar6 = 0;
  }
  return uVar6;
}


