
/* ==== FUN_00446aa0 @ 00446aa0 ==== 
 * signature: int __thiscall FUN_00446aa0(void * this, int * param_1, short * param_2, short * param_3)
 * body: 00446aa0-00446ec9
 */

int __thiscall FUN_00446aa0(void *this,int *param_1,short *param_2,short *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  void *pvVar2;
  HLOCAL pvVar3;
  SIZE_T SVar4;
  char *pcVar5;
  undefined3 extraout_var_01;
  int iVar6;
  undefined3 extraout_var_02;
  int iVar7;
  int *piVar8;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  byte bVar9;
  SIZE_T local_18;
  uint local_14;
  SIZE_T local_10;
  char *local_c;
  byte local_5;
  
  bVar1 = FUN_00437430(param_1,(int *)s_asset_004da304);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    return 0x10000;
  }
  bVar1 = FUN_00437430(param_1,(int *)&DAT_004db968);
  if (CONCAT31(extraout_var_00,bVar1) == 0) {
    bVar1 = FUN_00437430(param_1,(int *)&DAT_004db954);
    if (CONCAT31(extraout_var_01,bVar1) == 0) {
      bVar1 = FUN_00437430(param_1,(int *)s_editable_004db8b4);
      if (CONCAT31(extraout_var_02,bVar1) == 0) {
        bVar1 = FUN_00437430(param_1,(int *)s_append_004db8c8);
        if (CONCAT31(extraout_var_03,bVar1) == 0) {
          bVar1 = FUN_00437430(param_1,(int *)s_substitutions_004db8a0);
          if (CONCAT31(extraout_var_04,bVar1) != 0) {
            iVar6 = FUN_00455730(param_3,(char *)&local_5,this);
            if (iVar6 != 0) {
              return iVar6;
            }
            *(ushort *)((int)this + 0x152) = (local_5 == 0) + 1;
            return 0;
          }
          iVar6 = FUN_00464a90(this,param_1,param_2,param_3);
        }
        else {
          iVar6 = *(int *)((int)this + 0x3a);
          pvVar2 = FUN_0046da90(this,'\x01','\x01');
          iVar6 = FUN_00446560((int)pvVar2,iVar6);
          if (iVar6 == 0) {
            local_10 = 1;
            pvVar3 = FUN_0043f6f0(1);
            local_c = (char *)0x0;
            iVar6 = FUN_00457fe0(param_3,(int *)&local_c,pvVar3,&local_10,this);
            if (iVar6 == 0) {
              if (local_c == (char *)0x0) {
                pcVar5 = LocalLock(pvVar3);
                local_c = pcVar5;
                pvVar2 = FUN_0046da90(this,'\x01','\x01');
                FUN_00449bb0(pvVar2,pcVar5);
                LocalUnlock(pvVar3);
              }
              else {
                pcVar5 = local_c;
                pvVar2 = FUN_0046da90(this,'\x01','\x01');
                FUN_00449bb0(pvVar2,pcVar5);
              }
              (**(code **)(*(int *)this + 0x318))();
            }
            FUN_0043f720(pvVar3);
            return iVar6;
          }
        }
      }
      else {
        iVar6 = *(int *)((int)this + 0x3a);
        pvVar2 = FUN_0046da90(this,'\x01','\x01');
        iVar6 = FUN_00446560((int)pvVar2,iVar6);
        if (iVar6 == 0) {
          iVar6 = FUN_00455730(param_3,(char *)&local_5,this);
          if ((((iVar6 == 0) &&
               (bVar9 = (*(byte *)((int)this + 0x154) ^ local_5) & 1 ^ *(byte *)((int)this + 0x154),
               *(byte *)((int)this + 0x154) = bVar9, (bVar9 & 1) != 0)) &&
              ((*(byte *)((int)this + 0x9c) & 2) != 0)) && (iVar7 = FUN_0040c620(this), iVar7 != 0))
          {
            piVar8 = (int *)FUN_0040c620(this);
            (**(code **)(*piVar8 + 0x78))(8,this,1);
            return 0;
          }
          return iVar6;
        }
      }
    }
    else {
      iVar6 = *(int *)((int)this + 0x3a);
      pvVar2 = FUN_0046da90(this,'\x01','\x01');
      iVar6 = FUN_00446560((int)pvVar2,iVar6);
      if ((iVar6 == 0) && (iVar6 = FUN_00446a70(param_2,(int *)&local_14), iVar6 == 0)) {
        if (*param_3 == 0) {
          FUN_00447460((int)this);
          pvVar2 = FUN_0046da90(this,'\x01','\x01');
          FUN_00449b40(pvVar2,local_14);
          (**(code **)(*(int *)this + 0x318))();
          return 0;
        }
        local_10 = 1;
        pvVar3 = FUN_0043f6f0(1);
        local_c = (char *)0x0;
        iVar6 = FUN_00457fe0(param_3,(int *)&local_c,pvVar3,&local_10,this);
        if (iVar6 == 0) {
          FUN_00447460((int)this);
          if (local_c == (char *)0x0) {
            pcVar5 = LocalLock(pvVar3);
            local_c = pcVar5;
            pvVar2 = FUN_0046da90(this,'\x01','\x01');
            FUN_00449980(pvVar2,local_14,pcVar5);
            LocalUnlock(pvVar3);
          }
          else {
            pcVar5 = local_c;
            pvVar2 = FUN_0046da90(this,'\x01','\x01');
            FUN_00449980(pvVar2,local_14,pcVar5);
          }
          (**(code **)(*(int *)this + 0x318))();
        }
        FUN_0043f720(pvVar3);
        return iVar6;
      }
    }
    return iVar6;
  }
  iVar6 = *(int *)((int)this + 0x3a);
  pvVar2 = FUN_0046da90(this,'\x01','\x01');
  local_10 = FUN_00446560((int)pvVar2,iVar6);
  if (local_10 != 0) {
    return local_10;
  }
  local_18 = 1;
  pvVar3 = FUN_0043f6f0(1);
  local_c = (char *)0x0;
  if ((*param_3 != 0) &&
     (local_10 = FUN_00457fe0(param_3,(int *)&local_c,pvVar3,&local_18,this), local_10 != 0))
  goto LAB_00446bb5;
  FUN_00447460((int)this);
  if (*param_3 == 0) {
LAB_00446b94:
    pcVar5 = &DAT_004d99e4;
LAB_00446b99:
    pvVar2 = FUN_0046da90(this,'\x01','\x01');
    FUN_00449b00(pvVar2,pcVar5);
  }
  else {
    pcVar5 = local_c;
    if (local_c != (char *)0x0) goto LAB_00446b99;
    SVar4 = LocalSize(pvVar3);
    if (SVar4 < 2) goto LAB_00446b94;
    pcVar5 = local_c;
    if (local_c != (char *)0x0) goto LAB_00446b99;
    pcVar5 = LocalLock(pvVar3);
    local_c = pcVar5;
    pvVar2 = FUN_0046da90(this,'\x01','\x01');
    FUN_00449b00(pvVar2,pcVar5);
    LocalUnlock(pvVar3);
  }
  (**(code **)(*(int *)this + 0x318))();
LAB_00446bb5:
  FUN_0043f720(pvVar3);
  return local_10;
}


