
/* ==== FUN_0040cd50 @ 0040cd50 ==== 
 * signature: undefined __thiscall FUN_0040cd50(void * this, char param_1)
 * body: 0040cd50-0040cd6f
 */

void __thiscall FUN_0040cd50(void *this,char param_1)

{
  if (param_1 != '\0') {
    *(uint *)((int)this + 0x26) = *(uint *)((int)this + 0x26) | 0x800;
    return;
  }
  *(uint *)((int)this + 0x26) = *(uint *)((int)this + 0x26) & 0xfffff7ff;
  return;
}


