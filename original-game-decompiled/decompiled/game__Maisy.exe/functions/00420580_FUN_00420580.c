
/* ==== FUN_00420580 @ 00420580 ==== 
 * signature: undefined __fastcall FUN_00420580(undefined4 * param_1)
 * body: 00420580-004206a8
 */

void __fastcall FUN_00420580(undefined4 *param_1)

{
  LPVOID pvVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_004206a9;
  *param_1 = &PTR_FUN_004c6748;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  if (*(LPVOID *)((int)param_1 + 0x15a) != (LPVOID)0x0) {
    FUN_00434950(*(LPVOID *)((int)param_1 + 0x15a));
    *(undefined4 *)((int)param_1 + 0x15a) = 0;
  }
  if (*(int **)((int)param_1 + 0x15e) != (int *)0x0) {
    (**(code **)(**(int **)((int)param_1 + 0x15e) + 4))();
    *(undefined4 *)((int)param_1 + 0x15e) = 0;
  }
  if (*(LPVOID *)((int)param_1 + 0x166) != (LPVOID)0x0) {
    FUN_00434950(*(LPVOID *)((int)param_1 + 0x166));
    *(undefined4 *)((int)param_1 + 0x166) = 0;
  }
  if ((*(int *)((int)param_1 + 0x152) != 0) &&
     (pvVar1 = *(LPVOID *)(*(int *)((int)param_1 + 0x152) + 0x2c), pvVar1 != (LPVOID)0x0)) {
    FUN_00434950(pvVar1);
    *(undefined4 *)(*(int *)((int)param_1 + 0x152) + 0x2c) = 0;
  }
  if (*(LPVOID *)((int)param_1 + 0x152) != (LPVOID)0x0) {
    FUN_00434950(*(LPVOID *)((int)param_1 + 0x152));
    *(undefined4 *)((int)param_1 + 0x152) = 0;
  }
  if ((LPVOID)param_1[0x65] != (LPVOID)0x0) {
    FUN_00434950((LPVOID)param_1[0x65]);
    param_1[0x65] = 0;
  }
  if (*(int **)((int)param_1 + 0x1d2) != (int *)0x0) {
    (**(code **)(**(int **)((int)param_1 + 0x1d2) + 4))();
    *(undefined4 *)((int)param_1 + 0x1d2) = 0;
  }
  local_8 = 0xffffffff;
  FUN_004206b3();
  *unaff_FS_OFFSET = local_10;
  return;
}


