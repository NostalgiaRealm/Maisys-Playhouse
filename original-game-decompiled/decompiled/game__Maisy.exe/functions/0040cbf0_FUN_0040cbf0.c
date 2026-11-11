
/* ==== FUN_0040cbf0 @ 0040cbf0 ==== 
 * signature: undefined __thiscall FUN_0040cbf0(void * this, char param_1)
 * body: 0040cbf0-0040cc0f
 */

void __thiscall FUN_0040cbf0(void *this,char param_1)

{
  if (param_1 != '\0') {
    *(uint *)((int)this + 0x26) = *(uint *)((int)this + 0x26) | 0x200000;
    return;
  }
  *(uint *)((int)this + 0x26) = *(uint *)((int)this + 0x26) & 0xffdfffff;
  return;
}


