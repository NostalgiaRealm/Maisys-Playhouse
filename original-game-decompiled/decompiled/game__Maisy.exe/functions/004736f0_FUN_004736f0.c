
/* ==== FUN_004736f0 @ 004736f0 ==== 
 * signature: undefined __thiscall FUN_004736f0(void * this, short param_1)
 * body: 004736f0-0047374e
 */

void __thiscall FUN_004736f0(void *this,short param_1)

{
  int iVar1;
  
  iVar1 = (int)(short)(*(short *)((int)this + 0xaa) / 2 + 0x32);
  *(short *)((int)this + 0x9e) = (short)(((100 - iVar1) * (int)param_1 * 2) / 100);
  *(short *)((int)this + 0x9c) = (short)((iVar1 * param_1 * 2) / 100);
  *(short *)((int)this + 0xa0) = param_1;
  return;
}


