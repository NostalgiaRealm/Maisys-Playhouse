
/* ==== FUN_0040ccd0 @ 0040ccd0 ==== 
 * signature: undefined __thiscall FUN_0040ccd0(void * this, char param_1)
 * body: 0040ccd0-0040ccef
 */

void __thiscall FUN_0040ccd0(void *this,char param_1)

{
  if (param_1 != '\0') {
    *(uint *)((int)this + 0x26) = *(uint *)((int)this + 0x26) | 0x800000;
    return;
  }
  *(uint *)((int)this + 0x26) = *(uint *)((int)this + 0x26) & 0xff7fffff;
  return;
}


