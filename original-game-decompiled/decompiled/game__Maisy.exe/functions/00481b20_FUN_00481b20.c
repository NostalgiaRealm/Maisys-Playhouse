
/* ==== FUN_00481b20 @ 00481b20 ==== 
 * signature: undefined4 __thiscall FUN_00481b20(void * this, int * param_1)
 * body: 00481b20-00481b3e
 */

undefined4 __thiscall FUN_00481b20(void *this,int *param_1)

{
  HMMIO pHVar1;
  
  pHVar1 = (HMMIO)(**(code **)(*(int *)this + 0xe8))();
  FUN_00411ae0(pHVar1,param_1);
  return 0;
}


