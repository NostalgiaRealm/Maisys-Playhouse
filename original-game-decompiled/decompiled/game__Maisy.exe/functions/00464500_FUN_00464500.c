
/* ==== FUN_00464500 @ 00464500 ==== 
 * signature: undefined4 __thiscall FUN_00464500(void * this, int * param_1, short * param_2, short * param_3)
 * body: 00464500-00464a86
 */

undefined4 __thiscall FUN_00464500(void *this,int *param_1,short *param_2,short *param_3)

{
  int iVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  short sVar5;
  undefined3 extraout_var;
  undefined4 uVar6;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  undefined3 extraout_var_08;
  undefined3 extraout_var_09;
  undefined3 extraout_var_10;
  undefined3 extraout_var_11;
  undefined3 extraout_var_12;
  undefined3 extraout_var_13;
  undefined3 extraout_var_14;
  undefined3 extraout_var_15;
  undefined3 extraout_var_16;
  void *pvVar7;
  int *piVar8;
  undefined3 extraout_var_17;
  undefined3 extraout_var_18;
  undefined3 extraout_var_19;
  short local_18;
  short local_16;
  short local_14;
  short local_12;
  short local_10;
  short sStack_e;
  short local_c;
  short local_a;
  short local_8;
  short local_6;
  
  bVar2 = FUN_00437430(param_1,(int *)s_position_004dc35c);
  if (CONCAT31(extraout_var,bVar2) != 0) {
    (**(code **)(*(int *)this + 0x3a0))(&local_c,0);
    uVar6 = FUN_00454e10(param_3,local_c,local_a);
    return uVar6;
  }
  bVar2 = FUN_00437430(param_1,(int *)&DAT_004d98f4);
  if (CONCAT31(extraout_var_00,bVar2) != 0) {
    (**(code **)(*(int *)this + 0x3a0))(&local_c,0);
    uVar6 = FUN_00454e10(param_3,local_8 - local_c,local_6 - local_a);
    return uVar6;
  }
  bVar2 = FUN_00437430(param_1,(int *)s_centerposition_004dc348);
  if (CONCAT31(extraout_var_01,bVar2) != 0) {
    (**(code **)(*(int *)this + 0x3a0))(&local_c,0);
    uVar6 = FUN_00454e10(param_3,local_c + (short)(((int)local_8 - (int)local_c) / 2),
                         (short)(((int)local_6 - (int)local_a) / 2) + local_a);
    return uVar6;
  }
  bVar2 = FUN_00437430(param_1,(int *)s_cropposition_004dc334);
  if (CONCAT31(extraout_var_02,bVar2) != 0) {
    (**(code **)(*(int *)this + 0x3a0))(&local_c,0);
    uVar6 = FUN_00454e10(param_3,local_c,local_a);
    return uVar6;
  }
  bVar2 = FUN_00437430(param_1,(int *)s_cropsize_004dc320);
  if (CONCAT31(extraout_var_03,bVar2) != 0) {
    (**(code **)(*(int *)this + 0x3a0))(&local_c,0);
    uVar6 = FUN_00454e10(param_3,local_8 - local_c,local_6 - local_a);
    return uVar6;
  }
  bVar2 = FUN_00437430(param_1,(int *)s_scaledposition_004dc30c);
  if (CONCAT31(extraout_var_04,bVar2) != 0) {
    (**(code **)(*(int *)this + 0x398))(&local_c,0);
    uVar6 = FUN_00454e10(param_3,local_c,local_a);
    return uVar6;
  }
  bVar2 = FUN_00437430(param_1,(int *)s_scaledsize_004dc2f8);
  if (CONCAT31(extraout_var_05,bVar2) != 0) {
    (**(code **)(*(int *)this + 0x398))(&local_c,0);
    uVar6 = FUN_00454e10(param_3,local_8 - local_c,local_6 - local_a);
    return uVar6;
  }
  bVar2 = FUN_00437430(param_1,(int *)s_globaloffset_004dc2e4);
  if (CONCAT31(extraout_var_06,bVar2) == 0) {
    bVar2 = FUN_00437430(param_1,(int *)s_globalposition_004d940c);
    if (CONCAT31(extraout_var_07,bVar2) == 0) {
      bVar2 = FUN_00437430(param_1,(int *)s_cache_004dc2d0);
      if (CONCAT31(extraout_var_08,bVar2) != 0) {
        bVar3 = (**(code **)(*(int *)this + 0x138))();
        uVar6 = FUN_00454c50(param_3,bVar3);
        return uVar6;
      }
      bVar2 = FUN_00437430(param_1,(int *)s_visible_004dbebc);
      if (CONCAT31(extraout_var_09,bVar2) != 0) {
        uVar6 = FUN_00454c50(param_3,(*(byte *)((int)this + 0x9c) & 2) >> 1);
        return uVar6;
      }
      bVar2 = FUN_00437430(param_1,(int *)s_direct_004dc2bc);
      if (CONCAT31(extraout_var_10,bVar2) != 0) {
        cVar4 = (**(code **)(*(int *)this + 0x130))();
        uVar6 = FUN_00454c50(param_3,cVar4 == '\0');
        return uVar6;
      }
      bVar2 = FUN_00437430(param_1,(int *)s_layer_004dc2a8);
      if (CONCAT31(extraout_var_11,bVar2) != 0) {
        sVar5 = (**(code **)(*(int *)this + 0x27c))();
        uVar6 = FUN_00454d00(param_3,(int)sVar5);
        return uVar6;
      }
      bVar2 = FUN_00437430(param_1,(int *)s_width_004dc294);
      if (CONCAT31(extraout_var_12,bVar2) != 0) {
        (**(code **)(*(int *)this + 0x3a0))(&local_c,0);
        uVar6 = FUN_00454d00(param_3,(int)local_8 - (int)local_c);
        return uVar6;
      }
      bVar2 = FUN_00437430(param_1,(int *)s_height_004dc280);
      if (CONCAT31(extraout_var_13,bVar2) != 0) {
        (**(code **)(*(int *)this + 0x3a0))(&local_c,0);
        uVar6 = FUN_00454d00(param_3,(int)local_6 - (int)local_a);
        return uVar6;
      }
      bVar2 = FUN_00437430(param_1,(int *)&DAT_004da28c);
      if (CONCAT31(extraout_var_14,bVar2) != 0) {
        sVar5 = (**(code **)(*(int *)this + 0x348))();
        uVar6 = FUN_00454d00(param_3,(int)sVar5);
        return uVar6;
      }
      bVar2 = FUN_00437430(param_1,(int *)s_scrolloffset_004dc26c);
      if (CONCAT31(extraout_var_15,bVar2) != 0) {
        iVar1 = *(int *)this;
        (**(code **)(iVar1 + 0x398))(&local_18,1);
        (**(code **)(iVar1 + 0x3a0))(&local_c,1);
        local_10 = (short)*(undefined4 *)((int)this + 0xc2);
        sStack_e = (short)((uint)*(undefined4 *)((int)this + 0xc2) >> 0x10);
        _local_10 = CONCAT22(sStack_e + (local_16 - local_a),local_10 + (local_18 - local_c));
        uVar6 = FUN_00454db0(param_3,(undefined4 *)&local_10);
        return uVar6;
      }
      bVar2 = FUN_00437430(param_1,(int *)s_mediasize_004dc258);
      if (CONCAT31(extraout_var_16,bVar2) != 0) {
        pvVar7 = FUN_0046da90(this,'\x01','\x01');
        if (pvVar7 != (void *)0x0) {
          piVar8 = FUN_0046da90(this,'\x01','\x01');
          (**(code **)(*piVar8 + 0x1dc))(&local_18);
          uVar6 = FUN_00454e10(param_3,local_14 - local_18,local_12 - local_16);
          return uVar6;
        }
        return 0x60002;
      }
      bVar2 = FUN_00437430(param_1,(int *)s_asset_004da304);
      if (CONCAT31(extraout_var_17,bVar2) != 0) {
        pvVar7 = FUN_0046da90(this,'\x01','\x01');
        uVar6 = FUN_00454d50(param_3,pvVar7);
        return uVar6;
      }
      bVar2 = FUN_00437430(param_1,(int *)s_cachechildren_004dc370);
      if (CONCAT31(extraout_var_18,bVar2) == 0) {
        bVar2 = FUN_00437430(param_1,(int *)s_redraw_004dc244);
        if (CONCAT31(extraout_var_19,bVar2) != 0) {
          uVar6 = FUN_00454c50(param_3,*(byte *)((int)this + 0x146));
          return uVar6;
        }
        uVar6 = FUN_0046b080(this,param_1,param_2,param_3);
        return uVar6;
      }
      uVar6 = FUN_00454c50(param_3,(*(byte *)((int)this + 0x9c) & 0x40) >> 6);
      return uVar6;
    }
  }
  iVar1 = *(int *)this;
  (**(code **)(iVar1 + 0x37c))(&local_10);
  (**(code **)(iVar1 + 0x3a0))(&local_c,0);
  uVar6 = FUN_00454e10(param_3,local_10 + local_c,sStack_e + local_a);
  return uVar6;
}


