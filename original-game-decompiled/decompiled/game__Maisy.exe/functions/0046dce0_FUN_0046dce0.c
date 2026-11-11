
/* ==== FUN_0046dce0 @ 0046dce0 ==== 
 * signature: undefined __thiscall FUN_0046dce0(void * this, undefined4 param_1, uint param_2)
 * body: 0046dce0-0046dd18
 */

void __thiscall FUN_0046dce0(void *this,undefined4 param_1,uint param_2)

{
  int *piVar1;
  
  if ((param_2 & 0x100) == 0) {
    for (piVar1 = (int *)FUN_00469f80(this); piVar1 != (int *)0x0;
        piVar1 = *(int **)((int)piVar1 + 0x3e)) {
      (**(code **)(*piVar1 + 0xb8))(param_1,param_2);
    }
  }
  return;
}


