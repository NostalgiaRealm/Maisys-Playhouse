
/* ==== FUN_004b790a @ 004b790a ==== 
 * signature: undefined4 __thiscall FUN_004b790a(void * this, int param_1)
 * body: 004b790a-004b795f
 */

undefined4 __thiscall FUN_004b790a(void *this,int param_1)

{
  UINT Msg;
  WPARAM wParam;
  
  wParam = 0;
  if (param_1 == 0xe131) {
    Msg = 0x228;
  }
  else if (param_1 == 0xe132) {
    Msg = 0x227;
  }
  else {
    if (param_1 == 0xe133) {
      wParam = 1;
    }
    else if (param_1 != 0xe134) {
      return 0;
    }
    Msg = 0x226;
  }
  SendMessageA(*(HWND *)((int)this + 0xbc),Msg,wParam,0);
  return 1;
}


