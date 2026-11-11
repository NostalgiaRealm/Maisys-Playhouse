
/* ==== FUN_0044f4a0 @ 0044f4a0 ==== 
 * signature: undefined __thiscall FUN_0044f4a0(void * this, char param_1)
 * body: 0044f4a0-0044f4c5
 */

void __thiscall FUN_0044f4a0(void *this,char param_1)

{
  if (param_1 != '\0') {
    *(uint *)((int)this + 0x14a) = *(uint *)((int)this + 0x14a) | 0x20000000;
    return;
  }
  *(uint *)((int)this + 0x14a) = *(uint *)((int)this + 0x14a) & 0xdfffffff;
  return;
}


