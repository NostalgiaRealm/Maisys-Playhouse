
/* ==== FUN_0040cc10 @ 0040cc10 ==== 
 * signature: undefined __thiscall FUN_0040cc10(void * this, char param_1)
 * body: 0040cc10-0040cc2f
 */

void __thiscall FUN_0040cc10(void *this,char param_1)

{
  if (param_1 != '\0') {
    *(uint *)((int)this + 0x26) = *(uint *)((int)this + 0x26) | 0x1000;
    return;
  }
  *(uint *)((int)this + 0x26) = *(uint *)((int)this + 0x26) & 0xffffefff;
  return;
}


