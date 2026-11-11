
/* ==== FUN_0041b450 @ 0041b450 ==== 
 * signature: undefined4 * __cdecl FUN_0041b450(int param_1, int param_2)
 * body: 0041b450-0041b556;0041b56f-0041b58e;0041b59f-0041b5f1;0041b60a-0041b623;0041b6b7-0041b70a;0041b729-0041b742;0041b750-0041b7a1;0041b7ba-0041b7d7;0041b7e5-0041b834;0041b84d-0041b86a;0041b909-0041b95a;0041b973-0041b98c;0041b99a-0041b9e8;0041ba01-0041ba1a;0041ba28-0041ba6a;0041ba7b-0041ba94;0041baa2-0041baee;0041bb07-0041bb20
 */

undefined4 * __cdecl FUN_0041b450(int param_1,int param_2)

{
  undefined3 uVar1;
  undefined4 *puVar2;
  undefined4 *unaff_FS_OFFSET;
  AFX_EXCEPTION_LINK local_a8 [16];
  undefined4 *local_98;
  undefined4 *local_90;
  undefined4 *local_88;
  undefined4 *local_80;
  undefined4 *local_78;
  undefined4 *local_70;
  undefined4 *local_68;
  undefined4 *local_60;
  undefined4 *local_58;
  undefined4 *local_50;
  undefined4 *local_48;
  undefined4 *local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0041bb6a;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffff4c;
  local_18 = (undefined4 *)0x0;
  AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_a8);
  local_8._1_3_ = 0;
  uVar1 = local_8._1_3_;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  if (param_1 < 0xf) {
    if (param_1 != 0xe) {
      if (param_1 == 8) {
LAB_0041b504:
        puVar2 = FUN_00412c20(0x14a);
        local_8._0_1_ = 2;
        local_98 = puVar2;
        if (puVar2 == (undefined4 *)0x0) {
          local_18 = (undefined4 *)0x0;
        }
        else {
          local_3c = puVar2;
          FUN_0041bc50(puVar2);
          *puVar2 = &PTR_FUN_004bf978;
          *puVar2 = &PTR_FUN_004bfca8;
          *puVar2 = &PTR_FUN_004c0d00;
          local_18 = puVar2;
        }
        local_8 = CONCAT31(local_8._1_3_,1);
        FUN_00487960(local_18,param_2,0,0);
        goto LAB_0041b4e4;
      }
      goto switchD_0041b4b3_caseD_11;
    }
  }
  else {
    if (0x1a < param_1) {
      if (param_1 < 0xcc) {
        if (param_1 == 0xcb) goto LAB_0041b504;
        switch(param_1) {
        case 0x20:
          local_8._1_3_ = uVar1;
          puVar2 = FUN_00412c20(0x92);
          local_8._0_1_ = 0x19;
          local_68 = puVar2;
          if (puVar2 == (undefined4 *)0x0) {
            local_18 = (undefined4 *)0x0;
          }
          else {
            local_28 = puVar2;
            FUN_00412c90(puVar2,0);
            *puVar2 = &PTR_FUN_004bf780;
            *puVar2 = &PTR_FUN_004bf978;
            *puVar2 = &PTR_FUN_004c3508;
            local_18 = puVar2;
          }
          local_8 = CONCAT31(local_8._1_3_,1);
          FUN_0042de30(local_18,param_2);
          break;
        case 0x21:
          local_8._1_3_ = uVar1;
          puVar2 = FUN_00412c20(0x96);
          local_8._0_1_ = 0x1d;
          local_60 = puVar2;
          if (puVar2 == (undefined4 *)0x0) {
            local_18 = (undefined4 *)0x0;
          }
          else {
            local_24 = puVar2;
            FUN_00412c90(puVar2,0);
            *puVar2 = &PTR_FUN_004bf780;
            *puVar2 = &PTR_FUN_004bf978;
            *puVar2 = &PTR_FUN_004c1e18;
            local_18 = puVar2;
          }
          local_8 = CONCAT31(local_8._1_3_,1);
          FUN_004226d0(local_18,param_2);
          break;
        default:
          goto switchD_0041b4b3_caseD_11;
        case 0x23:
          local_8._1_3_ = uVar1;
          puVar2 = FUN_00412c20(0x92);
          local_8._0_1_ = 0x21;
          local_58 = puVar2;
          if (puVar2 == (undefined4 *)0x0) {
            local_18 = (undefined4 *)0x0;
          }
          else {
            local_20 = puVar2;
            FUN_00412c90(puVar2,0);
            *puVar2 = &PTR_FUN_004bf780;
            *puVar2 = &PTR_FUN_004bf978;
            *puVar2 = &PTR_FUN_004c31d8;
            local_18 = puVar2;
          }
          local_8 = CONCAT31(local_8._1_3_,1);
          FUN_0044a710(local_18,param_2);
          break;
        case 0x24:
          local_8._1_3_ = uVar1;
          puVar2 = FUN_00412c20(0x160);
          local_8._0_1_ = 0x25;
          local_50 = puVar2;
          if (puVar2 == (undefined4 *)0x0) {
            local_18 = (undefined4 *)0x0;
          }
          else {
            local_40 = puVar2;
            FUN_0041bbc0(puVar2);
            *puVar2 = &PTR_FUN_004bf2c8;
            *puVar2 = &PTR_FUN_004c1960;
            local_18 = puVar2;
          }
          local_8 = CONCAT31(local_8._1_3_,1);
          FUN_004257f0(local_18,param_2);
        }
      }
      else {
        if (param_1 == 0xc1c) {
          local_8._1_3_ = uVar1;
          puVar2 = FUN_00412c20(0x9a);
          local_8._0_1_ = 0x28;
          local_48 = puVar2;
          if (puVar2 == (undefined4 *)0x0) {
            local_18 = (undefined4 *)0x0;
          }
          else {
            local_1c = puVar2;
            FUN_0041bc50(puVar2);
            *puVar2 = &PTR_FUN_004bf978;
            *puVar2 = &PTR_FUN_004c1e18;
            *puVar2 = &PTR_FUN_004c1168;
            local_18 = puVar2;
          }
          local_8 = CONCAT31(local_8._1_3_,1);
          FUN_004388a0(local_18,param_2);
          goto LAB_0041b4e4;
        }
switchD_0041b4b3_caseD_11:
        local_18 = (undefined4 *)0x0;
      }
      goto LAB_0041b4e4;
    }
    if (param_1 != 0x1a) {
      switch(param_1) {
      case 0xf:
        local_8._1_3_ = uVar1;
        puVar2 = FUN_00412c20(0x172);
        local_8._0_1_ = 10;
        local_88 = puVar2;
        if (puVar2 == (undefined4 *)0x0) {
          local_18 = (undefined4 *)0x0;
        }
        else {
          local_44 = puVar2;
          FUN_0041bbc0(puVar2);
          *puVar2 = &PTR_FUN_004bf2c8;
          *puVar2 = &PTR_FUN_004bee10;
          local_18 = puVar2;
        }
        local_8 = CONCAT31(local_8._1_3_,1);
        FUN_004185c0(local_18,param_2);
        break;
      case 0x10:
        local_8._1_3_ = uVar1;
        puVar2 = FUN_00412c20(0x174);
        local_8._0_1_ = 0xd;
        local_80 = puVar2;
        if (puVar2 == (undefined4 *)0x0) {
          local_18 = (undefined4 *)0x0;
        }
        else {
          local_34 = puVar2;
          FUN_0041bbc0(puVar2);
          *puVar2 = &PTR_FUN_004bf2c8;
          puVar2[0x5b] = 0;
          *puVar2 = &PTR_FUN_004c14a8;
          local_18 = puVar2;
        }
        local_8 = CONCAT31(local_8._1_3_,1);
        FUN_0047dc20(local_18,param_2);
        break;
      default:
        goto switchD_0041b4b3_caseD_11;
      case 0x12:
        local_8._1_3_ = uVar1;
        puVar2 = FUN_00412c20(0xac);
        local_8._0_1_ = 0x11;
        local_78 = puVar2;
        if (puVar2 == (undefined4 *)0x0) {
          local_18 = (undefined4 *)0x0;
        }
        else {
          local_30 = puVar2;
          FUN_00412c90(puVar2,0);
          *puVar2 = &PTR_FUN_004bf780;
          *puVar2 = &PTR_FUN_004bf978;
          *puVar2 = &PTR_FUN_004c2ea0;
          local_18 = puVar2;
        }
        local_8 = CONCAT31(local_8._1_3_,1);
        FUN_00473150(local_18,param_2,0,0);
        break;
      case 0x15:
        local_8._1_3_ = uVar1;
        puVar2 = FUN_00412c20(0x160);
        local_8._0_1_ = 0x15;
        local_70 = puVar2;
        if (puVar2 == (undefined4 *)0x0) {
          local_18 = (undefined4 *)0x0;
        }
        else {
          local_2c = puVar2;
          FUN_0041bc50(puVar2);
          *puVar2 = &PTR_FUN_004bf978;
          *puVar2 = &PTR_FUN_004bfca8;
          *puVar2 = &PTR_FUN_004c25c0;
          local_18 = puVar2;
        }
        local_8 = CONCAT31(local_8._1_3_,1);
        FUN_00445e00(local_18,param_2,0,0);
      }
      goto LAB_0041b4e4;
    }
  }
  local_8._1_3_ = uVar1;
  puVar2 = FUN_00412c20(0x14a);
  local_8._0_1_ = 6;
  local_90 = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    local_18 = (undefined4 *)0x0;
  }
  else {
    local_38 = puVar2;
    FUN_0041bc50(puVar2);
    *puVar2 = &PTR_FUN_004bf978;
    *puVar2 = &PTR_FUN_004bfca8;
    *puVar2 = &PTR_FUN_004c2158;
    local_18 = puVar2;
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_0042e590(local_18,param_2);
LAB_0041b4e4:
  local_8 = 0xffffffff;
  FUN_0041bb74();
  *unaff_FS_OFFSET = local_10;
  return local_18;
}


