
/* ==== FUN_0040c640 @ 0040c640 ==== 
 * signature: undefined4 __thiscall FUN_0040c640(void * this, int * param_1)
 * body: 0040c640-0040c672
 */

undefined4 __thiscall FUN_0040c640(void *this,int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*(int *)this + 0x16c))();
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if (param_1 == piVar1) break;
    piVar1 = (int *)(**(code **)(*piVar1 + 0x16c))();
  }
  return CONCAT31((int3)((uint)piVar1 >> 8),1);
}


