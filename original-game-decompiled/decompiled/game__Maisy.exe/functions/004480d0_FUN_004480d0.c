
/* ==== FUN_004480d0 @ 004480d0 ==== 
 * signature: undefined __fastcall FUN_004480d0(undefined4 * param_1)
 * body: 004480d0-0044812f
 */

void __fastcall FUN_004480d0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_00448130;
  *param_1 = &PTR_FUN_004c8248;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  FUN_00470b90((int)param_1);
  if (*(undefined4 **)((int)param_1 + 0x2a) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x2a))(1);
  }
  local_8 = 0xffffffff;
  FUN_0044813a();
  *unaff_FS_OFFSET = local_10;
  return;
}


