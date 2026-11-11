
/* ==== FUN_00488b20 @ 00488b20 ==== 
 * signature: undefined __thiscall FUN_00488b20(void * this, undefined4 param_1, int param_2, int param_3)
 * body: 00488b20-00488c73
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00488b20(void *this,undefined4 param_1,int param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  DWORD DVar3;
  HWND pHVar4;
  short sVar5;
  short sVar6;
  undefined4 *unaff_FS_OFFSET;
  AFX_EXCEPTION_LINK local_30 [12];
  int local_24;
  undefined4 local_20;
  int *local_1c;
  short local_18;
  short local_16;
  undefined1 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00488c80;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffffc4;
  if (DAT_004dc57c == '\0') {
    local_1c = this;
    iVar2 = (**(code **)(*(int *)this + 0x130))();
    FUN_004a8882(local_1c);
    DAT_004dcf98 = 1;
    uVar1 = (ushort)(param_2 - DAT_004dcf9c >> 0x1f);
    local_18 = ((ushort)(param_2 - DAT_004dcf9c) ^ uVar1) - uVar1;
    uVar1 = (ushort)(param_3 - DAT_004dcf9e >> 0x1f);
    local_16 = ((ushort)(param_3 - DAT_004dcf9e) ^ uVar1) - uVar1;
    DVar3 = timeGetTime();
    local_24 = (DVar3 * 6) / 100 - _DAT_004dcfa0;
    DVar3 = timeGetTime();
    sVar5 = (short)param_2;
    sVar6 = (short)param_3;
    _DAT_004dcfa0 = (DVar3 * 6) / 100;
    if (((local_18 < 5) && (local_16 < 5)) && (local_24 < 0x33)) {
      DAT_004dcf7c = DAT_004dcf7c + 1;
    }
    else {
      DAT_004dcf7c = 1;
    }
    DAT_004dcf9c = sVar5;
    DAT_004dcf9e = sVar6;
    if (((iVar2 != 0) && (*(int *)(iVar2 + 0x50) != 0)) &&
       (*(int *)(*(int *)(iVar2 + 0x50) + 0x82) != 0)) {
      AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_30);
      local_8 = 1;
      local_20 = CONCAT22(sVar6,sVar5);
      (**(code **)(*(int *)local_1c[0x10] + 0xf4))(local_20,0,0);
      local_8 = 0xffffffff;
      FUN_00488c8a();
      pHVar4 = SetCapture((HWND)local_1c[7]);
      CWnd::FromHandle(pHVar4);
    }
  }
  *unaff_FS_OFFSET = local_10;
  return;
}


