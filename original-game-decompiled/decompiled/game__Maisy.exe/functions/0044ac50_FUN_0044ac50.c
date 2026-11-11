
/* ==== FUN_0044ac50 @ 0044ac50 ==== 
 * signature: undefined __stdcall FUN_0044ac50(void * param_1, undefined4 param_2, undefined4 * param_3)
 * body: 0044ac50-0044ad80
 */

void FUN_0044ac50(void *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_44 [3];
  int local_36;
  undefined4 local_32;
  int local_2c [2];
  undefined4 *local_24;
  undefined4 *local_20;
  int local_1c;
  int *local_18;
  short local_12;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0044ad81;
  *unaff_FS_OFFSET = &local_10;
  FUN_00486dd0(param_1,local_44,param_3,0x16);
  *(undefined4 *)((int)local_18 + 0x4a) = local_32;
  local_1c = *local_18;
  (**(code **)(local_1c + 0xf4))(local_36);
  local_12 = 1;
  if (0 < local_36) {
    do {
      FUN_00486d60(param_1,local_2c,0xc);
      iVar1 = local_2c[0];
      local_2c[0] = 0;
      local_20 = FUN_00412c20(0x56);
      local_8 = 0;
      if (local_20 == (undefined4 *)0x0) {
        local_24 = (undefined4 *)0x0;
      }
      else {
        local_24 = FUN_00422bd0(local_20);
      }
      local_8 = 0xffffffff;
      (**(code **)(local_1c + 0xfc))(local_2c);
      FUN_00430190((int)local_18);
      piVar2 = (int *)FUN_004301c0(local_18,(int)local_12);
      iVar3 = FUN_0043b950(iVar1);
      *piVar2 = iVar3;
      FUN_00486d60(param_1,iVar3,iVar1);
      *(undefined1 *)(iVar3 + iVar1) = 0;
      (**(code **)(*(int *)piVar2[2] + 0xbc))(param_1,param_2,param_3);
      FUN_004301f0((int)local_18);
      local_12 = local_12 + 1;
    } while (local_12 <= local_36);
  }
  (**(code **)(local_1c + 0x1c))(0);
  *unaff_FS_OFFSET = local_10;
  return;
}


