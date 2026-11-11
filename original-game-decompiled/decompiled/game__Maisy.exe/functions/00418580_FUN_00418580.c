
/* ==== FUN_00418580 @ 00418580 ==== 
 * signature: undefined __thiscall FUN_00418580(void * this, undefined4 * param_1)
 * body: 00418580-004185b9
 */

void __thiscall FUN_00418580(void *this,undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if ((piVar1 != (int *)0x0) && ((*(int *)((int)this + 4) == piVar1[3] || (piVar1[3] == 0)))) {
    if (piVar1 != (int *)0x0) {
      FUN_00417f30(piVar1);
      FUN_004a602d(piVar1);
    }
    *param_1 = 0;
  }
  return;
}


