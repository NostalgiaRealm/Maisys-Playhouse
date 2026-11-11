
/* ==== FUN_0044f530 @ 0044f530 ==== 
 * signature: undefined __thiscall FUN_0044f530(void * this, char param_1)
 * body: 0044f530-0044f555
 */

void __thiscall FUN_0044f530(void *this,char param_1)

{
  if (param_1 != '\0') {
    *(uint *)((int)this + 0x14a) = *(uint *)((int)this + 0x14a) | 0x80000000;
    return;
  }
  *(uint *)((int)this + 0x14a) = *(uint *)((int)this + 0x14a) & 0x7fffffff;
  return;
}


