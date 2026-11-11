
/* ==== FUN_11014a00 @ 11014a00 ==== 
 * signature: uint __cdecl FUN_11014a00(undefined4 * param_1, int param_2, int param_3, short * param_4, undefined2 * param_5, int param_6)
 * body: 11014a00-11014af9
 */

uint __cdecl
FUN_11014a00(undefined4 *param_1,int param_2,int param_3,short *param_4,undefined2 *param_5,
            int param_6)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 uVar5;
  int iVar6;
  short sVar7;
  undefined4 auStackY_20020 [32757];
  undefined4 *puVar8;
  short *local_24;
  undefined4 local_20 [8];
  
  iVar6 = *(int *)(param_2 + 10);
  if (8 < iVar6) {
    return CONCAT22((short)((uint)iVar6 >> 0x10),0xffff);
  }
  sVar7 = 0;
  if (0 < iVar6) {
    do {
      uVar2 = FUN_11019d90(param_3,param_4,(int *)&local_24);
      if ((short)uVar2 != 0) {
        return uVar2;
      }
      if (499 < *local_24) {
        return CONCAT22((short)((uint)local_24 >> 0x10),0xffff);
      }
      iVar6 = (int)sVar7;
      sVar7 = sVar7 + 1;
      local_20[(*(int *)(param_2 + 10) - iVar6) + -1] = local_24;
    } while ((int)sVar7 < *(int *)(param_2 + 10));
  }
  sVar7 = 7;
  iVar6 = *(int *)(param_2 + 10);
  if (iVar6 < 8) {
    do {
      iVar3 = (int)sVar7;
      sVar7 = sVar7 + -1;
      local_20[iVar3] = 0;
    } while (iVar6 <= sVar7);
  }
  puVar8 = local_20;
  *param_5 = 0x17;
  uVar5 = (undefined2)*(undefined4 *)(param_2 + 10);
  uVar4 = FUN_11014820(param_1,param_6,*(int *)(param_2 + 6));
  sVar7 = 0;
  uVar1 = FUN_1100ed00(param_1,uVar4,uVar5,puVar8,param_5);
  uVar5 = extraout_var;
  if (0 < *(int *)(param_2 + 10)) {
    do {
      iVar6 = (int)sVar7;
      sVar7 = sVar7 + 1;
      FUN_11019e40(param_1,(short *)local_20[iVar6]);
      uVar5 = extraout_var_00;
    } while ((int)sVar7 < *(int *)(param_2 + 10));
  }
  return CONCAT22(uVar5,uVar1);
}


