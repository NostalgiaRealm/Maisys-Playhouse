
/* ==== FUN_0043bec0 @ 0043bec0 ==== 
 * signature: undefined __fastcall FUN_0043bec0(undefined4 * param_1)
 * body: 0043bec0-0043bf1d
 */

void __fastcall FUN_0043bec0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_0043bf1e;
  *param_1 = &PTR_FUN_004c7cac;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 8))(1,0);
    param_1[1] = 0;
  }
  local_8 = 0xffffffff;
  FUN_0043bf28();
  *unaff_FS_OFFSET = local_10;
  return;
}


