
/* ==== FUN_0044f4d0 @ 0044f4d0 ==== 
 * signature: undefined __thiscall FUN_0044f4d0(void * this, char param_1)
 * body: 0044f4d0-0044f4f5
 */

void __thiscall FUN_0044f4d0(void *this,char param_1)

{
  if (param_1 != '\0') {
    *(uint *)((int)this + 0x14a) = *(uint *)((int)this + 0x14a) | 0x8000000;
    return;
  }
  *(uint *)((int)this + 0x14a) = *(uint *)((int)this + 0x14a) & 0xf7ffffff;
  return;
}


