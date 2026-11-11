
/* ==== FUN_0040cd30 @ 0040cd30 ==== 
 * signature: undefined __thiscall FUN_0040cd30(void * this, char param_1)
 * body: 0040cd30-0040cd4f
 */

void __thiscall FUN_0040cd30(void *this,char param_1)

{
  if (param_1 != '\0') {
    *(uint *)((int)this + 0x26) = *(uint *)((int)this + 0x26) | 0x80000000;
    return;
  }
  *(uint *)((int)this + 0x26) = *(uint *)((int)this + 0x26) & 0x7fffffff;
  return;
}


