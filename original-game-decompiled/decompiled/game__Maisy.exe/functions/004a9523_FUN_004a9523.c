
/* ==== FUN_004a9523 @ 004a9523 ==== 
 * signature: undefined __thiscall FUN_004a9523(void * this, WINDOWPLACEMENT * param_1)
 * body: 004a9523-004a9539
 */

void __thiscall FUN_004a9523(void *this,WINDOWPLACEMENT *param_1)

{
  param_1->length = 0x2c;
  GetWindowPlacement(*(HWND *)((int)this + 0x1c),param_1);
  return;
}


