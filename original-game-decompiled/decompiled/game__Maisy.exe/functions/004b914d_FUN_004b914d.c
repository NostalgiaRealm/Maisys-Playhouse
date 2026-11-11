
/* ==== FUN_004b914d @ 004b914d ==== 
 * signature: LRESULT __thiscall FUN_004b914d(void * this, WPARAM param_1, LPARAM param_2)
 * body: 004b914d-004b9170
 */

LRESULT __thiscall FUN_004b914d(void *this,WPARAM param_1,LPARAM param_2)

{
  LRESULT LVar1;
  
  LVar1 = 0;
  if ((*(byte *)((int)this + 0x24) & 0x40) == 0) {
    LVar1 = SendMessageA(*(HWND *)((int)this + 0x1c),0x362,param_1,param_2);
  }
  return LVar1;
}


