
/* ==== FUN_004103e0 @ 004103e0 ==== 
 * signature: undefined __fastcall FUN_004103e0(int * param_1)
 * body: 004103e0-004104b4
 */

void __fastcall FUN_004103e0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *unaff_FS_OFFSET;
  AFX_EXCEPTION_LINK local_30 [12];
  undefined4 *local_24;
  undefined4 *local_20;
  int *local_1c;
  int *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00410505;
  *unaff_FS_OFFSET = &local_10;
  local_18 = (int *)((int)param_1 + 0x26);
  local_14 = &stack0xffffffc4;
  *local_18 = 0;
  local_1c = (int *)((int)param_1 + 0x2a);
  local_24 = (undefined4 *)((int)param_1 + 0x2e);
  *local_1c = 0;
  *local_24 = 0;
  local_20 = (undefined4 *)((int)param_1 + 0x32);
  *local_20 = 0;
  AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_30);
  local_8 = 1;
  iVar2 = *param_1;
  iVar1 = (**(code **)(iVar2 + 0x150))((int)*(short *)((int)param_1 + 0x46));
  *local_18 = iVar1;
  if (*local_18 != 0) {
    iVar2 = (**(code **)(iVar2 + 0x154))(*(undefined4 *)((int)param_1 + 0x36),DAT_004da360);
    *local_1c = iVar2;
    if ((*local_1c != 0) && (*(int *)((int)param_1 + 0x36) != 0)) {
      *(int *)(*(int *)((int)param_1 + 0x36) + 0x3e) = *local_1c;
    }
    *local_20 = 0;
    FUN_0045eff0();
  }
  local_8 = 0xffffffff;
  FUN_0041050f();
  *unaff_FS_OFFSET = local_10;
  return;
}


