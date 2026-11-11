
/* ==== FUN_00489b80 @ 00489b80 ==== 
 * signature: undefined __thiscall FUN_00489b80(void * this, undefined4 param_1, undefined2 param_2, undefined2 param_3)
 * body: 00489b80-00489ca8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00489b80(void *this,undefined4 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  DWORD DVar2;
  int *piVar3;
  undefined4 *unaff_FS_OFFSET;
  AFX_EXCEPTION_LINK local_38 [8];
  AFX_EXCEPTION_LINK local_30 [16];
  undefined4 local_20;
  undefined4 local_1c;
  int *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00489cc9;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffffbc;
  if (DAT_004dc57c == '\0') {
    local_18 = this;
    FUN_004a8882(this);
    if ((DAT_004dcf98 != '\0') && (piVar3 = local_18 + 0x10, *piVar3 != 0)) {
      iVar1 = (**(code **)(*local_18 + 0x130))();
      if ((iVar1 != 0) &&
         ((*(int *)(iVar1 + 0x50) != 0 && (*(int *)(*(int *)(iVar1 + 0x50) + 0x82) != 0)))) {
        AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_38);
        local_8 = 1;
        local_20 = CONCAT22(param_3,param_2);
        (**(code **)(*(int *)*piVar3 + 0xfc))(local_20,0,0);
        local_8 = 0xffffffff;
        FUN_00489cb5();
      }
      DVar2 = timeGetTime();
      _DAT_004dcfa0 = (DVar2 * 6) / 100;
    }
    piVar3 = local_18 + 0x10;
    DAT_004db500 = param_2;
    DAT_004db502 = param_3;
    if (*piVar3 != 0) {
      AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_30);
      local_8 = 4;
      local_1c = CONCAT22(param_3,param_2);
      (**(code **)(*(int *)*piVar3 + 0x104))(local_1c,0);
      local_8 = 0xffffffff;
      FUN_00489cd3();
    }
  }
  *unaff_FS_OFFSET = local_10;
  return;
}


