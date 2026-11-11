
/* ==== FUN_004135a0 @ 004135a0 ==== 
 * signature: int __thiscall FUN_004135a0(void * this, int * param_1, undefined4 param_2, short * param_3)
 * body: 004135a0-00413701
 */

int __thiscall FUN_004135a0(void *this,int *param_1,undefined4 param_2,short *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined4 uVar4;
  int *piVar5;
  char local_108 [256];
  undefined2 local_8 [2];
  
  bVar2 = FUN_00437430(param_1,(int *)&DAT_004d9cb8);
  if (CONCAT31(extraout_var,bVar2) != 0) {
    iVar3 = FUN_00455c10(param_3,(int *)local_8,(int *)0x0);
    return iVar3;
  }
  bVar2 = FUN_00437430(param_1,(int *)&DAT_004d9c18);
  if (CONCAT31(extraout_var_00,bVar2) != 0) {
    iVar3 = FUN_00456560(param_3,local_108,0x100,(int *)0x0);
    if (iVar3 == 0) {
      (**(code **)(*(int *)this + 0x74))(local_108);
      return 0;
    }
    return 0x60002;
  }
  bVar2 = FUN_00437430(param_1,(int *)s_flushpriority_004d9c54);
  if (CONCAT31(extraout_var_01,bVar2) != 0) {
    iVar3 = FUN_00455c10(param_3,(int *)local_8,(int *)0x0);
    if (iVar3 == 0) {
      FUN_00412ff0(this,local_8[0]);
    }
    return iVar3;
  }
  bVar2 = FUN_00437430(param_1,(int *)s_attributevalue_004d9bdc);
  if (CONCAT31(extraout_var_02,bVar2) != 0) {
    pcVar1 = *(code **)(*(int *)this + 0x94);
    iVar3 = (*pcVar1)();
    if (iVar3 != 0) {
      uVar4 = (*pcVar1)(param_2,param_3);
      iVar3 = (**(code **)(*DAT_004da38c + 0x124))(this,uVar4);
      return iVar3;
    }
    return 0x10000;
  }
  piVar5 = (int *)(**(code **)(*(int *)this + 0xb0))(param_1);
  if (piVar5 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar5 + 0x9c))(s_value_004d9864,param_2,param_3);
    return iVar3;
  }
  return 0x10000;
}


