
/* ==== FUN_0046d320 @ 0046d320 ==== 
 * signature: bool __stdcall FUN_0046d320(char * param_1, byte * param_2, uint param_3, int * param_4, undefined4 * param_5, char * param_6)
 * body: 0046d320-0046d967
 */

bool FUN_0046d320(char *param_1,byte *param_2,uint param_3,int *param_4,undefined4 *param_5,
                 char *param_6)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  char *pcVar6;
  char local_218 [256];
  short local_118 [22];
  undefined2 local_ec;
  undefined4 local_ea;
  short local_c0;
  int local_be;
  short local_94 [7];
  byte *local_86;
  int local_68 [5];
  undefined2 local_54;
  undefined2 local_52;
  byte *local_50;
  undefined4 local_2a;
  int local_24;
  char *local_20;
  int *local_1c;
  int *local_18;
  char *local_14;
  undefined2 *local_10;
  char *local_c;
  char local_5;
  
  uVar2 = FUN_0043d430(param_1,&DAT_004dc53c);
  if (uVar2 == 0) {
LAB_0046d941:
    piVar3 = (int *)FUN_0043c260();
    FUN_00490d10(param_2,0xff,&DAT_004dc52c,piVar3);
    return true;
  }
  uVar2 = FUN_0043d430(param_1,s_short_date_004dc530);
  if (uVar2 == 0) goto LAB_0046d941;
  uVar2 = FUN_0043d430(param_1,s_long_date_004dc520);
  if (uVar2 == 0) {
    piVar3 = (int *)FUN_0043c260();
    FUN_00490d10(param_2,0xff,(byte *)s__A___B__d___Y_004dc510,piVar3);
    return true;
  }
  uVar2 = FUN_0043d430(param_1,s_abbrev_date_004dc504);
  if (uVar2 == 0) {
    piVar3 = (int *)FUN_0043c260();
    FUN_00490d10(param_2,0xff,(byte *)s__a___b__d___Y_004dc4f4,piVar3);
    return true;
  }
  uVar2 = FUN_0043d430(param_1,&DAT_004dc4ec);
  if (uVar2 == 0) {
LAB_0046d91a:
    piVar3 = (int *)FUN_0043c260();
    FUN_00490d10(param_2,0xff,(byte *)s__I__M__p_004dc4d4,piVar3);
    return true;
  }
  uVar2 = FUN_0043d430(param_1,s_short_time_004dc4e0);
  if (uVar2 == 0) goto LAB_0046d91a;
  uVar2 = FUN_0043d430(param_1,s_long_time_004dc4c8);
  piVar3 = local_1c;
  if (uVar2 == 0) {
    piVar3 = (int *)FUN_0043c260();
    FUN_00490d10(param_2,0xff,(byte *)s__I__M__S__p_004dc4bc,piVar3);
    return true;
  }
  local_14 = local_218;
  uVar2 = 0;
  local_18 = (int *)0x0;
  local_2a = local_2a & 0xffffff;
  local_ea = 0;
  local_c = param_1;
  local_20 = (char *)0x0;
  local_c0 = 0x6a;
  local_ec = 1;
  FUN_0046d250(param_1,(int *)&local_20);
  do {
    if (uVar2 != 0) break;
    iVar5 = -1;
    pcVar6 = local_c;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_0046d0d0('.',~(ushort)iVar5 - 1,(int)local_c,(int)local_218,(int *)&local_c);
    if (local_c == (char *)0x0) {
      local_2a = CONCAT13(1,(undefined3)local_2a);
    }
    local_14 = local_218;
    local_10 = &local_ec;
    FUN_0046d280(&local_14,(int *)&local_10);
    FUN_004374f0(local_14,(char *)local_68);
    FUN_00437550((int)local_68);
    *param_2 = 0;
    local_c0 = 0x6a;
    iVar5 = (**(code **)(*piVar3 + 0x98))(local_68,local_10,&local_c0);
    if (iVar5 == 0) {
      uVar2 = FUN_00455ee0(&local_c0,(int *)&local_18,(int *)0x0);
      if (uVar2 == 0) {
        piVar3 = local_18;
        if (local_18 == (int *)0x0) {
          if (local_2a._3_1_ == '\0') {
            uVar2 = 0x8000b;
          }
          else {
            uVar2 = FUN_00456560(&local_c0,(char *)param_2,param_3,(int *)0x0);
          }
        }
      }
      else {
        local_5 = '\0';
        if (local_c == (char *)0x0) {
LAB_0046d64e:
          local_5 = '\x01';
        }
        else {
          iVar5 = -1;
          pcVar6 = local_c;
          do {
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          if (iVar5 == -2) goto LAB_0046d64e;
          iVar5 = -1;
          pcVar6 = local_c;
          do {
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          FUN_0046d0d0('.',~(ushort)iVar5 - 1,(int)local_c,(int)local_218,(int *)&local_c);
          local_118[0] = 0;
          if (local_c == (char *)0x0) {
            local_2a = CONCAT13(1,(undefined3)local_2a);
          }
          local_14 = local_218;
          local_10 = &local_ec;
          FUN_0046d280(&local_14,(int *)&local_10);
          FUN_004374f0(local_14,(char *)local_68);
          FUN_00437550((int)local_68);
          uVar2 = FUN_00458270(&local_c0,local_68,local_118);
          if (uVar2 != 0) goto LAB_0046d64e;
          piVar3 = (int *)0x0;
          FUN_00456560(local_118,(char *)param_2,param_3,(int *)0x0);
        }
        if (local_5 != '\0') {
          *param_4 = 0;
          iVar5 = FUN_004564e0(&local_c0,(char *)param_2,param_3,param_4,param_5,(int *)0x0);
          if (iVar5 == 0) {
            uVar2 = 0;
            if (local_2a._3_1_ == '\0') {
              uVar2 = 0x80008;
            }
            piVar3 = (int *)0x0;
            if (*param_4 != 0) {
              *param_6 = local_be == -1;
            }
          }
          else {
            uVar2 = 0x80007;
            piVar3 = (int *)0x0;
          }
        }
      }
    }
    else {
      piVar3 = (int *)(**(code **)(*local_1c + 0x16c))();
      piVar3 = FUN_0046d180(local_14,piVar3);
      if (piVar3 == (int *)0x0) {
        uVar2 = 0x80009;
      }
      else {
        uVar2 = 0;
        if (local_10 != (undefined2 *)0x0) {
          local_94[0] = 0x6a;
          iVar5 = (**(code **)(*piVar3 + 0x98))(s_value_004d9864,local_10,local_94);
          if (iVar5 == 0) {
            iVar5 = FUN_00455ee0(local_94,(int *)&local_18,(int *)0x0);
            if (iVar5 == 0) {
              uVar2 = 0;
              piVar3 = local_18;
              if (local_18 == (int *)0x0) {
                if (local_2a._3_1_ == '\0') {
                  uVar2 = 0x8000b;
                }
                else {
                  uVar2 = FUN_00456560(local_94,(char *)param_2,param_3,(int *)0x0);
                }
              }
            }
            else {
              uVar2 = -(uint)(local_2a._3_1_ == '\0') & 0x80008;
            }
          }
        }
      }
    }
    if (*param_6 == '\0') {
      pcVar4 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 0x10),1,0x1a,&local_24);
      DAT_004e34cc = (*pcVar4)(local_24,0xffffffff,&local_c0);
    }
  } while (local_2a._3_1_ == '\0');
  if (local_2a._3_1_ == '\0') {
LAB_0046d8e9:
    if (uVar2 == 0) goto LAB_0046d90a;
  }
  else if (uVar2 == 0) {
    if (piVar3 != (int *)0x0) {
      if ((*(uint *)((int)piVar3 + 0x1e) & 0x20000000) == 0) {
        if ((*(uint *)((int)piVar3 + 0x1e) & 0x80) == 0) {
          uVar2 = 0x8000a;
        }
        else {
          local_50 = param_2;
          local_52 = 0xff;
          FUN_00474bd0(piVar3,local_1c,&local_54,0xd);
        }
      }
      else {
        local_94[5] = 0;
        local_94[6] = 0;
        local_86 = param_2;
        local_94[3] = 0x100;
        local_94[4] = 0;
        local_94[1] = 0;
        local_94[2] = 0;
        local_94[0] = 0x66;
        iVar5 = (**(code **)(*piVar3 + 0x98))(s_value_004d9864,local_10,local_94);
        if (iVar5 == 0) {
          iVar5 = FUN_00456560(local_94,(char *)param_2,param_3,(int *)0x0);
          if (iVar5 == 0) {
            pcVar4 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 0x10),1,0x1a,&local_2a);
            DAT_004e34cc = (*pcVar4)(local_2a,0xffffffff,local_94);
            uVar2 = 0;
          }
          else {
            pcVar4 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 0x10),1,0x1a,&local_2a);
            uVar2 = 0x80007;
            DAT_004e34cc = (*pcVar4)(local_2a,0xffffffff,local_94);
          }
        }
      }
    }
    goto LAB_0046d8e9;
  }
  if (local_20 != (char *)0x0) {
    uVar2 = 0;
    _strncpy((char *)param_2,local_20,0xff);
  }
LAB_0046d90a:
  return uVar2 == 0;
}


