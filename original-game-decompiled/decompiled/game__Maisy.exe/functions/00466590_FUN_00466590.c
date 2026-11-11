
/* ==== FUN_00466590 @ 00466590 ==== 
 * signature: undefined __fastcall FUN_00466590(undefined4 * param_1)
 * body: 00466590-004665e0
 */

void __fastcall FUN_00466590(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_004665e1;
  *param_1 = &PTR_FUN_004be4b8;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  if (*(undefined4 **)((int)param_1 + 0x2e) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x2e))(1,param_1);
  }
  local_8 = 0xffffffff;
  FUN_004665eb();
  *unaff_FS_OFFSET = local_10;
  return;
}


