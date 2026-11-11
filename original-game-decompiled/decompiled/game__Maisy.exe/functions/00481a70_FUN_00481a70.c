
/* ==== FUN_00481a70 @ 00481a70 ==== 
 * signature: undefined4 __thiscall FUN_00481a70(void * this, HPSTR param_1, int param_2)
 * body: 00481a70-00481aa3
 */

undefined4 __thiscall FUN_00481a70(void *this,HPSTR param_1,int param_2)

{
  HMMIO pHVar1;
  int iVar2;
  
  DAT_004d98a8 = DAT_004d98a8 + 1;
  iVar2 = param_2;
  pHVar1 = (HMMIO)(**(code **)(*(int *)this + 0xe8))();
  FUN_00411b20(pHVar1,iVar2,param_1);
  *(int *)((int)this + 0x142) = *(int *)((int)this + 0x142) + param_2;
  return 0;
}


