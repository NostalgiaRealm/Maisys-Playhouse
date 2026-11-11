
/* ==== FUN_00415bd0 @ 00415bd0 ==== 
 * signature: undefined1 __cdecl FUN_00415bd0(undefined4 param_1, uint * param_2, char * param_3, short * param_4, int param_5)
 * body: 00415bd0-00415ee3
 */

undefined1 __cdecl
FUN_00415bd0(undefined4 param_1,uint *param_2,char *param_3,short *param_4,int param_5)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  int *piVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  short *psVar9;
  short *psVar10;
  undefined2 local_d8;
  int local_d6;
  short local_ac [24];
  short local_7c [24];
  short local_4c [22];
  int local_20 [5];
  void *local_c;
  undefined4 local_8;
  
  local_8 = (uint)(uint3)local_8;
  FUN_004374f0(param_3,(char *)local_20);
  if (param_2 == (uint *)0x0) goto LAB_00415eda;
  local_7c[0] = 0;
  local_c = (void *)0x0;
  if (*param_4 == 0x1c) {
    local_c = *(void **)(param_4 + 1);
    psVar9 = param_4;
    psVar10 = local_7c;
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined4 *)psVar10 = *(undefined4 *)psVar9;
      psVar9 = psVar9 + 2;
      psVar10 = psVar10 + 2;
    }
    *psVar10 = *psVar9;
    *param_4 = 0x17;
  }
  puVar8 = (undefined2 *)0x0;
  if (param_5 != 0) {
    puVar8 = &local_d8;
    local_d6 = param_5;
    local_d8 = 1;
  }
  FUN_004169e0(param_4,local_4c,0);
  local_8 = *param_2;
  iVar6 = (**(code **)(local_8 + 0x98))(local_20,puVar8,local_4c);
  if (iVar6 == 0) {
    uVar3 = FUN_004166b0(local_4c,param_4);
    local_8 = CONCAT13((char)uVar3,(uint3)local_8);
  }
  else {
    bVar1 = FUN_00437430(local_20,(int *)&DAT_004d9d20);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      bVar1 = FUN_00437430(local_20,(int *)s_parent_004d9d38);
      if (CONCAT31(extraout_var_00,bVar1) == 0) {
        bVar1 = FUN_00437430(local_20,(int *)&DAT_004d9d50);
        if (CONCAT31(extraout_var_01,bVar1) == 0) {
          bVar1 = FUN_00437430(local_20,(int *)s_previous_004d9d68);
          if (CONCAT31(extraout_var_02,bVar1) == 0) {
            bVar1 = FUN_00437430(local_20,(int *)s_element_004d9d80);
            if (CONCAT31(extraout_var_03,bVar1) == 0) {
              bVar1 = FUN_00437430(local_20,(int *)s_subsection_004d9d98);
              if (CONCAT31(extraout_var_04,bVar1) == 0) {
                if ((*(byte *)((int)param_2 + 0x1e) & 0x80) == 0) {
                  iVar6 = FUN_00416f70(local_20);
                  if (iVar6 < 1) {
                    if ((*(byte *)((int)param_2 + 0x1e) & 2) != 0) {
                      piVar4 = (int *)FUN_00469f80((int *)param_2);
                      piVar4 = FUN_00415ef0(piVar4,param_3);
                      if (piVar4 != (int *)0x0) {
                        *param_4 = 0x19;
                        *(int **)(param_4 + 1) = piVar4;
                        local_8 = CONCAT13(1,(uint3)local_8);
                        goto LAB_00415e5f;
                      }
                    }
                    local_8 = local_8 & 0xffffff;
                  }
                  else {
                    psVar9 = param_4;
                    psVar10 = local_ac;
                    for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
                      *(undefined4 *)psVar10 = *(undefined4 *)psVar9;
                      psVar9 = psVar9 + 2;
                      psVar10 = psVar10 + 2;
                    }
                    *psVar10 = *psVar9;
                    local_ac[0] = 0x17;
                    cVar2 = (**(code **)(local_8 + 0x8c))(iVar6,local_ac);
                    local_8 = CONCAT13(cVar2,(uint3)local_8);
                    if (cVar2 != '\0') {
                      psVar9 = local_ac;
                      psVar10 = param_4;
                      for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
                        *(undefined4 *)psVar10 = *(undefined4 *)psVar9;
                        psVar9 = psVar9 + 2;
                        psVar10 = psVar10 + 2;
                      }
                      *psVar10 = *psVar9;
                    }
                  }
                }
                else {
                  FUN_00474bd0(param_2,0,param_4,0x17);
                  bVar1 = FUN_00437430(local_20,(int *)s_value_004d9e70);
                  if (CONCAT31(extraout_var_05,bVar1) == 0) {
                    uVar3 = FUN_00416390(param_4,local_20);
                    local_8 = CONCAT13((char)uVar3,(uint3)local_8);
                  }
                  else {
                    local_8 = CONCAT13(1,(uint3)local_8);
                  }
                }
              }
              else {
                bVar1 = FUN_00416d20((int *)param_2,param_4,4);
                local_8 = CONCAT13(bVar1,(uint3)local_8);
              }
            }
            else {
              bVar1 = FUN_00416d20((int *)param_2,param_4,3);
              local_8 = CONCAT13(bVar1,(uint3)local_8);
            }
          }
          else {
            bVar1 = FUN_00416d20((int *)param_2,param_4,2);
            local_8 = CONCAT13(bVar1,(uint3)local_8);
          }
        }
        else {
          bVar1 = FUN_00416d20((int *)param_2,param_4,1);
          local_8 = CONCAT13(bVar1,(uint3)local_8);
        }
      }
      else {
        bVar1 = FUN_00416d20((int *)param_2,param_4,0);
        local_8 = CONCAT13(bVar1,(uint3)local_8);
      }
    }
    else {
      *param_4 = 3;
      local_8 = CONCAT13(1,(uint3)local_8);
      *(undefined4 *)(param_4 + 1) = param_1;
    }
  }
LAB_00415e5f:
  if ((local_8._3_1_ != '\0') && (local_c != (void *)0x0)) {
    FUN_00474c50(local_c,param_2,param_4);
  }
  if (local_7c[0] == 0x1c) {
    if ((local_8._3_1_ != '\0') && (local_c != (void *)0x0)) {
      uVar3 = FUN_004169e0(param_4,local_4c,0);
      if ((char)uVar3 != '\0') {
        pcVar5 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 0x10),1,0x1a,(int *)&local_c);
        DAT_004e34cc = (*pcVar5)(local_c,0,local_4c);
      }
    }
    psVar9 = local_7c;
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined4 *)param_4 = *(undefined4 *)psVar9;
      psVar9 = psVar9 + 2;
      param_4 = param_4 + 2;
    }
    *param_4 = *psVar9;
  }
LAB_00415eda:
  return local_8._3_1_;
}


