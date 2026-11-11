
/* ==== FUN_00466970 @ 00466970 ==== 
 * signature: undefined __fastcall FUN_00466970(undefined4 * param_1)
 * body: 00466970-00466a4d
 */

void __fastcall FUN_00466970(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_00466a4e;
  *param_1 = &PTR_FUN_004be3b0;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  *(undefined1 *)(param_1 + 0x14) = 1;
  if (*(undefined4 **)((int)param_1 + 0x2e) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x2e))(1);
    *(undefined4 *)((int)param_1 + 0x2e) = 0;
  }
  if ((int *)param_1[0xe] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xe] + 4))();
    param_1[0xe] = 0;
  }
  if ((int *)param_1[0xf] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xf] + 4))();
    param_1[0xf] = 0;
  }
  if ((int *)param_1[0x10] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x10] + 4))();
    param_1[0x10] = 0;
  }
  if ((undefined4 *)param_1[0x11] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x11])(1);
    param_1[0x11] = 0;
  }
  if ((undefined4 *)param_1[0x12] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x12])(1);
    param_1[0x12] = 0;
  }
  local_8 = 0xffffffff;
  FUN_00466a58();
  *unaff_FS_OFFSET = local_10;
  return;
}


