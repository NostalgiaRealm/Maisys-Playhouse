
/* ==== FUN_0041be50 @ 0041be50 ==== 
 * signature: int * __cdecl FUN_0041be50(int param_1, int param_2)
 * body: 0041be50-0041bee6;0041beff-0041bf3d;0041bf4b-0041bfa7;0041bfc0-0041bfd8;0041bfe6-0041c042;0041c05b-0041c073;0041c081-0041c0dd;0041c0f6-0041c10e;0041c11c-0041c170;0041c189-0041c1aa;0041c1b8-0041c20c;0041c225-0041c23d
 */

int * __cdecl FUN_0041be50(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *unaff_FS_OFFSET;
  AFX_EXCEPTION_LINK local_84 [40];
  int *local_5c;
  int *local_54;
  int *local_4c;
  int *local_44;
  int *local_3c;
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
  pcStack_c = FUN_0041c275;
  *unaff_FS_OFFSET = &local_10;
  local_18 = (int *)0x0;
  local_14 = &stack0xffffff70;
  AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_84);
  local_8 = 1;
  if (param_1 == 0xe) {
    piVar1 = FUN_00412c20(0x160);
    local_8._0_1_ = 2;
    local_5c = piVar1;
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      local_30 = piVar1;
      FUN_00412c90(piVar1,0);
      *piVar1 = (int)&PTR_FUN_004c4528;
      *piVar1 = (int)&PTR_FUN_004c3838;
      *piVar1 = (int)&PTR_FUN_004c4100;
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    local_18 = piVar1;
    FUN_0041c880(piVar1,param_2);
LAB_0041bf13:
    iVar2 = *piVar1;
  }
  else {
    if (param_1 == 0x10) {
      piVar1 = FUN_00412c20(0x168);
      local_8._0_1_ = 6;
      local_54 = piVar1;
      if (piVar1 == (int *)0x0) {
        piVar1 = (int *)0x0;
      }
      else {
        local_2c = piVar1;
        FUN_00412c90(piVar1,0);
        *piVar1 = (int)&PTR_FUN_004c4528;
        *piVar1 = (int)&PTR_FUN_004c3838;
        *piVar1 = (int)&PTR_FUN_004c3ec8;
      }
      local_8 = CONCAT31(local_8._1_3_,1);
      local_18 = piVar1;
      FUN_0044a010(piVar1,param_2);
      goto LAB_0041bf13;
    }
    if (param_1 == 0x1f) {
      piVar1 = FUN_00412c20(0x192);
      local_8._0_1_ = 10;
      local_4c = piVar1;
      if (piVar1 == (int *)0x0) {
        piVar1 = (int *)0x0;
      }
      else {
        local_28 = piVar1;
        FUN_00412c90(piVar1,0);
        *piVar1 = (int)&PTR_FUN_004c4528;
        *piVar1 = (int)&PTR_FUN_004c3838;
        *piVar1 = (int)&PTR_FUN_004c3c90;
      }
      local_8 = CONCAT31(local_8._1_3_,1);
      local_18 = piVar1;
      FUN_00448af0(piVar1,param_2);
      goto LAB_0041bf13;
    }
    if (param_1 == 0x11) {
      piVar1 = FUN_00412c20(0x100);
      local_8._0_1_ = 0xe;
      local_44 = piVar1;
      if (piVar1 == (int *)0x0) {
        piVar1 = (int *)0x0;
      }
      else {
        local_24 = piVar1;
        FUN_00412c90(piVar1,0);
        *piVar1 = (int)&PTR_FUN_004c4528;
        *piVar1 = (int)&PTR_FUN_004c4938;
        *piVar1 = (int)&PTR_FUN_004c3a70;
      }
      local_8 = CONCAT31(local_8._1_3_,1);
      local_18 = piVar1;
      FUN_00430e70(piVar1,param_2);
      goto LAB_0041bf13;
    }
    if (param_1 != 0x1e) {
      if (param_1 != 0x24) goto LAB_0041bf1e;
      piVar1 = FUN_00412c20(0x162);
      local_8._0_1_ = 0x16;
      local_34 = piVar1;
      if (piVar1 == (int *)0x0) {
        piVar1 = (int *)0x0;
      }
      else {
        local_1c = piVar1;
        FUN_00412c90(piVar1,0);
        *piVar1 = (int)&PTR_FUN_004c4528;
        *piVar1 = (int)&PTR_FUN_004c3838;
        *piVar1 = (int)&PTR_FUN_004c4700;
      }
      local_8 = CONCAT31(local_8._1_3_,1);
      local_18 = piVar1;
      FUN_00474f30(piVar1,param_2);
      goto LAB_0041bf13;
    }
    piVar1 = FUN_00412c20(0xcc);
    local_8._0_1_ = 0x12;
    local_3c = piVar1;
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      local_20 = piVar1;
      FUN_00412c90(piVar1,0);
      *piVar1 = (int)&PTR_FUN_004c4528;
      *piVar1 = (int)&PTR_FUN_004c4b58;
      *piVar1 = (int)&PTR_FUN_004c4338;
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    local_18 = piVar1;
    FUN_00411b80(piVar1,param_2,0xffff,0);
    iVar2 = *piVar1;
  }
  (**(code **)(iVar2 + 0x174))(param_1);
LAB_0041bf1e:
  local_8 = 0xffffffff;
  FUN_0041c27f();
  *unaff_FS_OFFSET = local_10;
  return local_18;
}


