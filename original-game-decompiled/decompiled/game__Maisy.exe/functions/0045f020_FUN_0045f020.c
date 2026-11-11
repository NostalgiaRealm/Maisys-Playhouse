
/* ==== FUN_0045f020 @ 0045f020 ==== 
 * signature: undefined __thiscall FUN_0045f020(void * this, undefined2 * param_1)
 * body: 0045f020-0045f049
 */

void __thiscall FUN_0045f020(void *this,undefined2 *param_1)

{
  tagRECT local_14;
  
  GetWindowRect(*(HWND *)((int)this + 0x1c),&local_14);
  *param_1 = (undefined2)local_14.left;
  param_1[1] = (undefined2)local_14.top;
  return;
}


