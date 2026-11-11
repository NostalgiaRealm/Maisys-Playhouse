
/* ==== FUN_0045f170 @ 0045f170 ==== 
 * signature: undefined __thiscall FUN_0045f170(void * this, short * param_1)
 * body: 0045f170-0045f1a1
 */

void __thiscall FUN_0045f170(void *this,short *param_1)

{
  tagRECT local_14;
  
  GetWindowRect(*(HWND *)((int)this + 0x1c),&local_14);
  *param_1 = (short)local_14.right - (short)local_14.left;
  param_1[1] = (short)local_14.bottom - (short)local_14.top;
  return;
}


