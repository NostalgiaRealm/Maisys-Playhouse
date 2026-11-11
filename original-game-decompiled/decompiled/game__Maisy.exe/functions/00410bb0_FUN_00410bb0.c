
/* ==== FUN_00410bb0 @ 00410bb0 ==== 
 * signature: undefined __fastcall FUN_00410bb0(undefined4 * param_1)
 * body: 00410bb0-00410c80
 */

void __fastcall FUN_00410bb0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *unaff_FS_OFFSET;
  HMODULE local_18;
  undefined4 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_00410c81;
  *unaff_FS_OFFSET = &local_10;
  *param_1 = &PTR_FUN_004be7e0;
  local_8 = 0;
  local_14 = param_1;
  if (*(HCURSOR *)((int)param_1 + 0xc2) != (HCURSOR)0x0) {
    DestroyCursor(*(HCURSOR *)((int)param_1 + 0xc2));
    *(undefined2 *)((int)local_14 + 0xc6) = 0xffff;
    *(undefined4 *)((int)local_14 + 0xc2) = 0;
  }
  iVar1 = 1;
  if (0 < *(int *)(*(int *)((int)local_14 + 0xca) + 0x26)) {
    do {
      iVar2 = iVar1 + 1;
      FUN_00430370(*(void **)((int)local_14 + 0xca),iVar1,&local_18);
      FreeLibrary(local_18);
      iVar1 = iVar2;
    } while (iVar2 <= *(int *)(*(int *)((int)local_14 + 0xca) + 0x26));
  }
  FUN_0042fc00(*(void **)((int)local_14 + 0xca));
  if (*(undefined4 **)((int)local_14 + 0xca) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)local_14 + 0xca))(1);
  }
  local_8 = 0xffffffff;
  FUN_00410c8b();
  *unaff_FS_OFFSET = local_10;
  return;
}


