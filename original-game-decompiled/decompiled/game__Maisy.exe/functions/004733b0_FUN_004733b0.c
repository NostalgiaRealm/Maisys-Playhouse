
/* ==== FUN_004733b0 @ 004733b0 ==== 
 * signature: int * __thiscall FUN_004733b0(void * this, int param_1)
 * body: 004733b0-00473417;00473430-00473471
 */

int * __thiscall FUN_004733b0(void *this,int param_1)

{
  int *this_00;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00473472;
  *unaff_FS_OFFSET = &local_10;
  this_00 = FUN_00412c20(0xac);
  local_8 = 0;
  if (this_00 == (int *)0x0) {
    this_00 = (int *)0x0;
  }
  else {
    FUN_00412c90(this_00,0);
    *this_00 = (int)&PTR_FUN_004bf780;
    *this_00 = (int)&PTR_FUN_004bf978;
    *this_00 = (int)&PTR_FUN_004c2ea0;
  }
  local_8 = 0xffffffff;
  FUN_00473150(this_00,param_1,0xffff,0xffff);
  (**(code **)(*this_00 + 0xe4))(this);
  (**(code **)(*this_00 + 0x2c8))();
  *unaff_FS_OFFSET = local_10;
  return this_00;
}


