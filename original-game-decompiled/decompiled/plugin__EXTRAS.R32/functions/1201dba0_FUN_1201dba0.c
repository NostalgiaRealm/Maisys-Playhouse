
/* ==== FUN_1201dba0 @ 1201dba0 ==== 
 * signature: undefined4 __cdecl FUN_1201dba0(int param_1, int param_2)
 * body: 1201dba0-1201dfca
 */

undefined4 __cdecl FUN_1201dba0(int param_1,int param_2)

{
  short sVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_bc;
  undefined4 local_b8;
  int iStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined2 uStack_a8;
  undefined4 local_84;
  undefined2 uStack_80;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  short sStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined4 uStack_24;
  undefined2 uStack_20;
  
  local_bc = 0x10000;
  bVar4 = false;
  puVar5 = (undefined4 *)(param_1 + 0x62);
  puVar6 = &local_58;
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  pcVar2 = (code *)FUN_12027370(param_1,0,0x20,&local_84);
  DAT_12039a9c = (*pcVar2)(CONCAT22(local_84._2_2_,(undefined2)local_84),&local_b8);
  if ((short)local_58 == 0x73) {
    uStack_2a = (undefined2)((uint)local_58 >> 0x10);
    uStack_28 = (undefined2)uStack_54;
    uStack_26 = (undefined2)((uint)uStack_54 >> 0x10);
    uStack_24 = uStack_50;
    uStack_20 = uStack_4c;
    sStack_2c = (short)local_58;
    pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x1c,&local_84);
    DAT_12039a9c = (*pcVar2)(CONCAT22(local_84._2_2_,(undefined2)local_84),&sStack_2c,param_1,0,0);
    if (CONCAT22(uStack_28,uStack_2a) != 0) {
      uStack_b0 = CONCAT22(uStack_b0._2_2_,0x6a);
      local_84._0_2_ = 1;
      local_84._2_2_ = 0;
      uStack_80 = 0;
      pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&iStack_b4);
      DAT_12039a9c = (*pcVar2)(iStack_b4,CONCAT22(uStack_28,uStack_2a),s_value_120370b8,&local_84,
                               &uStack_b0);
      if (DAT_12039a9c == 0) {
        bVar4 = true;
        puVar5 = &uStack_b0;
        puVar6 = &local_58;
        for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
      }
    }
  }
  switch((short)local_58) {
  case 1:
    local_bc = 0;
    *(undefined4 *)(param_1 + 0x94) = local_58;
    *(undefined2 *)(param_1 + 0x98) = (undefined2)uStack_54;
    break;
  case 0xb:
    local_bc = 0;
    *(undefined4 *)(param_1 + 0x94) = local_58;
    *(undefined4 *)(param_1 + 0x98) = uStack_54;
    *(undefined2 *)(param_1 + 0x9c) = (undefined2)uStack_50;
    break;
  case 100:
    if (bVar4) {
      pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x1a,&local_84);
      bVar4 = false;
      DAT_12039a9c = (*pcVar2)(CONCAT22(local_84._2_2_,(undefined2)local_84),param_1,&uStack_b0);
    }
    uStack_b0 = CONCAT22(uStack_b0._2_2_,0x6a);
    pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&local_84);
    DAT_12039a9c = (*pcVar2)(CONCAT22(local_84._2_2_,(undefined2)local_84),local_b8,
                             s_rangesymbol_12037aa0,&local_58,&uStack_b0);
    if (DAT_12039a9c == 0) {
      if ((short)uStack_b0 == 0xb) {
        local_bc = 0;
        *(undefined4 *)(param_1 + 0x94) = uStack_b0;
        *(undefined4 *)(param_1 + 0x98) = uStack_ac;
        *(undefined2 *)(param_1 + 0x9c) = uStack_a8;
        break;
      }
      if ((short)uStack_b0 == 1) {
        local_bc = 0;
        *(undefined4 *)(param_1 + 0x94) = uStack_b0;
        *(undefined2 *)(param_1 + 0x98) = (undefined2)uStack_ac;
        break;
      }
    }
    goto LAB_1201df78;
  case 0x6e:
    sVar1 = *(short *)(param_2 + 0x26);
    puVar5 = (undefined4 *)(param_2 + 0x26);
    if (sVar1 == 1) {
      local_bc = 0;
      *(undefined4 *)(param_1 + 0x94) = *puVar5;
      *(undefined2 *)(param_1 + 0x98) = *(undefined2 *)(param_2 + 0x2a);
      break;
    }
    if (sVar1 == 0xb) {
      local_bc = 0;
      *(undefined4 *)(param_1 + 0x94) = *puVar5;
      *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x2a);
      *(undefined2 *)(param_1 + 0x9c) = *(undefined2 *)(param_2 + 0x2e);
      break;
    }
    if (sVar1 != 100) break;
    if (bVar4) {
      pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x1a,&local_84);
      bVar4 = false;
      DAT_12039a9c = (*pcVar2)(CONCAT22(local_84._2_2_,(undefined2)local_84),param_1,&uStack_b0);
    }
    uStack_b0 = CONCAT22(uStack_b0._2_2_,0x6a);
    pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&local_84);
    DAT_12039a9c = (*pcVar2)(CONCAT22(local_84._2_2_,(undefined2)local_84),local_b8,
                             s_rangesymbol_12037aa0,puVar5,&uStack_b0);
    if (DAT_12039a9c == 0) {
      if ((short)uStack_b0 == 0xb) {
        local_bc = 0;
        *(undefined4 *)(param_1 + 0x94) = uStack_b0;
        *(undefined4 *)(param_1 + 0x98) = uStack_ac;
        *(undefined2 *)(param_1 + 0x9c) = uStack_a8;
        break;
      }
      if ((short)uStack_b0 == 1) {
        local_bc = 0;
        *(undefined4 *)(param_1 + 0x94) = uStack_b0;
        *(undefined2 *)(param_1 + 0x98) = (undefined2)uStack_ac;
        break;
      }
    }
LAB_1201df78:
    *(undefined2 *)(param_1 + 0x94) = 0;
  }
  if (bVar4) {
    pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x1a,&local_84);
    DAT_12039a9c = (*pcVar2)(CONCAT22(local_84._2_2_,(undefined2)local_84),param_1,&uStack_b0);
  }
  return local_bc;
}


