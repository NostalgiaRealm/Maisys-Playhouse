
/* ==== FUN_0042e5d0 @ 0042e5d0 ==== 
 * signature: int * __thiscall FUN_0042e5d0(void * this, int param_1)
 * body: 0042e5d0-0042e641;0042e662-0042e69f
 */

int * __thiscall FUN_0042e5d0(void *this,int param_1)

{
  int *this_00;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0042e6a0;
  *unaff_FS_OFFSET = &local_10;
  this_00 = FUN_00412c20(0x14a);
  local_8 = 0;
  if (this_00 == (int *)0x0) {
    this_00 = (int *)0x0;
  }
  else {
    FUN_00412c90(this_00,0);
    *this_00 = (int)&PTR_FUN_004bf780;
    *this_00 = (int)&PTR_FUN_004bf978;
    *this_00 = (int)&PTR_FUN_004bfca8;
    *this_00 = (int)&PTR_FUN_004c2158;
  }
  local_8 = 0xffffffff;
  FUN_0042e590(this_00,param_1);
  (**(code **)(*this_00 + 0xe4))(this);
  (**(code **)(*this_00 + 0x2c8))();
  *unaff_FS_OFFSET = local_10;
  return this_00;
}


