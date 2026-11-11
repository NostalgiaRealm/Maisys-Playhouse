
/* ==== FUN_0044f6e0 @ 0044f6e0 ==== 
 * signature: undefined __thiscall FUN_0044f6e0(void * this, char param_1)
 * body: 0044f6e0-0044f6ff
 */

void __thiscall FUN_0044f6e0(void *this,char param_1)

{
  *(byte *)((int)this + 0x15c) =
       (param_1 << 2 ^ *(byte *)((int)this + 0x15c)) & 4 ^ *(byte *)((int)this + 0x15c);
  return;
}


