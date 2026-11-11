
/* ==== FUN_004a953a @ 004a953a ==== 
 * signature: undefined __thiscall FUN_004a953a(void * this, WINDOWPLACEMENT * param_1)
 * body: 004a953a-004a9550
 */

void __thiscall FUN_004a953a(void *this,WINDOWPLACEMENT *param_1)

{
  param_1->length = 0x2c;
  SetWindowPlacement(*(HWND *)((int)this + 0x1c),param_1);
  return;
}


