
/* ==== FUN_00423560 @ 00423560 ==== 
 * signature: undefined __stdcall FUN_00423560(void * param_1, undefined4 param_2, undefined4 param_3)
 * body: 00423560-0042367c
 */

void FUN_00423560(void *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  short sVar3;
  int iVar4;
  undefined4 *unaff_FS_OFFSET;
  int local_34;
  int local_30;
  int *local_28;
  undefined4 *local_20;
  int local_1c;
  int local_18;
  int *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0042367d;
  *unaff_FS_OFFSET = &local_10;
  FUN_00486d60(param_1,&local_18,4);
  local_1c = *local_14;
  sVar3 = 0;
  (**(code **)(local_1c + 0xf4))(local_18);
  if (0 < local_18) {
    do {
      FUN_00486d60(param_1,&local_34,0x14);
      iVar4 = local_34;
      iVar1 = FUN_0043b950(local_34);
      FUN_00486d60(param_1,iVar1,iVar4);
      if (0xff < iVar4) {
        iVar4 = 0xff;
      }
      *(undefined1 *)(iVar4 + iVar1) = 0;
      local_34 = iVar1;
      if (local_30 == 1) {
        piVar2 = (int *)0x0;
        local_20 = FUN_00412c20(0x56);
        local_8 = 0;
        if (local_20 != (undefined4 *)0x0) {
          piVar2 = FUN_00422bd0(local_20);
        }
        local_8 = 0xffffffff;
        local_28 = piVar2;
        (**(code **)(local_1c + 0xe8))(&local_34);
        (**(code **)(*piVar2 + 0xbc))(param_1,param_2,param_3);
      }
      else {
        (**(code **)(local_1c + 0xe8))(&local_34);
      }
      sVar3 = sVar3 + 1;
    } while (sVar3 < local_18);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}


