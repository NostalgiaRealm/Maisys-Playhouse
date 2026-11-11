
/* ==== FUN_00478450 @ 00478450 ==== 
 * signature: undefined __fastcall FUN_00478450(undefined4 * param_1)
 * body: 00478450-0047859f
 */

void __fastcall FUN_00478450(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_48 [12];
  LPVOID local_3c;
  int local_38;
  undefined1 local_34 [4];
  LPVOID local_30;
  LPVOID local_2c;
  int *local_24;
  int *local_20;
  undefined4 *local_1c;
  int local_18;
  undefined4 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_004785a0;
  *unaff_FS_OFFSET = &local_10;
  *param_1 = &PTR_FUN_004c9d30;
  local_8 = 0;
  local_14 = param_1;
  if (param_1[0x15] != 0) {
    local_18 = 1;
    local_38 = *(int *)(param_1[0x15] + 0x26);
    if (0 < local_38) {
      do {
        FUN_00430370((void *)local_14[0x15],local_18,local_34);
        if (local_30 != (LPVOID)0x0) {
          FUN_0043f6d0(local_30);
        }
        if (local_2c != (LPVOID)0x0) {
          FUN_0043f6d0(local_2c);
        }
        if ((local_20 != (int *)0x0) && (local_20 != local_24)) {
          (**(code **)(*local_20 + 0x150))();
          (**(code **)(*local_20 + 4))();
        }
        local_20 = (int *)0x0;
        if (local_24 != (int *)0x0) {
          (**(code **)(*local_24 + 0x150))();
          (**(code **)(*local_24 + 4))();
          local_24 = (int *)0x0;
        }
        if (local_1c != (undefined4 *)0x0) {
          iVar2 = 1;
          iVar1 = *(int *)((int)local_1c + 0x26);
          if (0 < iVar1) {
            do {
              FUN_00430370(local_1c,iVar2,local_48);
              if (local_3c != (LPVOID)0x0) {
                FUN_0043f6d0(local_3c);
              }
              iVar2 = iVar2 + 1;
            } while (iVar2 <= iVar1);
          }
          if (local_1c != (undefined4 *)0x0) {
            (**(code **)*local_1c)(1);
          }
          local_1c = (undefined4 *)0x0;
        }
        local_18 = local_18 + 1;
      } while (local_18 <= local_38);
    }
    if ((undefined4 *)local_14[0x15] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)local_14[0x15])(1);
    }
    local_14[0x15] = 0;
  }
  local_8 = 0xffffffff;
  FUN_004785aa();
  *unaff_FS_OFFSET = local_10;
  return;
}


