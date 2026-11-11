
/* ==== FUN_12003960 @ 12003960 ==== 
 * signature: undefined __thiscall FUN_12003960(void * this, byte param_1)
 * body: 12003960-12003981
 */

void __thiscall FUN_12003960(void *this,byte param_1)

{
  if (100 < param_1) {
    param_1 = 100;
  }
  *(char *)((int)this + 0x6c) = (char)(((uint)param_1 << 7) / 100);
  return;
}


