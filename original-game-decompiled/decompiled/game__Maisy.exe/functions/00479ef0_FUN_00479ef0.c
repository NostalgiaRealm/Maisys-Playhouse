
/* ==== FUN_00479ef0 @ 00479ef0 ==== 
 * signature: undefined4 * __cdecl FUN_00479ef0(int * param_1, undefined4 param_2)
 * body: 00479ef0-00479f71
 */

undefined4 * __cdecl FUN_00479ef0(int *param_1,undefined4 param_2)

{
  undefined4 *this;
  undefined4 *unaff_FS_OFFSET;
  undefined4 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00479f72;
  *unaff_FS_OFFSET = &local_10;
  this = FUN_00412c20(0x4a);
  local_8 = 0;
  local_18 = (undefined4 *)0x0;
  if (this != (undefined4 *)0x0) {
    local_18 = FUN_0042f970(this,4,0,'\0',0,'\0');
  }
  local_8 = 0xffffffff;
  local_14 = param_2;
  (**(code **)(*param_1 + 0x130))(FUN_00479f90,&local_18);
  *unaff_FS_OFFSET = local_10;
  return local_18;
}


