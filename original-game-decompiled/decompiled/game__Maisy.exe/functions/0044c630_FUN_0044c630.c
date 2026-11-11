
/* ==== FUN_0044c630 @ 0044c630 ==== 
 * signature: undefined __thiscall FUN_0044c630(void * this, LPARAM param_1)
 * body: 0044c630-0044c667
 */

void __thiscall FUN_0044c630(void *this,LPARAM param_1)

{
  char cVar1;
  
  if (*(HWND *)((int)this + 0x7e) != (HWND)0x0) {
    SendMessageA(*(HWND *)((int)this + 0x7e),0x807,0,param_1);
    cVar1 = FUN_0044bd00(this,2);
    if (cVar1 == '\0') {
      FUN_0044bbb0(this);
    }
  }
  return;
}


