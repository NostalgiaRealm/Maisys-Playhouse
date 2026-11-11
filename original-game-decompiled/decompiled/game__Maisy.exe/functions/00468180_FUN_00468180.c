
/* ==== FUN_00468180 @ 00468180 ==== 
 * signature: undefined4 __cdecl FUN_00468180(undefined4 param_1, int * param_2, undefined4 param_3)
 * body: 00468180-004681f2
 */

undefined4 __cdecl FUN_00468180(undefined4 param_1,int *param_2,undefined4 param_3)

{
  undefined4 *unaff_FS_OFFSET;
  AFX_EXCEPTION_LINK local_24 [12];
  undefined4 local_18;
  undefined1 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00468206;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffffd0;
  if (param_2 == (int *)0x0) {
    local_18 = 0x10001;
  }
  else {
    local_18 = 0;
    AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_24);
    local_8 = 1;
    (**(code **)(*param_2 + 0xe8))(param_3);
    local_8 = 0xffffffff;
    FUN_00468210();
  }
  *unaff_FS_OFFSET = local_10;
  return local_18;
}


