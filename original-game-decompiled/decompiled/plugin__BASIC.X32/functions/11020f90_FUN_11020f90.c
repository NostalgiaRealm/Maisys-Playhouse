
/* ==== FUN_11020f90 @ 11020f90 ==== 
 * signature: uint __fastcall FUN_11020f90(undefined4 param_1, undefined4 param_2, undefined4 * param_3, short * param_4, short * param_5, int param_6, undefined2 * param_7)
 * body: 11020f90-1102111a
 */

uint __fastcall
FUN_11020f90(undefined4 param_1,undefined4 param_2,undefined4 *param_3,short *param_4,short *param_5
            ,int param_6,undefined2 *param_7)

{
  short sVar1;
  short sVar2;
  uint in_EAX;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  int iVar3;
  undefined2 uVar6;
  undefined2 extraout_var_02;
  uint uVar4;
  uint uVar5;
  undefined4 uVar7;
  undefined4 extraout_EDX;
  undefined4 *puVar8;
  
  uVar5 = in_EAX & 0xffff0000;
  if (*param_4 != 0x1fd) {
    return CONCAT22((short)(in_EAX >> 0x10),0xffff);
  }
  sVar2 = param_4[7];
  uVar6 = (undefined2)((uint)param_1 >> 0x10);
  sVar1 = *param_5;
  uVar7 = CONCAT22((short)((uint)param_2 >> 0x10),sVar1);
  if (sVar2 != sVar1) {
    if (((sVar2 == 0x19) || (sVar2 == 3)) && (sVar1 == 0)) {
      param_5[1] = 0;
      param_5[2] = 0;
      *param_5 = sVar2;
    }
    else if ((sVar2 == 0) && ((sVar1 == 3 || (sVar1 == 0x19)))) {
      sVar2 = FUN_11020ed0(param_3,param_4,sVar1,param_6,param_7);
      uVar5 = CONCAT22(extraout_var,sVar2);
    }
    else if ((sVar2 == 0x19) &&
            (((sVar1 == 1 || (sVar1 == 0x10)) ||
             ((sVar1 == 0x11 ||
              ((((sVar1 == 0x15 || (sVar1 == 0xd)) || (sVar1 == 9)) ||
               ((sVar1 == 0x16 || (sVar1 == 0x1a)))))))))) {
      sVar2 = FUN_11020ed0(param_3,param_4,sVar1,param_6,param_7);
      uVar5 = CONCAT22(extraout_var_00,sVar2);
    }
    else {
      if (sVar1 == 0x19) {
        sVar2 = FUN_1101c7e0(param_3,param_6,param_5,param_7);
        uVar5 = CONCAT22(extraout_var_01,sVar2);
        uVar7 = extraout_EDX;
        uVar6 = extraout_var_02;
      }
      sVar2 = param_4[7];
      if (*param_5 != sVar2) {
        if ((short)uVar5 != 0) {
          return uVar5;
        }
        uVar5 = FUN_11021120(CONCAT22(uVar6,sVar2),uVar7,param_3,param_5,sVar2);
      }
    }
  }
  if ((short)uVar5 == 0) {
    iVar3 = *(int *)(param_4 + 5) * (*(int *)(param_4 + 3) + 1);
    *(int *)(param_4 + 3) = *(int *)(param_4 + 3) + 1;
    *(int *)(param_4 + 1) = iVar3;
    FUN_11002780(param_3,(undefined4 *)(param_4 + 8),iVar3);
    iVar3 = FUN_11002840(param_3,*(undefined4 *)(param_4 + 8));
    uVar5 = *(uint *)(param_4 + 5);
    puVar8 = (undefined4 *)((*(int *)(param_4 + 3) + -1) * uVar5 + iVar3);
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar8 = *(undefined4 *)param_5;
      param_5 = param_5 + 2;
      puVar8 = puVar8 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)puVar8 = (char)*param_5;
      param_5 = (short *)((int)param_5 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    FUN_110213f0(param_3,(short *)((*(int *)(param_4 + 3) + -1) * *(int *)(param_4 + 5) + iVar3));
    uVar5 = FUN_110028a0(param_3,*(undefined4 *)(param_4 + 8));
    uVar5 = uVar5 & 0xffff0000;
  }
  return uVar5;
}


