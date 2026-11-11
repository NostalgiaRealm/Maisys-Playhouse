
/* ==== FUN_0043f9a0 @ 0043f9a0 ==== 
 * signature: undefined __fastcall FUN_0043f9a0(int * param_1)
 * body: 0043f9a0-0043fbc1
 */

void __fastcall FUN_0043f9a0(int *param_1)

{
  short sVar1;
  char cVar2;
  int iVar3;
  CWnd *pCVar4;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  AFX_EXCEPTION_LINK local_4c [8];
  undefined1 local_44 [8];
  short local_3c [3];
  short sStack_36;
  void *local_20;
  int local_18;
  undefined1 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0043fbea;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffff60;
  iVar3 = FUN_0043fd70(param_1,'\x01');
  if (iVar3 != 0) {
    local_18 = 0;
    AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_4c);
    local_8 = 1;
    (**(code **)(*param_1 + 0x298))(local_44);
    local_3c[1] = SUB42(local_44._0_4_,2);
    sVar1 = local_3c[1];
    local_3c[0] = (short)local_44._0_4_;
    local_3c[2] = (short)local_44._4_4_;
    local_3c[2] = local_3c[2] - local_3c[0];
    sStack_36 = SUB42(local_44._4_4_,2);
    local_3c[0] = 0;
    local_3c[1] = 0;
    stack0xffffffc8 = CONCAT22(sStack_36 - sVar1,local_3c[2]);
    local_64 = 0xfffffc17;
    local_60 = 0xfffffc17;
    local_5c = 0xfffffc18;
    local_58 = 0xfffffc18;
    if ((int *)param_1[0x31] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x31] + 0x5c))();
      if ((int *)param_1[0x31] != (int *)0x0) {
        (**(code **)(*(int *)param_1[0x31] + 4))(1);
      }
    }
    local_20 = (void *)FUN_004a5fed(0x40);
    local_8._0_1_ = 2;
    pCVar4 = (CWnd *)0x0;
    if (local_20 != (void *)0x0) {
      pCVar4 = FUN_00442000(local_20,param_1);
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    param_1[0x31] = (int)pCVar4;
    iVar3 = FUN_0041ed90((int)param_1);
    iVar3 = FUN_00409590(iVar3);
    (**(code **)(*(int *)param_1[0x31] + 0x58))
              (0,&DAT_004d99e4,0x56000000,&local_64,*(undefined4 *)(iVar3 + 0x2a),700,0);
    local_18 = FUN_0048d102();
    if (local_18 == 0) {
      if (param_1[0x31] == 0) {
        iVar3 = FUN_0041ed90((int)param_1);
        FUN_00408550(iVar3);
      }
      local_18 = FUN_0048d102();
    }
    if (local_18 != 0) {
      FUN_0048d3a8();
    }
    if (local_18 == 0) {
      FUN_004a3538();
    }
    cVar2 = FUN_004413d0((int)param_1);
    if (cVar2 != '\0') {
      FUN_00441c20(param_1,local_3c);
    }
    iVar3 = FUN_0043f900((int)param_1);
    if ((iVar3 != 0) && (cVar2 = FUN_0043f970((int)param_1), cVar2 != '\0')) {
      FUN_0043fc00(param_1);
    }
    FUN_0043f910(param_1,local_18,1);
    FUN_0043fc70(param_1,0);
    local_8 = 0xffffffff;
    FUN_0043fbf4();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}


