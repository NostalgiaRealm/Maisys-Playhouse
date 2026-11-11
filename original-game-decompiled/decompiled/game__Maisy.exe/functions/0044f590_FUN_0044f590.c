
/* ==== FUN_0044f590 @ 0044f590 ==== 
 * signature: undefined __thiscall FUN_0044f590(void * this, char param_1)
 * body: 0044f590-0044f5b5
 */

void __thiscall FUN_0044f590(void *this,char param_1)

{
  if (param_1 != '\0') {
    *(uint *)((int)this + 0x14a) = *(uint *)((int)this + 0x14a) | 0x4000000;
    return;
  }
  *(uint *)((int)this + 0x14a) = *(uint *)((int)this + 0x14a) & 0xfbffffff;
  return;
}


