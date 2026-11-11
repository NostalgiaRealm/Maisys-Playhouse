
/* ==== FUN_00486d80 @ 00486d80 ==== 
 * signature: undefined __thiscall FUN_00486d80(void * this, char * param_1, int param_2)
 * body: 00486d80-00486dac
 */

void __thiscall FUN_00486d80(void *this,char *param_1,int param_2)

{
  HMMIO pHVar1;
  int iVar2;
  
  iVar2 = param_2;
  pHVar1 = (HMMIO)(**(code **)(*(int *)this + 0xe8))();
  FUN_00411b50(pHVar1,iVar2,param_1);
  *(int *)((int)this + 0x142) = *(int *)((int)this + 0x142) + param_2;
  return;
}


