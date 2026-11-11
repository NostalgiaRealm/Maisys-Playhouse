
/* ==== FUN_1101ca40 @ 1101ca40 ==== 
 * signature: ulonglong __fastcall FUN_1101ca40(undefined4 param_1, undefined4 param_2, undefined4 * param_3, int param_4, short * param_5, short * param_6, short * param_7, int param_8, int param_9, short * param_10, undefined2 * param_11, undefined1 * param_12)
 * body: 1101ca40-1101cd50
 */

ulonglong __fastcall
FUN_1101ca40(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4,short *param_5,
            short *param_6,short *param_7,int param_8,int param_9,short *param_10,
            undefined2 *param_11,undefined1 *param_12)

{
  undefined1 *puVar1;
  short sVar2;
  uint uVar3;
  undefined2 extraout_var;
  int iVar4;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined4 uVar5;
  undefined2 extraout_var_04;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  undefined4 extraout_EDX_06;
  undefined4 extraout_EDX_07;
  undefined4 extraout_EDX_08;
  short *psVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  short local_46;
  undefined1 *local_44;
  undefined2 local_40;
  undefined4 local_3e;
  short local_30;
  undefined4 local_2e;
  
  if (param_7 == (short *)0x0) {
    local_44 = (undefined1 *)0x0;
  }
  else {
    uVar7 = FUN_11019c00(param_1,param_2,param_3,param_7);
    if ((short)uVar7 != 0) {
      return uVar7;
    }
    local_44 = *(undefined1 **)(param_7 + 1);
    if ((int)local_44 < 1) {
      return CONCAT44((int)(uVar7 >> 0x20),CONCAT22((short)((uint)local_44 >> 0x10),0xffdf));
    }
  }
  uVar3 = FUN_1101d070(*(char **)(*(int *)(param_4 + 0x28) + param_8 * 4));
  if ((char)uVar3 != '\0') {
    sVar2 = FUN_1101cd60(param_3,param_4,param_5,param_6,param_11);
    return CONCAT44(extraout_EDX_00,CONCAT22(extraout_var,sVar2));
  }
  sVar2 = *param_6;
  if (sVar2 < 0x1a) {
    if ((sVar2 == 0x19) || (sVar2 == 3)) {
      local_46 = FUN_1101d0b0(param_3,param_4,param_6,&local_40);
      puVar1 = (undefined1 *)CONCAT22(extraout_var_00,local_46);
      uVar5 = extraout_EDX_02;
      if (local_46 == 0) {
        *param_5 = 0x17;
        local_46 = FUN_11024d70(param_3,&local_40,
                                *(undefined4 *)(*(int *)(param_4 + 0x28) + param_8 * 4),param_5,
                                local_44);
        puVar1 = (undefined1 *)CONCAT22(extraout_var_01,local_46);
        uVar5 = extraout_EDX_03;
      }
      local_44 = puVar1;
      if (local_46 != 0) {
        uVar8 = FUN_1101ca20(param_3,param_11,local_3e);
        uVar5 = (undefined4)((ulonglong)uVar8 >> 0x20);
        local_44 = (undefined1 *)uVar8;
        local_46 = -0x1d;
      }
      goto LAB_1101cd44;
    }
LAB_1101caf7:
    iVar4 = FUN_1101cf40(*(char **)(*(int *)(param_4 + 0x28) + param_8 * 4));
    local_44 = (undefined1 *)FUN_1101bdb0(param_3,param_5,param_6,iVar4);
    uVar5 = extraout_EDX_01;
  }
  else {
    if (sVar2 < 0x1fb) goto LAB_1101caf7;
    if (sVar2 < 0x1fd) {
      if ((*(uint *)(param_6 + 1) & 1) == 0) {
        psVar6 = param_5;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(undefined4 *)psVar6 = *(undefined4 *)param_6;
          param_6 = param_6 + 2;
          psVar6 = psVar6 + 2;
        }
        local_46 = 0;
        *(int *)(param_5 + 5) = param_8;
        *(undefined1 **)(param_5 + 9) = local_44;
        *(uint *)(param_5 + 1) = *(uint *)(param_5 + 1) | 1;
        uVar5 = extraout_EDX;
      }
      else if ((*(uint *)(param_6 + 1) & 2) == 0) {
        sVar2 = FUN_1101d0b0(param_3,param_4,param_6,&local_40);
        if (sVar2 != 0) {
          return CONCAT44(extraout_EDX_04,CONCAT22(extraout_var_02,sVar2));
        }
        local_30 = 0x17;
        sVar2 = FUN_11024d70(param_3,&local_40,
                             *(undefined4 *)(*(int *)(param_4 + 0x28) + *(int *)(param_6 + 5) * 4),
                             &local_30,*(undefined4 *)(param_6 + 9));
        if (sVar2 != 0) {
          FUN_1101ca20(param_3,param_11,*(undefined4 *)(param_6 + 3));
          return CONCAT44(extraout_EDX_06,CONCAT22(extraout_var_03,0xffe3));
        }
        if ((local_30 == 3) || (local_30 == 0x19)) {
          psVar6 = param_5;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            *(undefined4 *)psVar6 = *(undefined4 *)param_6;
            param_6 = param_6 + 2;
            psVar6 = psVar6 + 2;
          }
          if (*param_5 == 3) {
            *param_5 = 0x1fb;
          }
          else {
            *param_5 = 0x1fc;
          }
          *(undefined4 *)(param_5 + 3) = local_2e;
          *(int *)(param_5 + 5) = param_8;
          *(undefined1 **)(param_5 + 9) = local_44;
          local_46 = 0;
          uVar5 = extraout_EDX_05;
        }
        else {
          psVar6 = param_5;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            *(undefined4 *)psVar6 = *(undefined4 *)param_6;
            param_6 = param_6 + 2;
            psVar6 = psVar6 + 2;
          }
          uVar5 = FUN_11019e00(param_9,param_10,(undefined4 *)&local_30);
          if ((short)uVar5 != 0) {
            return CONCAT44(extraout_EDX_07,uVar5);
          }
          *param_12 = 1;
          *(uint *)(param_5 + 1) = *(uint *)(param_5 + 1) | 6;
          *(int *)(param_5 + 7) = param_8;
          local_46 = 0;
          local_44 = param_12;
          uVar5 = extraout_EDX_07;
        }
      }
      else {
        local_46 = -0x1d;
        uVar8 = FUN_1101ca20(param_3,param_11,*(undefined4 *)(param_6 + 3));
        uVar5 = (undefined4)((ulonglong)uVar8 >> 0x20);
        local_44 = (undefined1 *)uVar8;
      }
      goto LAB_1101cd44;
    }
    if (sVar2 != 0x1fd) goto LAB_1101caf7;
    sVar2 = FUN_11021510(param_3,param_5,param_6,*(char **)(*(int *)(param_4 + 0x28) + param_8 * 4),
                         (int)local_44);
    local_44 = (undefined1 *)CONCAT22(extraout_var_04,sVar2);
    uVar5 = extraout_EDX_08;
  }
  local_46 = (short)local_44;
LAB_1101cd44:
  return CONCAT44(uVar5,CONCAT22((short)((uint)local_44 >> 0x10),local_46));
}


