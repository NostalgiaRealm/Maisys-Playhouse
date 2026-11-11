
/* ==== FUN_00473550 @ 00473550 ==== 
 * signature: undefined __thiscall FUN_00473550(void * this, char param_1)
 * body: 00473550-00473575
 */

void __thiscall FUN_00473550(void *this,char param_1)

{
  if (param_1 != '\0') {
    *(uint *)((int)this + 0xa2) = *(uint *)((int)this + 0xa2) | 0x80000000;
    return;
  }
  *(uint *)((int)this + 0xa2) = *(uint *)((int)this + 0xa2) & 0x7fffffff;
  return;
}


