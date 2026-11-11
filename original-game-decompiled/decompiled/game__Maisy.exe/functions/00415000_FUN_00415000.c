
/* ==== FUN_00415000 @ 00415000 ==== 
 * signature: undefined __thiscall FUN_00415000(void * this, char param_1)
 * body: 00415000-00415019
 */

void __thiscall FUN_00415000(void *this,char param_1)

{
  *(byte *)((int)this + 0x2e) =
       (param_1 << 3 ^ *(byte *)((int)this + 0x2e)) & 8 ^ *(byte *)((int)this + 0x2e);
  return;
}


