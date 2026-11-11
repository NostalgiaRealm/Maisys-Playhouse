
/* ==== FUN_0044f500 @ 0044f500 ==== 
 * signature: undefined __thiscall FUN_0044f500(void * this, char param_1)
 * body: 0044f500-0044f525
 */

void __thiscall FUN_0044f500(void *this,char param_1)

{
  if (param_1 != '\0') {
    *(uint *)((int)this + 0x14a) = *(uint *)((int)this + 0x14a) | 0x10000000;
    return;
  }
  *(uint *)((int)this + 0x14a) = *(uint *)((int)this + 0x14a) & 0xefffffff;
  return;
}


