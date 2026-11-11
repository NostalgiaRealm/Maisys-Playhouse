
/* ==== FUN_00459e00 @ 00459e00 ==== 
 * signature: undefined __fastcall FUN_00459e00(void * param_1)
 * body: 00459e00-00459f20
 */

void __fastcall FUN_00459e00(void *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *unaff_FS_OFFSET;
  undefined4 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00459f3b;
  *unaff_FS_OFFSET = &local_10;
  puVar1 = FUN_00412c20(0x56);
  puVar3 = (undefined4 *)0x0;
  local_8 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = FUN_00422bd0(puVar1);
  }
  local_8 = 0xffffffff;
  puVar4 = (undefined4 *)0x0;
  puVar1 = FUN_00412c20(0x56);
  local_8 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    puVar4 = FUN_00422bd0(puVar1);
  }
  local_8 = 0xffffffff;
  puVar1 = FUN_00412c20(0x56);
  local_8 = 2;
  if (puVar1 == (undefined4 *)0x0) {
    local_14 = (undefined4 *)0x0;
  }
  else {
    local_14 = FUN_00422bd0(puVar1);
  }
  local_8 = 0xffffffff;
  (**(code **)(**(int **)((int)param_1 + 0x44) + 0x100))(s_Toon_Ranges_004da084,3,puVar3);
  (**(code **)(**(int **)((int)param_1 + 0x44) + 0x100))(s_Sound_Markers_004dc0c4,4,puVar4);
  (**(code **)(**(int **)((int)param_1 + 0x44) + 0x100))(s_QuickTime_Ranges_004dc0b0,5,local_14);
  pvVar2 = (void *)FUN_00466a70((int)param_1);
  FUN_0044d6a0(pvVar2);
  FUN_0045ab90(param_1,0,0x4dafe0,'\x01');
  FUN_0045a490(param_1,'\0');
  *unaff_FS_OFFSET = local_10;
  return;
}


