
/* ==== FUN_00411960 @ 00411960 ==== 
 * signature: undefined4 __thiscall FUN_00411960(void * this, int param_1, int param_2)
 * body: 00411960-0041198f
 */

undefined4 __thiscall FUN_00411960(void *this,int param_1,int param_2)

{
  if ((0 < param_1) && (param_2 != 0)) {
    param_1 = FUN_004119c0(this,param_1,param_2);
    if ((*(int *)param_1 != 0) || (*(int *)(param_1 + 4) != 0)) {
      return CONCAT31((int3)((uint)param_1 >> 8),1);
    }
  }
  return param_1 & 0xffffff00;
}


