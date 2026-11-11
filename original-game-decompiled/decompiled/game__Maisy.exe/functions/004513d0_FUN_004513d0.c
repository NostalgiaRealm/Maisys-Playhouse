
/* ==== FUN_004513d0 @ 004513d0 ==== 
 * signature: undefined __fastcall FUN_004513d0(undefined4 * param_1)
 * body: 004513d0-00451468
 */

void __fastcall FUN_004513d0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_00451469;
  *param_1 = &PTR_FUN_004c87b0;
  *unaff_FS_OFFSET = &local_10;
  DAT_004dbc10 = 0;
  local_8 = 0;
  piVar1 = (int *)(**(code **)(**(int **)(param_1[0x14] + 0x48) + 0xf0))();
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x150))();
  }
  if ((undefined4 *)param_1[0x14] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x14])(1);
  }
  param_1[0x14] = 0;
  if (*(char *)(param_1 + 0x21) != '\0') {
    *(undefined1 *)(DAT_004dc564 + 0xac) = 1;
  }
  local_8 = 0xffffffff;
  FUN_00451473();
  *unaff_FS_OFFSET = local_10;
  return;
}


