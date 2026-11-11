
/* ==== FUN_00486eb0 @ 00486eb0 ==== 
 * signature: undefined __thiscall FUN_00486eb0(void * this, byte param_1)
 * body: 00486eb0-00486ecd
 */

void __thiscall FUN_00486eb0(void *this,byte param_1)

{
  *(byte *)((int)this + 0x16e) =
       (param_1 ^ *(byte *)((int)this + 0x16e)) & 1 ^ *(byte *)((int)this + 0x16e);
  return;
}


