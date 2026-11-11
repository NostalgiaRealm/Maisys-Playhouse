
/* ==== FUN_0042e450 @ 0042e450 ==== 
 * signature: undefined4 __thiscall FUN_0042e450(void * this, int param_1, short * param_2)
 * body: 0042e450-0042e48b
 */

undefined4 __thiscall FUN_0042e450(void *this,int param_1,short *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)(**(code **)(*(int *)this + 0x10))();
  uVar2 = (**(code **)(*piVar1 + 0x8c))(param_1,param_2);
  if ((char)uVar2 != '\0') {
    return CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  uVar2 = FUN_0046b650(this,param_1,param_2);
  return uVar2;
}


