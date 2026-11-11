
/* ==== FUN_00449260 @ 00449260 ==== 
 * signature: undefined __fastcall FUN_00449260(int * param_1)
 * body: 00449260-004494ad;004494fb-00449534
 */

void __fastcall FUN_00449260(int *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  HGLOBAL pvVar3;
  HPSTR pcVar4;
  SIZE_T SVar5;
  int *piVar6;
  SIZE_T *pSVar7;
  undefined4 *puVar8;
  undefined4 *unaff_FS_OFFSET;
  AFX_EXCEPTION_LINK local_58 [36];
  int *local_34;
  SIZE_T local_30;
  SIZE_T *local_2c;
  SIZE_T *local_28;
  int local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_004494e9;
  *unaff_FS_OFFSET = &local_10;
  local_20 = param_1 + 0x5f;
  local_14 = &stack0xffffff9c;
  local_18 = param_1;
  puVar1 = &stack0xffffff9c;
  if ((char)*local_20 == '\0') {
LAB_004494fb:
    local_14 = puVar1;
    piVar6 = local_18;
    if ((char)*local_20 == '\0') goto LAB_00449525;
    pvVar3 = FUN_0043f770(4);
    *(HGLOBAL *)((int)piVar6 + 0x152) = pvVar3;
    if (pvVar3 == (HGLOBAL)0x0) {
      FUN_004a3538();
    }
  }
  else {
    local_24 = *param_1;
    cVar2 = (**(code **)(local_24 + 0xec))();
    puVar1 = local_14;
    if ((cVar2 == '\0') ||
       (((pSVar7 = (SIZE_T *)((int)local_18 + 0x186), *pSVar7 == 0 &&
         (local_2c = (SIZE_T *)((int)local_18 + 0x18a), *local_2c == 0)) &&
        (local_28 = (SIZE_T *)((int)local_18 + 0x18e), *local_28 == 0)))) goto LAB_004494fb;
    local_34 = (int *)((int)local_18 + 0x182);
    if (*local_34 == 0) {
      FUN_0043c620(0,s_Immenent_Text_corruption__LoadTe_004dba90);
    }
    AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_58);
    local_8 = 1;
    SVar5 = *pSVar7;
    if (SVar5 == 0) {
      SVar5 = 0;
    }
    local_1c = (int *)((int)local_18 + 0x152);
    if ((HGLOBAL)*local_1c == (HGLOBAL)0x0) {
      pvVar3 = FUN_0043f770(SVar5);
      *local_1c = (int)pvVar3;
      if (*local_1c == 0) {
        FUN_004a3538();
      }
    }
    else {
      FUN_0043f7b0((HGLOBAL)*local_1c,SVar5);
    }
    local_2c = (SIZE_T *)((int)local_18 + 0x18a);
    SVar5 = *local_2c;
    if (SVar5 != 0) {
      puVar8 = (undefined4 *)((int)local_18 + 0x156);
      pvVar3 = (HGLOBAL)*puVar8;
      if (pvVar3 == (HGLOBAL)0x0) {
        pvVar3 = FUN_0043f770(SVar5);
        *puVar8 = pvVar3;
        if (pvVar3 == (HGLOBAL)0x0) {
          FUN_004a3538();
        }
      }
      else {
        FUN_0043f7b0(pvVar3,SVar5);
      }
    }
    local_28 = (SIZE_T *)((int)local_18 + 0x18e);
    SVar5 = *local_28;
    if (SVar5 != 0) {
      piVar6 = local_18 + 0x57;
      pvVar3 = (HGLOBAL)*piVar6;
      if (pvVar3 == (HGLOBAL)0x0) {
        pvVar3 = FUN_0043f770(SVar5);
        *piVar6 = (int)pvVar3;
        if (pvVar3 == (HGLOBAL)0x0) {
          FUN_004a3538();
        }
      }
      else {
        FUN_0043f7b0(pvVar3,SVar5);
      }
    }
    FUN_0040e0e0(local_18,*local_34);
    if (*pSVar7 != 0) {
      pcVar4 = GlobalLock((HGLOBAL)*local_1c);
      local_30 = *pSVar7;
      FUN_0040e180(local_18,pcVar4,local_30);
      GlobalUnlock((HGLOBAL)*local_1c);
    }
    SVar5 = *local_2c;
    if (SVar5 != 0) {
      puVar8 = (undefined4 *)((int)local_18 + 0x156);
      local_30 = SVar5;
      pcVar4 = GlobalLock((HGLOBAL)*puVar8);
      FUN_0040e180(local_18,pcVar4,SVar5);
      GlobalUnlock((HGLOBAL)*puVar8);
    }
    SVar5 = *local_28;
    if (SVar5 != 0) {
      piVar6 = local_18 + 0x57;
      local_30 = SVar5;
      pcVar4 = GlobalLock((HGLOBAL)*piVar6);
      FUN_0040e180(local_18,pcVar4,SVar5);
      GlobalUnlock((HGLOBAL)*piVar6);
    }
    *(undefined2 *)(local_18 + 9) = 1;
    (**(code **)(local_24 + 0x160))(5,1);
    (**(code **)(local_24 + 0xc4))(0,1);
    local_8 = 0xffffffff;
    FUN_004494f3();
  }
  *(char *)local_20 = '\0';
LAB_00449525:
  *unaff_FS_OFFSET = local_10;
  return;
}


