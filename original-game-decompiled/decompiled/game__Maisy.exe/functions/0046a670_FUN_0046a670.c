
/* ==== FUN_0046a670 @ 0046a670 ==== 
 * signature: undefined __thiscall FUN_0046a670(void * this, undefined4 param_1, undefined4 param_2)
 * body: 0046a670-0046a6c5
 */

void __thiscall FUN_0046a670(void *this,undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  
  for (piVar1 = *(int **)((int)this + 0x4e); piVar1 != (int *)0x0;
      piVar1 = *(int **)((int)piVar1 + 0x3e)) {
    (**(code **)(*piVar1 + 0x23c))(param_1,param_2);
  }
  for (piVar1 = (int *)FUN_00469fb0(this); piVar1 != (int *)0x0;
      piVar1 = *(int **)((int)piVar1 + 0x6a)) {
    (**(code **)(*piVar1 + 0x224))(param_1,param_2);
  }
  return;
}


