
/* ==== FUN_004388f0 @ 004388f0 ==== 
 * signature: int * __thiscall FUN_004388f0(void * this, int param_1)
 * body: 004388f0-00438962;00438983-004389cb
 */

int * __thiscall FUN_004388f0(void *this,int param_1)

{
  int iVar1;
  int *this_00;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_004389cc;
  *unaff_FS_OFFSET = &local_10;
  this_00 = FUN_00412c20(0x9a);
  local_8 = 0;
  if (this_00 == (int *)0x0) {
    this_00 = (int *)0x0;
  }
  else {
    FUN_00412c90(this_00,0);
    *this_00 = (int)&PTR_FUN_004bf780;
    *this_00 = (int)&PTR_FUN_004bf978;
    *this_00 = (int)&PTR_FUN_004c1e18;
    *this_00 = (int)&PTR_FUN_004c1168;
  }
  local_8 = 0xffffffff;
  FUN_004388a0(this_00,param_1);
  iVar1 = *this_00;
  (**(code **)(iVar1 + 0xe4))(this);
  (**(code **)(iVar1 + 0x2c8))();
  (**(code **)(iVar1 + 0x270))(0xffffffff);
  *unaff_FS_OFFSET = local_10;
  return this_00;
}


