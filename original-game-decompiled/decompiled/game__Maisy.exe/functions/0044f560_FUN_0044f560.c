
/* ==== FUN_0044f560 @ 0044f560 ==== 
 * signature: undefined __thiscall FUN_0044f560(void * this, char param_1)
 * body: 0044f560-0044f585
 */

void __thiscall FUN_0044f560(void *this,char param_1)

{
  if (param_1 != '\0') {
    *(uint *)((int)this + 0x14a) = *(uint *)((int)this + 0x14a) | 0x40000000;
    return;
  }
  *(uint *)((int)this + 0x14a) = *(uint *)((int)this + 0x14a) & 0xbfffffff;
  return;
}


