
/* ==== FUN_0045c5d0 @ 0045c5d0 ==== 
 * signature: undefined __fastcall FUN_0045c5d0(undefined4 * param_1)
 * body: 0045c5d0-0045c66c
 */

void __fastcall FUN_0045c5d0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_0045c66d;
  *param_1 = &PTR_FUN_004c8d28;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  if (param_1[0x16] != 0) {
    FUN_00402210(param_1[0x16]);
  }
  if (*(undefined4 **)((int)param_1 + 0x36) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x36))(1);
    *(undefined4 *)((int)param_1 + 0x36) = 0;
  }
  if ((int *)param_1[0x17] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x17] + 4))(1);
  }
  if ((int *)param_1[0x18] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x18] + 4))(1);
  }
  if ((int *)param_1[0x19] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x19] + 4))(1);
  }
  local_8 = 0xffffffff;
  FUN_0045c677();
  *unaff_FS_OFFSET = local_10;
  return;
}


