
/* ==== FUN_004817a0 @ 004817a0 ==== 
 * signature: undefined4 __thiscall FUN_004817a0(void * this, undefined4 * param_1)
 * body: 004817a0-004817cd
 */

undefined4 __thiscall FUN_004817a0(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 0x134);
  param_1[1] = *(undefined4 *)((int)this + 0x138);
  param_1[2] = *(undefined4 *)((int)this + 0x13c);
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)((int)this + 0x140);
  return 0;
}


