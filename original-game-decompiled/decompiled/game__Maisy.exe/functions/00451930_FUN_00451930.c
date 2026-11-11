
/* ==== FUN_00451930 @ 00451930 ==== 
 * signature: undefined __thiscall FUN_00451930(void * this, undefined1 * param_1)
 * body: 00451930-00451957
 */

void __thiscall FUN_00451930(void *this,undefined1 *param_1)

{
  int *piVar1;
  
  if (*(int *)((int)this + 0x50) == 0) {
    *param_1 = 0;
    return;
  }
  piVar1 = (int *)FUN_00458a00(*(int *)((int)this + 0x50));
  (**(code **)(*piVar1 + 0x70))(param_1);
  return;
}


