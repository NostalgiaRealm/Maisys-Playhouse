
/* ==== FUN_004a8207 @ 004a8207 ==== 
 * signature: undefined __thiscall FUN_004a8207(void * this, LONG param_1)
 * body: 004a8207-004a822b
 */

void __thiscall FUN_004a8207(void *this,LONG param_1)

{
  if (*(int **)((int)this + 0x38) == (int *)0x0) {
    SetWindowLongA(*(HWND *)((int)this + 0x1c),-0xc,param_1);
  }
  else {
    (**(code **)(**(int **)((int)this + 0x38) + 0x98))();
  }
  return;
}


