
/* ==== FUN_00412ee0 @ 00412ee0 ==== 
 * signature: undefined __thiscall FUN_00412ee0(void * this, char param_1)
 * body: 00412ee0-00412ef9
 */

void __thiscall FUN_00412ee0(void *this,char param_1)

{
  *(byte *)((int)this + 0x10) =
       (param_1 << 2 ^ *(byte *)((int)this + 0x10)) & 4 ^ *(byte *)((int)this + 0x10);
  return;
}


