
/* ==== FUN_0045d240 @ 0045d240 ==== 
 * signature: undefined __fastcall FUN_0045d240(undefined4 * param_1)
 * body: 0045d240-0045d347
 */

void __fastcall FUN_0045d240(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_4c [48];
  undefined4 *local_1c;
  undefined4 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_0045d348;
  *unaff_FS_OFFSET = &local_10;
  *param_1 = &PTR_FUN_004c8e90;
  local_8 = 0;
  iVar1 = *(int *)((int)param_1 + 0x2e);
  if (*(int *)((int)param_1 + 0x32) == iVar1) {
    *(undefined4 *)((int)param_1 + 0x32) = 0;
  }
  local_14 = param_1;
  if (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 0x26);
    iVar2 = 1;
    if (0 < iVar1) {
      do {
        FUN_00430370(*(void **)((int)local_14 + 0x2e),iVar2,local_4c);
        if (local_1c != (undefined4 *)0x0) {
          (**(code **)*local_1c)(1);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 <= iVar1);
    }
  }
  if (*(int *)((int)local_14 + 0x32) != 0) {
    iVar1 = *(int *)(*(int *)((int)local_14 + 0x32) + 0x26);
    iVar2 = 1;
    if (0 < iVar1) {
      do {
        FUN_00430370(*(void **)((int)local_14 + 0x32),iVar2,local_4c);
        if (local_1c != (undefined4 *)0x0) {
          (**(code **)*local_1c)(1);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 <= iVar1);
    }
  }
  FUN_0043f6d0(*(LPVOID *)((int)local_14 + 0x4a));
  FUN_0043f6d0((LPVOID)local_14[0x14]);
  if (*(int **)((int)local_14 + 0x2e) != (int *)0x0) {
    (**(code **)(**(int **)((int)local_14 + 0x2e) + 4))();
  }
  if (*(int **)((int)local_14 + 0x32) != (int *)0x0) {
    (**(code **)(**(int **)((int)local_14 + 0x32) + 4))();
  }
  local_8 = 0xffffffff;
  FUN_0045d352();
  *unaff_FS_OFFSET = local_10;
  return;
}


