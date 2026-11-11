
/* ==== FUN_0040cc90 @ 0040cc90 ==== 
 * signature: undefined __thiscall FUN_0040cc90(void * this, char param_1)
 * body: 0040cc90-0040ccaf
 */

void __thiscall FUN_0040cc90(void *this,char param_1)

{
  if (param_1 != '\0') {
    *(uint *)((int)this + 0x26) = *(uint *)((int)this + 0x26) | 0x40000000;
    return;
  }
  *(uint *)((int)this + 0x26) = *(uint *)((int)this + 0x26) & 0xbfffffff;
  return;
}


