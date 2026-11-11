
/* ==== FUN_0044c710 @ 0044c710 ==== 
 * signature: undefined __thiscall FUN_0044c710(void * this, LPARAM param_1)
 * body: 0044c710-0044c72f
 */

void __thiscall FUN_0044c710(void *this,LPARAM param_1)

{
  if (*(HWND *)((int)this + 0x7e) != (HWND)0x0) {
    SendMessageA(*(HWND *)((int)this + 0x7e),0x470,0,param_1);
  }
  return;
}


