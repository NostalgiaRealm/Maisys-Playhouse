
/* ==== FUN_0040d850 @ 0040d850 ==== 
 * signature: undefined __thiscall FUN_0040d850(void * this, char param_1, char param_2)
 * body: 0040d850-0040d888
 */

void __thiscall FUN_0040d850(void *this,char param_1,char param_2)

{
  if (param_2 != '\0') {
    *(uint *)((int)this + 0x3e) = *(uint *)((int)this + 0x3e) | 1 << (0x1fU - param_1 & 0x1f);
    return;
  }
  *(uint *)((int)this + 0x3e) = *(uint *)((int)this + 0x3e) & ~(1 << (0x1fU - param_1 & 0x1f));
  return;
}


