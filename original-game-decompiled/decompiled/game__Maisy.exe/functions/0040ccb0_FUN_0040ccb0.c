
/* ==== FUN_0040ccb0 @ 0040ccb0 ==== 
 * signature: undefined __thiscall FUN_0040ccb0(void * this, char param_1)
 * body: 0040ccb0-0040cccf
 */

void __thiscall FUN_0040ccb0(void *this,char param_1)

{
  if (param_1 != '\0') {
    *(uint *)((int)this + 0x26) = *(uint *)((int)this + 0x26) | 0x1000000;
    return;
  }
  *(uint *)((int)this + 0x26) = *(uint *)((int)this + 0x26) & 0xfeffffff;
  return;
}


