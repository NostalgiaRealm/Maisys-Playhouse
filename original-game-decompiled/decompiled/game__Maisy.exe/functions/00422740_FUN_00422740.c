
/* ==== FUN_00422740 @ 00422740 ==== 
 * signature: int * __thiscall FUN_00422740(void * this, int param_1)
 * body: 00422740-004227a7;004227c0-004227fd
 */

int * __thiscall FUN_00422740(void *this,int param_1)

{
  int *this_00;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_004227fe;
  *unaff_FS_OFFSET = &local_10;
  this_00 = FUN_00412c20(0x96);
  local_8 = 0;
  if (this_00 == (int *)0x0) {
    this_00 = (int *)0x0;
  }
  else {
    FUN_00412c90(this_00,0);
    *this_00 = (int)&PTR_FUN_004bf780;
    *this_00 = (int)&PTR_FUN_004bf978;
    *this_00 = (int)&PTR_FUN_004c1e18;
  }
  local_8 = 0xffffffff;
  FUN_004226d0(this_00,param_1);
  (**(code **)(*this_00 + 0xe4))(this);
  (**(code **)(*this_00 + 0x2c8))();
  *unaff_FS_OFFSET = local_10;
  return this_00;
}


