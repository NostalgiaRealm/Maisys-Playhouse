
/* ==== FUN_00481af0 @ 00481af0 ==== 
 * signature: undefined4 __thiscall FUN_00481af0(void * this, int param_1)
 * body: 00481af0-00481b1b
 */

undefined4 __thiscall FUN_00481af0(void *this,int param_1)

{
  HMMIO pHVar1;
  int iVar2;
  char cVar3;
  
  cVar3 = '\0';
  iVar2 = param_1;
  pHVar1 = (HMMIO)(**(code **)(*(int *)this + 0xe8))();
  FUN_00411a90(pHVar1,iVar2,cVar3);
  *(int *)((int)this + 0x142) = *(int *)((int)this + 0x142) + param_1;
  return 0;
}


