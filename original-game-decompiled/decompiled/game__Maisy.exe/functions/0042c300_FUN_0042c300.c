
/* ==== FUN_0042c300 @ 0042c300 ==== 
 * signature: undefined __thiscall FUN_0042c300(void * this, char param_1)
 * body: 0042c300-0042c31f
 */

void __thiscall FUN_0042c300(void *this,char param_1)

{
  if (param_1 != '\0') {
    *(uint *)((int)this + 0x26) = *(uint *)((int)this + 0x26) | 0x800;
    return;
  }
  *(uint *)((int)this + 0x26) = *(uint *)((int)this + 0x26) & 0xfffff7ff;
  return;
}


