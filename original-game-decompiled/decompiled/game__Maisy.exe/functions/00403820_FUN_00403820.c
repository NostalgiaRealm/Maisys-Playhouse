
/* ==== FUN_00403820 @ 00403820 ==== 
 * signature: undefined __thiscall FUN_00403820(void * this, short * param_1)
 * body: 00403820-0040384d
 */

void __thiscall FUN_00403820(void *this,short *param_1)

{
  *param_1 = *(short *)((int)this + 0xbc) - *(short *)((int)this + 0xb8);
  param_1[1] = *(short *)((int)this + 0xbe) - *(short *)((int)this + 0xba);
  return;
}


