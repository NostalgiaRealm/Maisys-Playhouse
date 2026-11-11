
/* ==== FUN_004180a0 @ 004180a0 ==== 
 * signature: undefined __fastcall FUN_004180a0(undefined4 * param_1)
 * body: 004180a0-00418120
 */

void __fastcall FUN_004180a0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_1c [8];
  undefined4 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_00418121;
  *param_1 = &PTR_FUN_004bed10;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  local_14 = param_1;
  if (*(int *)((int)param_1 + 0x4a) != 0) {
    FUN_00418560(local_1c,param_1);
    (**(code **)(**(int **)((int)local_14 + 0x4a) + 0xf0))(local_1c,0);
    if (*(undefined4 **)((int)local_14 + 0x4a) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)local_14 + 0x4a))(1);
    }
    *(undefined4 *)((int)local_14 + 0x4a) = 0;
  }
  local_8 = 0xffffffff;
  FUN_0041812b();
  *unaff_FS_OFFSET = local_10;
  return;
}


