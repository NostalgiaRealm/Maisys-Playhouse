
/* ==== FUN_00460cb0 @ 00460cb0 ==== 
 * signature: undefined __thiscall FUN_00460cb0(void * this, undefined4 * param_1)
 * body: 00460cb0-00460cdb
 */

void __thiscall FUN_00460cb0(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 0x120);
  param_1[1] = *(undefined4 *)((int)this + 0x124);
  param_1[2] = *(undefined4 *)((int)this + 0x128);
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)((int)this + 300);
  return;
}


