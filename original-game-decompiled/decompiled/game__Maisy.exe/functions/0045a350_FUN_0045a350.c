
/* ==== FUN_0045a350 @ 0045a350 ==== 
 * signature: undefined __thiscall FUN_0045a350(void * this, undefined2 * param_1, undefined2 * param_2, undefined1 * param_3)
 * body: 0045a350-0045a386
 */

void __thiscall FUN_0045a350(void *this,undefined2 *param_1,undefined2 *param_2,undefined1 *param_3)

{
  *param_1 = *(undefined2 *)((int)this + 0x5a);
  param_1[1] = *(undefined2 *)((int)this + 0x5c);
  if (param_2 != (undefined2 *)0x0) {
    *param_2 = *(undefined2 *)((int)this + 0x5e);
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = *(undefined1 *)((int)this + 0x89);
  }
  return;
}


