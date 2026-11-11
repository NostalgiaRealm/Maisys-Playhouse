
/* ==== FUN_0040cd10 @ 0040cd10 ==== 
 * signature: undefined __thiscall FUN_0040cd10(void * this, char param_1)
 * body: 0040cd10-0040cd2f
 */

void __thiscall FUN_0040cd10(void *this,char param_1)

{
  if (param_1 != '\0') {
    *(uint *)((int)this + 0x26) = *(uint *)((int)this + 0x26) | 0x2000;
    return;
  }
  *(uint *)((int)this + 0x26) = *(uint *)((int)this + 0x26) & 0xffffdfff;
  return;
}


