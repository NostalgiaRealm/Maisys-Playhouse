
/* ==== FUN_0040d8c0 @ 0040d8c0 ==== 
 * signature: undefined __thiscall FUN_0040d8c0(void * this, char param_1, char param_2)
 * body: 0040d8c0-0040d8f8
 */

void __thiscall FUN_0040d8c0(void *this,char param_1,char param_2)

{
  if (param_2 != '\0') {
    *(uint *)((int)this + 0x3a) = *(uint *)((int)this + 0x3a) | 1 << (0x1fU - param_1 & 0x1f);
    return;
  }
  *(uint *)((int)this + 0x3a) = *(uint *)((int)this + 0x3a) & ~(1 << (0x1fU - param_1 & 0x1f));
  return;
}


