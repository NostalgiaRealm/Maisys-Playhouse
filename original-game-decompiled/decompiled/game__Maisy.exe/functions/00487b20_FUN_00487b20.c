
/* ==== FUN_00487b20 @ 00487b20 ==== 
 * signature: int * __thiscall FUN_00487b20(void * this, int param_1)
 * body: 00487b20-00487b92;00487bb3-00487c27
 */

int * __thiscall FUN_00487b20(void *this,int param_1)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_20 [8];
  int *local_18;
  int *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00487c30;
  *unaff_FS_OFFSET = &local_10;
  local_14 = FUN_00412c20(0x14a);
  local_8 = 0;
  if (local_14 == (int *)0x0) {
    local_18 = (int *)0x0;
  }
  else {
    FUN_00412c90(local_14,0);
    local_18 = local_14;
    *local_14 = (int)&PTR_FUN_004bf780;
    *local_14 = (int)&PTR_FUN_004bf978;
    *local_14 = (int)&PTR_FUN_004bfca8;
    *local_14 = (int)&PTR_FUN_004c0d00;
  }
  local_8 = 0xffffffff;
  FUN_0043be20(local_20,local_18);
  local_8 = 5;
  FUN_00487960(local_18,param_1,0xffff,0xffff);
  iVar1 = *local_18;
  (**(code **)(iVar1 + 0xe4))(this);
  (**(code **)(iVar1 + 0x2c8))();
  FUN_0043be10(local_20,0);
  local_8 = 0xffffffff;
  FUN_00487c28();
  *unaff_FS_OFFSET = local_10;
  return local_18;
}


