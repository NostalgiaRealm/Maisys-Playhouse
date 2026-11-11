
/* ==== FUN_004131b0 @ 004131b0 ==== 
 * signature: undefined4 __thiscall FUN_004131b0(void * this, int * param_1, short * param_2, short * param_3)
 * body: 004131b0-0041359f
 */

undefined4 __thiscall FUN_004131b0(void *this,int *param_1,short *param_2,short *param_3)

{
  code *pcVar1;
  bool bVar2;
  short sVar3;
  undefined3 extraout_var;
  undefined4 uVar4;
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
  int iVar5;
  undefined3 extraout_var_11;
  undefined3 extraout_var_12;
  undefined3 extraout_var_13;
  undefined3 extraout_var_14;
  int *piVar6;
  char local_104 [256];
  
  bVar2 = FUN_00437430(param_1,(int *)s_system_004d9c40);
  if (CONCAT31(extraout_var,bVar2) != 0) {
    uVar4 = FUN_00454d50(param_3,DAT_004dc564);
    return uVar4;
  }
  bVar2 = FUN_00437430(param_1,(int *)s_assetmanager_004d9ca4);
  if (CONCAT31(extraout_var_00,bVar2) == 0) {
    bVar2 = FUN_00437430(param_1,(int *)&DAT_004d9c90);
    if (CONCAT31(extraout_var_01,bVar2) == 0) {
      bVar2 = FUN_00437430(param_1,(int *)s_fragmentloader_004d9c7c);
      if (CONCAT31(extraout_var_02,bVar2) == 0) {
        bVar2 = FUN_00437430(param_1,(int *)&DAT_004d9c68);
        if (CONCAT31(extraout_var_03,bVar2) == 0) {
          bVar2 = FUN_00437430(param_1,(int *)s_objectid_004d9c2c);
          if (CONCAT31(extraout_var_04,bVar2) != 0) {
            uVar4 = FUN_00454d00(param_3,*(undefined4 *)((int)this + 0xc));
            return uVar4;
          }
          bVar2 = FUN_00437430(param_1,(int *)&DAT_004d9c18);
          if (CONCAT31(extraout_var_05,bVar2) != 0) {
            (**(code **)(*(int *)this + 0x70))(local_104);
            uVar4 = FUN_00455210(0xffffffff,param_3,local_104);
            return uVar4;
          }
          bVar2 = FUN_00437430(param_1,(int *)s_flushpriority_004d9c54);
          if (CONCAT31(extraout_var_06,bVar2) != 0) {
            sVar3 = FUN_00412fe0((int)this);
            uVar4 = FUN_00454d00(param_3,(int)sVar3);
            return uVar4;
          }
          bVar2 = FUN_00437430(param_1,(int *)s_preloaded_004d9c04);
          if (CONCAT31(extraout_var_07,bVar2) != 0) {
            uVar4 = FUN_00454c50(param_3,0);
            return uVar4;
          }
          bVar2 = FUN_00437430(param_1,(int *)s_classid_004d9988);
          if (CONCAT31(extraout_var_08,bVar2) != 0) {
            uVar4 = FUN_00455210(0xffffffff,param_3,s_InternalObject_004d9cd4);
            return uVar4;
          }
          bVar2 = FUN_00437430(param_1,(int *)s_classtype_004d9974);
          if (CONCAT31(extraout_var_09,bVar2) != 0) {
            uVar4 = FUN_00455210(0xffffffff,param_3,s_object_004d9ccc);
            return uVar4;
          }
          bVar2 = FUN_00437430(param_1,(int *)s_attributename_004d9bf0);
          if (CONCAT31(extraout_var_10,bVar2) == 0) {
            bVar2 = FUN_00437430(param_1,(int *)s_attributecount_004d9bc8);
            if (CONCAT31(extraout_var_11,bVar2) == 0) {
              bVar2 = FUN_00437430(param_1,(int *)s_attributevalue_004d9bdc);
              if (CONCAT31(extraout_var_12,bVar2) == 0) {
                bVar2 = FUN_00437430(param_1,(int *)s_attributetype_004d9bb4);
                if (CONCAT31(extraout_var_13,bVar2) == 0) {
                  bVar2 = FUN_00437430(param_1,(int *)s_attributestring_004d9ba0);
                  if (CONCAT31(extraout_var_14,bVar2) == 0) {
                    piVar6 = (int *)(**(code **)(*(int *)this + 0xb0))(param_1);
                    if (piVar6 == (int *)0x0) {
                      return 0x10000;
                    }
                    if (((param_2 != (short *)0x0) && (*param_2 == 1)) &&
                       (*(int *)(param_2 + 1) != 0)) {
                      uVar4 = (**(code **)(*piVar6 + 0x98))(s_value_004d9864,param_2,param_3);
                      return uVar4;
                    }
                    uVar4 = FUN_00454d50(param_3,piVar6);
                    return uVar4;
                  }
                  pcVar1 = *(code **)(*(int *)this + 0x94);
                  iVar5 = (*pcVar1)();
                  if (iVar5 != 0) {
                    uVar4 = (*pcVar1)(param_2,param_3);
                    uVar4 = (**(code **)(*DAT_004da38c + 0x120))(this,uVar4);
                    return uVar4;
                  }
                }
                else {
                  pcVar1 = *(code **)(*(int *)this + 0x94);
                  iVar5 = (*pcVar1)();
                  if (iVar5 != 0) {
                    uVar4 = (*pcVar1)(param_2,param_3);
                    uVar4 = (**(code **)(*DAT_004da38c + 0x110))(uVar4);
                    return uVar4;
                  }
                }
              }
              else {
                pcVar1 = *(code **)(*(int *)this + 0x94);
                iVar5 = (*pcVar1)();
                if (iVar5 != 0) {
                  uVar4 = (*pcVar1)(param_2,param_3);
                  uVar4 = (**(code **)(*DAT_004da38c + 0x11c))(this,uVar4);
                  return uVar4;
                }
              }
            }
            else {
              pcVar1 = *(code **)(*(int *)this + 0x94);
              iVar5 = (*pcVar1)();
              if (iVar5 != 0) {
                uVar4 = (*pcVar1)();
                uVar4 = (**(code **)(*DAT_004da38c + 0x10c))(uVar4);
                uVar4 = FUN_00454d00(param_3,uVar4);
                return uVar4;
              }
            }
          }
          else {
            pcVar1 = *(code **)(*(int *)this + 0x94);
            iVar5 = (*pcVar1)();
            if (iVar5 != 0) {
              uVar4 = (*pcVar1)(param_2,param_3);
              uVar4 = (**(code **)(*DAT_004da38c + 0x118))(uVar4);
              return uVar4;
            }
          }
          return 0x10000;
        }
      }
      iVar5 = (**(code **)(*(int *)this + 0x10))();
      if (iVar5 == 0) {
        return 0x10000;
      }
      uVar4 = FUN_00454d50(param_3,*(undefined4 *)(iVar5 + 0x48));
      return uVar4;
    }
  }
  iVar5 = (**(code **)(*(int *)this + 0x10))();
  if (iVar5 != 0) {
    uVar4 = FUN_00466a70(iVar5);
    uVar4 = FUN_00454d50(param_3,uVar4);
    return uVar4;
  }
  return 0x10000;
}


