
/* ==== FUN_0044c750 @ 0044c750 ==== 
 * signature: undefined __thiscall FUN_0044c750(void * this, LPARAM param_1)
 * body: 0044c750-0044c76f
 */

void __thiscall FUN_0044c750(void *this,LPARAM param_1)

{
  if (*(HWND *)((int)this + 0x7e) != (HWND)0x0) {
    SendMessageA(*(HWND *)((int)this + 0x7e),0x46e,0,param_1);
  }
  return;
}


