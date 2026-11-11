
/* ==== FUN_00435900 @ 00435900 ==== 
 * signature: undefined4 __thiscall FUN_00435900(void * this, ushort param_1, int * param_2)
 * body: 00435900-00435940
 */

undefined4 __thiscall FUN_00435900(void *this,ushort param_1,int *param_2)

{
  *param_2 = *(int *)((int)this + (short)(param_1 >> 8 & 0x8f) * 0x124 + 0x13c) +
             (param_1 & 0xff) * 0x80;
  return 0;
}


