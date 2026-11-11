
/* ==== FUN_00488940 @ 00488940 ==== 
 * signature: undefined __thiscall FUN_00488940(void * this, undefined2 * param_1)
 * body: 00488940-00488977
 */

void __thiscall FUN_00488940(void *this,undefined2 *param_1)

{
  tagRECT local_14;
  
  GetClientRect(*(HWND *)((int)this + 0x1c),&local_14);
  *param_1 = (undefined2)local_14.left;
  param_1[1] = (undefined2)local_14.top;
  param_1[3] = (undefined2)local_14.bottom;
  param_1[2] = (undefined2)local_14.right;
  return;
}


