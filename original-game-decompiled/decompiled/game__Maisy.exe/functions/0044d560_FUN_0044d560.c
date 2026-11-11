
/* ==== FUN_0044d560 @ 0044d560 ==== 
 * signature: int * __cdecl FUN_0044d560(int param_1)
 * body: 0044d560-0044d5c5;0044d5de-0044d614
 */

int * __cdecl FUN_0044d560(int param_1)

{
  int *this;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0044d615;
  *unaff_FS_OFFSET = &local_10;
  this = FUN_00412c20(0xcc);
  local_8 = 0;
  if (this == (int *)0x0) {
    this = (int *)0x0;
  }
  else {
    FUN_00412c90(this,0);
    *this = (int)&PTR_FUN_004c4528;
    *this = (int)&PTR_FUN_004c4b58;
    *this = (int)&PTR_FUN_004c4338;
  }
  local_8 = 0xffffffff;
  FUN_00411b80(this,param_1,8,0);
  (**(code **)(*this + 0x74))(s_Macintosh_8bit_004dbbcc);
  *unaff_FS_OFFSET = local_10;
  return this;
}


