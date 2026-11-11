
/* ==== FUN_0046dd20 @ 0046dd20 ==== 
 * signature: undefined __thiscall FUN_0046dd20(void * this, undefined4 param_1, uint param_2)
 * body: 0046dd20-0046dd58
 */

void __thiscall FUN_0046dd20(void *this,undefined4 param_1,uint param_2)

{
  int *piVar1;
  
  if ((param_2 & 0x100) == 0) {
    for (piVar1 = (int *)FUN_00469fb0(this); piVar1 != (int *)0x0;
        piVar1 = *(int **)((int)piVar1 + 0x6a)) {
      (**(code **)(*piVar1 + 0xb8))(param_1,param_2);
    }
  }
  return;
}


