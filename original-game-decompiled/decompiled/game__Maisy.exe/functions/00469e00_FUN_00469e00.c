
/* ==== FUN_00469e00 @ 00469e00 ==== 
 * signature: uint __fastcall FUN_00469e00(int * param_1)
 * body: 00469e00-00469f1d
 */

uint __fastcall FUN_00469e00(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *unaff_FS_OFFSET;
  AFX_EXCEPTION_LINK local_40 [24];
  int local_28;
  undefined4 local_24;
  uint *local_20;
  int *local_1c;
  undefined1 local_15;
  undefined1 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00469f69;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffffb4;
  local_1c = param_1;
  local_20 = (uint *)(**(code **)(*(int *)param_1[1] + 0x104))();
  if ((char)local_20 == '\0') {
    local_20 = (uint *)((int)local_1c + 0x7e);
    if ((*(byte *)((int)local_1c + 0x81) & 0x80) != 0) {
      local_24 = DAT_004db998;
      local_15 = DAT_004db9c4;
      AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_40);
      local_8 = 1;
      local_28 = FUN_00469df0();
      *local_20 = *local_20 & 0x7fffffff;
      DAT_004db998 = local_1c;
      DAT_004db9c4 = 0;
      iVar1 = (**(code **)(**(int **)(param_1[1] + 0x48) + 0x138))(*local_20,local_1c);
      FUN_0043bf30();
      if (iVar1 == 0) {
        (**(code **)(*local_1c + 0x268))(*(undefined4 *)((int)local_1c + 0x3a));
      }
      iVar1 = local_28;
      iVar2 = FUN_00469df0();
      *(int *)((int)local_1c + 0x7a) = iVar1 - iVar2;
      (**(code **)(*local_1c + 0xc4))(0,1);
      local_8 = 0xffffffff;
      FUN_00469f73();
      DAT_004db9c4 = local_15;
      DAT_004db998 = (int *)local_24;
      local_20 = (uint *)FUN_0040af50();
    }
  }
  *unaff_FS_OFFSET = local_10;
  return (uint)local_20 & 0xffffff00;
}


