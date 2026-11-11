
/* ==== FUN_0040cc70 @ 0040cc70 ==== 
 * signature: undefined __thiscall FUN_0040cc70(void * this, char param_1)
 * body: 0040cc70-0040cc8f
 */

void __thiscall FUN_0040cc70(void *this,char param_1)

{
  if (param_1 != '\0') {
    *(uint *)((int)this + 0x26) = *(uint *)((int)this + 0x26) | 0x4000000;
    return;
  }
  *(uint *)((int)this + 0x26) = *(uint *)((int)this + 0x26) & 0xfbffffff;
  return;
}


