
/* ==== FUN_0044f5c0 @ 0044f5c0 ==== 
 * signature: undefined __thiscall FUN_0044f5c0(void * this, char param_1)
 * body: 0044f5c0-0044f5e5
 */

void __thiscall FUN_0044f5c0(void *this,char param_1)

{
  if (param_1 != '\0') {
    *(uint *)((int)this + 0x14a) = *(uint *)((int)this + 0x14a) | 0x2000000;
    return;
  }
  *(uint *)((int)this + 0x14a) = *(uint *)((int)this + 0x14a) & 0xfdffffff;
  return;
}


