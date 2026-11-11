
/* ==== FUN_00481c80 @ 00481c80 ==== 
 * signature: undefined4 __thiscall FUN_00481c80(void * this, char * param_1, int param_2)
 * body: 00481c80-00481ca7
 */

undefined4 __thiscall FUN_00481c80(void *this,char *param_1,int param_2)

{
  HMMIO pHVar1;
  
  DAT_004d98b0 = DAT_004d98b0 + 1;
  pHVar1 = (HMMIO)(**(code **)(*(int *)this + 0xe8))();
  FUN_00411b50(pHVar1,param_2,param_1);
  return 0;
}


