
/* ==== FUN_0040ccf0 @ 0040ccf0 ==== 
 * signature: undefined __thiscall FUN_0040ccf0(void * this, char param_1)
 * body: 0040ccf0-0040cd0f
 */

void __thiscall FUN_0040ccf0(void *this,char param_1)

{
  if (param_1 != '\0') {
    *(uint *)((int)this + 0x26) = *(uint *)((int)this + 0x26) | 0x8000000;
    return;
  }
  *(uint *)((int)this + 0x26) = *(uint *)((int)this + 0x26) & 0xf7ffffff;
  return;
}


