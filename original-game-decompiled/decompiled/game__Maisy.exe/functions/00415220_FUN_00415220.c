
/* ==== FUN_00415220 @ 00415220 ==== 
 * signature: undefined __thiscall FUN_00415220(void * this, byte param_1)
 * body: 00415220-00415237
 */

void __thiscall FUN_00415220(void *this,byte param_1)

{
  *(byte *)((int)this + 0x2e) =
       (param_1 ^ *(byte *)((int)this + 0x2e)) & 1 ^ *(byte *)((int)this + 0x2e);
  return;
}


