
/* ==== thunk_FUN_004103e0 @ 0045c7d0 ==== 
 * signature: undefined __fastcall thunk_FUN_004103e0(int * param_1)
 * body: 0045c7d0-0045c7d4
 * thunk to: FUN_004103e0
 */

void __fastcall thunk_FUN_004103e0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *unaff_FS_OFFSET;
  AFX_EXCEPTION_LINK aAStack_30 [12];
  undefined4 *puStack_24;
  undefined4 *puStack_20;
  int *piStack_1c;
  int *piStack_18;
  undefined1 *puStack_14;
  undefined4 uStack_10;
  code *pcStack_c;
  undefined4 uStack_8;
  
  uStack_10 = *unaff_FS_OFFSET;
  uStack_8 = 0xffffffff;
  pcStack_c = FUN_00410505;
  *unaff_FS_OFFSET = &uStack_10;
  piStack_18 = (int *)((int)param_1 + 0x26);
  puStack_14 = &stack0xffffffc4;
  *piStack_18 = 0;
  piStack_1c = (int *)((int)param_1 + 0x2a);
  puStack_24 = (undefined4 *)((int)param_1 + 0x2e);
  *piStack_1c = 0;
  *puStack_24 = 0;
  puStack_20 = (undefined4 *)((int)param_1 + 0x32);
  *puStack_20 = 0;
  AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(aAStack_30);
  uStack_8 = 1;
  iVar2 = *param_1;
  iVar1 = (**(code **)(iVar2 + 0x150))((int)*(short *)((int)param_1 + 0x46));
  *piStack_18 = iVar1;
  if (*piStack_18 != 0) {
    iVar2 = (**(code **)(iVar2 + 0x154))(*(undefined4 *)((int)param_1 + 0x36),DAT_004da360);
    *piStack_1c = iVar2;
    if ((*piStack_1c != 0) && (*(int *)((int)param_1 + 0x36) != 0)) {
      *(int *)(*(int *)((int)param_1 + 0x36) + 0x3e) = *piStack_1c;
    }
    *puStack_20 = 0;
    FUN_0045eff0();
  }
  uStack_8 = 0xffffffff;
  FUN_0041050f();
  *unaff_FS_OFFSET = uStack_10;
  return;
}


