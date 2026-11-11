
/* ==== FUN_0045a980 @ 0045a980 ==== 
 * signature: undefined __thiscall FUN_0045a980(void * this, short param_1, undefined4 param_2)
 * body: 0045a980-0045a99f
 */

void __thiscall FUN_0045a980(void *this,short param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = FUN_0045a920(this,param_1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x70))(param_2);
  }
  return;
}


