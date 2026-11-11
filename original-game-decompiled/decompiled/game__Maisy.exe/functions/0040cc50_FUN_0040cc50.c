
/* ==== FUN_0040cc50 @ 0040cc50 ==== 
 * signature: undefined __thiscall FUN_0040cc50(void * this, char param_1)
 * body: 0040cc50-0040cc6f
 */

void __thiscall FUN_0040cc50(void *this,char param_1)

{
  if (param_1 != '\0') {
    *(uint *)((int)this + 0x26) = *(uint *)((int)this + 0x26) | 0x20000000;
    return;
  }
  *(uint *)((int)this + 0x26) = *(uint *)((int)this + 0x26) & 0xdfffffff;
  return;
}


