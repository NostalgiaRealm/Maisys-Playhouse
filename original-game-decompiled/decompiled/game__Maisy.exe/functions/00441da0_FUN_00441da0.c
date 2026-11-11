
/* ==== FUN_00441da0 @ 00441da0 ==== 
 * signature: undefined __thiscall FUN_00441da0(void * this, undefined2 * param_1)
 * body: 00441da0-00441e1f
 */

void __thiscall FUN_00441da0(void *this,undefined2 *param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int *piVar5;
  
  piVar5 = (int *)(**(code **)(*(int *)this + 0x244))();
  (**(code **)(*piVar5 + 0x1dc))(param_1);
  FUN_0048d2a2();
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  FUN_0048d2e3();
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  return;
}


