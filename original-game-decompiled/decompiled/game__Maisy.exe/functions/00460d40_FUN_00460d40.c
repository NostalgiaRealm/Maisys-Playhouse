
/* ==== FUN_00460d40 @ 00460d40 ==== 
 * signature: undefined __thiscall FUN_00460d40(void * this, undefined4 * param_1)
 * body: 00460d40-00460d68
 */

void __thiscall FUN_00460d40(void *this,undefined4 *param_1)

{
  *(undefined4 *)((int)this + 0x120) = *param_1;
  *(undefined4 *)((int)this + 0x124) = param_1[1];
  *(undefined4 *)((int)this + 0x128) = param_1[2];
  *(undefined2 *)((int)this + 300) = *(undefined2 *)(param_1 + 3);
  return;
}


