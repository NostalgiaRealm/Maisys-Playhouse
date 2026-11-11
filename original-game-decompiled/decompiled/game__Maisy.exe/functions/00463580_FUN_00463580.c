
/* ==== FUN_00463580 @ 00463580 ==== 
 * signature: undefined __thiscall FUN_00463580(void * this, undefined4 * param_1, undefined4 * param_2)
 * body: 00463580-004635db
 */

void __thiscall FUN_00463580(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)((int)this + 0x62);
  if ((piVar1 != (int *)0x0) && ((*(byte *)((int)piVar1 + 0x1e) & 4) != 0)) {
    (**(code **)(*piVar1 + 0x398))(param_1,1);
    (**(code **)(**(int **)((int)this + 0x62) + 0x3a0))(param_2,1);
    return;
  }
  (**(code **)(*(int *)this + 0x38c))(param_1,1);
  uVar2 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar2;
  return;
}


