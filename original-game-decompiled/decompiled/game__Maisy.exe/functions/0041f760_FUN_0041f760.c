
/* ==== FUN_0041f760 @ 0041f760 ==== 
 * signature: undefined4 * __thiscall FUN_0041f760(void * this, int param_1, int param_2)
 * body: 0041f760-0041f805;0041f81e-0041f855;0041f863-0041f8b1;0041f8ca-0041f8e3;0041f8f1-0041f93d;0041f956-0041f970;0041f97e-0041f9ca;0041f9e3-0041f9fd;0041fa0b-0041fa57;0041fa70-0041fa8a;0041fa98-0041fae4;0041fafd-0041fb17;0041fb25-0041fb6b;0041fb84-0041fb9e;0041fbac-0041fbf2;0041fc0b-0041fc25
 */

undefined4 * __thiscall FUN_0041f760(void *this,int param_1,int param_2)

{
  undefined3 uVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  undefined4 *unaff_FS_OFFSET;
  AFX_EXCEPTION_LINK local_88 [20];
  undefined4 *local_74;
  undefined4 *local_6c;
  undefined4 *local_64;
  undefined4 *local_5c;
  undefined4 *local_54;
  undefined4 *local_4c;
  undefined4 *local_44;
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
  pcStack_c = FUN_0041fc5d;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffff6c;
  local_18 = (undefined4 *)0x0;
  uVar2 = FUN_0041f3c0(this,param_2);
  AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_88);
  local_8._1_3_ = 0;
  uVar1 = local_8._1_3_;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  switch(uVar2) {
  case 0:
    puVar3 = FUN_00412c20(0x50);
    local_8._0_1_ = 2;
    local_74 = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      local_18 = (undefined4 *)0x0;
    }
    else {
      local_38 = puVar3;
      FUN_00412c90(puVar3,0);
      *puVar3 = &PTR_FUN_004bf780;
      *puVar3 = &PTR_FUN_004c5280;
      *puVar3 = &PTR_FUN_004c4fe0;
      local_18 = puVar3;
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_0042c130(local_18,param_1,param_2);
    break;
  case 1:
    local_8._1_3_ = uVar1;
    puVar3 = FUN_00412c20(0x50);
    local_8._0_1_ = 6;
    local_6c = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      local_34 = puVar3;
      FUN_0041fca0(puVar3);
      *puVar3 = &PTR_FUN_004c4fe0;
      *puVar3 = &PTR_FUN_004c5758;
      *puVar3 = &PTR_FUN_004c54b8;
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_0048bc10(puVar3,param_1,param_2);
    local_18 = puVar3;
    break;
  case 2:
    local_8._1_3_ = uVar1;
    puVar3 = FUN_00412c20(0x50);
    local_8._0_1_ = 10;
    local_64 = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      local_18 = (undefined4 *)0x0;
    }
    else {
      local_30 = puVar3;
      FUN_0041fca0(puVar3);
      *puVar3 = &PTR_FUN_004c4fe0;
      *puVar3 = &PTR_FUN_004c5758;
      *puVar3 = &PTR_FUN_004c6208;
      local_18 = puVar3;
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_00438ea0(local_18,param_1,param_2);
    break;
  case 3:
    local_8._1_3_ = uVar1;
    puVar3 = FUN_00412c20(0x50);
    local_8._0_1_ = 0xe;
    local_5c = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      local_18 = (undefined4 *)0x0;
    }
    else {
      local_2c = puVar3;
      FUN_0041bc50(puVar3);
      *puVar3 = &PTR_FUN_004c5280;
      *puVar3 = &PTR_FUN_004c4fe0;
      *puVar3 = &PTR_FUN_004c5758;
      local_18 = puVar3;
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_00474a20(local_18,param_1,param_2);
    break;
  case 4:
    local_8._1_3_ = uVar1;
    puVar3 = FUN_00412c20(0x50);
    local_8._0_1_ = 0x12;
    local_54 = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      local_18 = (undefined4 *)0x0;
    }
    else {
      local_28 = puVar3;
      FUN_0041bc50(puVar3);
      *puVar3 = &PTR_FUN_004c5280;
      *puVar3 = &PTR_FUN_004c4fe0;
      *puVar3 = &PTR_FUN_004c4d40;
      local_18 = puVar3;
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_0041e830(local_18,param_1,param_2);
    break;
  case 6:
    local_8._1_3_ = uVar1;
    puVar3 = FUN_00412c20(0x50);
    local_8._0_1_ = 0x16;
    local_4c = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      local_18 = (undefined4 *)0x0;
    }
    else {
      local_24 = puVar3;
      FUN_0041bc50(puVar3);
      *puVar3 = &PTR_FUN_004c5280;
      *puVar3 = &PTR_FUN_004c4fe0;
      *puVar3 = &PTR_FUN_004c64a8;
      local_18 = puVar3;
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_0042ee40(local_18,param_1,param_2);
    break;
  case 7:
    local_8._1_3_ = uVar1;
    puVar3 = FUN_00412c20(0x6e);
    local_8._0_1_ = 0x1a;
    local_44 = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      local_18 = (undefined4 *)0x0;
    }
    else {
      local_20 = puVar3;
      FUN_0041fca0(puVar3);
      *puVar3 = &PTR_FUN_004c4fe0;
      *puVar3 = &PTR_FUN_004c59f8;
      *puVar3 = &PTR_FUN_004c5ca8;
      local_18 = puVar3;
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_0047d200(local_18,param_1,param_2);
    break;
  case 8:
    local_8._1_3_ = uVar1;
    puVar3 = FUN_00412c20(0x66);
    local_8._0_1_ = 0x1e;
    local_3c = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      local_18 = (undefined4 *)0x0;
    }
    else {
      local_1c = puVar3;
      FUN_0041fca0(puVar3);
      *puVar3 = &PTR_FUN_004c4fe0;
      *puVar3 = &PTR_FUN_004c59f8;
      *puVar3 = &PTR_FUN_004c5f58;
      local_18 = puVar3;
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_00466d70(local_18,param_1,param_2);
  }
  local_8 = 0xffffffff;
  FUN_0041fc67();
  *unaff_FS_OFFSET = local_10;
  return local_18;
}


