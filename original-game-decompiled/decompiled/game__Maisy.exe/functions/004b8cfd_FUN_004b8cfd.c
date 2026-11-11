
/* ==== FUN_004b8cfd @ 004b8cfd ==== 
 * signature: undefined4 __thiscall FUN_004b8cfd(void * this, HWND param_1, LPARAM param_2)
 * body: 004b8cfd-004b8d17
 */

undefined4 __thiscall FUN_004b8cfd(void *this,HWND param_1,LPARAM param_2)

{
  PostMessageA(param_1,0x3e1,*(WPARAM *)((int)this + 0x1c),param_2);
  return 0;
}


