
/* ==== FUN_0040cc30 @ 0040cc30 ==== 
 * signature: undefined __thiscall FUN_0040cc30(void * this, char param_1)
 * body: 0040cc30-0040cc4f
 */

void __thiscall FUN_0040cc30(void *this,char param_1)

{
  if (param_1 != '\0') {
    *(uint *)((int)this + 0x26) = *(uint *)((int)this + 0x26) | 0x2000000;
    return;
  }
  *(uint *)((int)this + 0x26) = *(uint *)((int)this + 0x26) & 0xfdffffff;
  return;
}


