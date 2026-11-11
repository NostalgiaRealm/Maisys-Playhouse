
/* ==== FUN_00415130 @ 00415130 ==== 
 * signature: undefined __thiscall FUN_00415130(void * this, char param_1)
 * body: 00415130-00415149
 */

void __thiscall FUN_00415130(void *this,char param_1)

{
  *(byte *)((int)this + 0x2e) =
       (param_1 << 2 ^ *(byte *)((int)this + 0x2e)) & 4 ^ *(byte *)((int)this + 0x2e);
  return;
}


