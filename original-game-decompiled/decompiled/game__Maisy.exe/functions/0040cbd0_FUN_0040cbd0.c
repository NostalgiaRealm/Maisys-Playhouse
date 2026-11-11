
/* ==== FUN_0040cbd0 @ 0040cbd0 ==== 
 * signature: undefined __thiscall FUN_0040cbd0(void * this, char param_1)
 * body: 0040cbd0-0040cbef
 */

void __thiscall FUN_0040cbd0(void *this,char param_1)

{
  if (param_1 != '\0') {
    *(uint *)((int)this + 0x26) = *(uint *)((int)this + 0x26) | 0x10000000;
    return;
  }
  *(uint *)((int)this + 0x26) = *(uint *)((int)this + 0x26) & 0xefffffff;
  return;
}


