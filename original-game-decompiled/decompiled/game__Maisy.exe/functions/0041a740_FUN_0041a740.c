
/* ==== FUN_0041a740 @ 0041a740 ==== 
 * signature: int * __cdecl FUN_0041a740(int param_1, undefined4 param_2, undefined4 param_3, int * param_4)
 * body: 0041a740-0041a7e9;0041a80a-0041a86a;0041a87b-0041a8df;0041a900-0041a919;0041a927-0041a981;0041a99a-0041a9b3;0041a9c1-0041aa25;0041aa46-0041aa5f;0041aa6d-0041aad3;0041aafa-0041ab13;0041ab21-0041ab85;0041aba6-0041abc3;0041abd1-0041ac2b;0041ac44-0041ac61;0041ac6f-0041acdd;0041ad06-0041ad1f;0041ad2d-0041ad8c;0041adad-0041adc6;0041add4-0041ae3d;0041ae66-0041ae7f
 */

int * __cdecl FUN_0041a740(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 *unaff_FS_OFFSET;
  AFX_EXCEPTION_LINK local_f4 [104];
  int *local_8c;
  int *local_84;
  int *local_7c;
  int *local_74;
  int *local_6c;
  int *local_64;
  int *local_5c;
  int *local_54;
  int *local_48;
  int *local_44;
  int *local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0041aec9;
  *unaff_FS_OFFSET = &local_10;
  local_18 = (int *)0x0;
  local_14 = &stack0xffffff00;
  AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_f4);
  local_8 = 1;
  iVar1 = *param_4;
  if (iVar1 == 8) {
    piVar2 = FUN_00412c20(0x14a);
    local_8._0_1_ = 2;
    local_8c = piVar2;
    if (piVar2 == (int *)0x0) {
      local_18 = (int *)0x0;
    }
    else {
      local_38 = piVar2;
      FUN_00412c90(piVar2,0);
      *piVar2 = (int)&PTR_FUN_004bf780;
      *piVar2 = (int)&PTR_FUN_004bf978;
      *piVar2 = (int)&PTR_FUN_004bfca8;
      *piVar2 = (int)&PTR_FUN_004c0d00;
      local_18 = piVar2;
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_00487960(local_18,param_1,0,0);
  }
  else if (iVar1 == 3) {
    piVar2 = FUN_00412c20(0x9a);
    local_8._0_1_ = 7;
    local_84 = piVar2;
    if (piVar2 == (int *)0x0) {
      local_18 = (int *)0x0;
    }
    else {
      local_34 = piVar2;
      FUN_00412c90(piVar2,0);
      *piVar2 = (int)&PTR_FUN_004bf780;
      *piVar2 = (int)&PTR_FUN_004bf978;
      *piVar2 = (int)&PTR_FUN_004c1e18;
      *piVar2 = (int)&PTR_FUN_004c1168;
      local_18 = piVar2;
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_004388a0(local_18,param_1);
  }
  else if (iVar1 == 0x21) {
    piVar2 = FUN_00412c20(0x96);
    local_8._0_1_ = 0xc;
    local_7c = piVar2;
    if (piVar2 == (int *)0x0) {
      local_18 = (int *)0x0;
    }
    else {
      local_48 = piVar2;
      FUN_00412c90(piVar2,0);
      *piVar2 = (int)&PTR_FUN_004bf780;
      *piVar2 = (int)&PTR_FUN_004bf978;
      *piVar2 = (int)&PTR_FUN_004c1e18;
      local_18 = piVar2;
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_004226d0(local_18,param_1);
  }
  else if (iVar1 == 7) {
    piVar2 = FUN_00412c20(0x14a);
    local_8._0_1_ = 0x10;
    local_74 = piVar2;
    if (piVar2 == (int *)0x0) {
      local_18 = (int *)0x0;
    }
    else {
      local_30 = piVar2;
      FUN_00412c90(piVar2,0);
      *piVar2 = (int)&PTR_FUN_004bf780;
      *piVar2 = (int)&PTR_FUN_004bf978;
      *piVar2 = (int)&PTR_FUN_004bfca8;
      *piVar2 = (int)&PTR_FUN_004c2158;
      local_18 = piVar2;
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_0042e590(local_18,param_1);
  }
  else if (iVar1 == 5) {
    piVar2 = FUN_00412c20(0x174);
    local_8._0_1_ = 0x15;
    local_6c = piVar2;
    if (piVar2 == (int *)0x0) {
      local_18 = (int *)0x0;
    }
    else {
      local_2c = piVar2;
      FUN_0041b120(piVar2);
      *piVar2 = (int)&PTR_FUN_004bfca8;
      *piVar2 = (int)&PTR_FUN_004bf2c8;
      piVar2[0x5b] = 0;
      *piVar2 = (int)&PTR_FUN_004c14a8;
      local_18 = piVar2;
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_0047dc20(local_18,param_1);
  }
  else if (iVar1 == 0x15) {
    piVar2 = FUN_00412c20(0x160);
    local_8._0_1_ = 0x1a;
    local_64 = piVar2;
    if (piVar2 == (int *)0x0) {
      local_18 = (int *)0x0;
    }
    else {
      local_28 = piVar2;
      FUN_00412c90(piVar2,0);
      *piVar2 = (int)&PTR_FUN_004bf780;
      *piVar2 = (int)&PTR_FUN_004bf978;
      *piVar2 = (int)&PTR_FUN_004bfca8;
      *piVar2 = (int)&PTR_FUN_004c25c0;
      local_18 = piVar2;
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_00445e00(local_18,param_1,0,0);
  }
  else if (iVar1 == 10) {
    piVar2 = FUN_00412c20(0xac);
    local_8._0_1_ = 0x1f;
    local_5c = piVar2;
    if (piVar2 == (int *)0x0) {
      local_18 = (int *)0x0;
    }
    else {
      local_44 = piVar2;
      FUN_00412c90(piVar2,0);
      *piVar2 = (int)&PTR_FUN_004bf780;
      *piVar2 = (int)&PTR_FUN_004bf978;
      *piVar2 = (int)&PTR_FUN_004c2ea0;
      local_18 = piVar2;
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_00473150(local_18,param_1,0,0);
  }
  else if (iVar1 == 6) {
    piVar2 = FUN_00412c20(0x172);
    local_8._0_1_ = 0x23;
    local_54 = piVar2;
    if (piVar2 == (int *)0x0) {
      local_18 = (int *)0x0;
    }
    else {
      local_20 = piVar2;
      FUN_00412c90(piVar2,0);
      *piVar2 = (int)&PTR_FUN_004bf780;
      *piVar2 = (int)&PTR_FUN_004bf978;
      *piVar2 = (int)&PTR_FUN_004bfca8;
      *piVar2 = (int)&PTR_FUN_004bf2c8;
      *piVar2 = (int)&PTR_FUN_004bee10;
      local_18 = piVar2;
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_004185c0(local_18,param_1);
  }
  else if (iVar1 == 0x26) {
    piVar2 = FUN_00412c20(0x164);
    local_8._0_1_ = 0x29;
    local_40 = piVar2;
    if (piVar2 == (int *)0x0) {
      local_18 = (int *)0x0;
    }
    else {
      local_24 = piVar2;
      FUN_00412c90(piVar2,0);
      *piVar2 = (int)&PTR_FUN_004bf780;
      *piVar2 = (int)&PTR_FUN_004bf978;
      *piVar2 = (int)&PTR_FUN_004bfca8;
      *piVar2 = (int)&PTR_FUN_004c2a38;
      local_18 = piVar2;
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_00471f80(local_18,param_1);
  }
  else {
    if (iVar1 != 0x25) goto LAB_0041a839;
    piVar2 = FUN_00412c20(0x160);
    local_8._0_1_ = 0x2e;
    local_3c = piVar2;
    if (piVar2 == (int *)0x0) {
      local_18 = (int *)0x0;
    }
    else {
      local_1c = piVar2;
      FUN_00412c90(piVar2,0);
      *piVar2 = (int)&PTR_FUN_004bf780;
      *piVar2 = (int)&PTR_FUN_004bf978;
      *piVar2 = (int)&PTR_FUN_004bfca8;
      *piVar2 = (int)&PTR_FUN_004bf2c8;
      *piVar2 = (int)&PTR_FUN_004c1960;
      local_18 = piVar2;
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_004257f0(local_18,param_1);
  }
  (**(code **)(*local_18 + 0xbc))(param_2,param_3,param_4);
LAB_0041a839:
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 0x38))(param_1);
  }
  local_8 = 0xffffffff;
  FUN_0041aed3();
  *unaff_FS_OFFSET = local_10;
  return local_18;
}


