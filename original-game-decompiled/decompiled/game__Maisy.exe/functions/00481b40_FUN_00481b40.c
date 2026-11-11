
/* ==== FUN_00481b40 @ 00481b40 ==== 
 * signature: undefined4 __thiscall FUN_00481b40(void * this, LONG param_1)
 * body: 00481b40-00481b71
 */

undefined4 __thiscall FUN_00481b40(void *this,LONG param_1)

{
  HMMIO pHVar1;
  LONG LVar2;
  char cVar3;
  
  DAT_004d98b4 = DAT_004d98b4 + 1;
  cVar3 = '\x01';
  LVar2 = param_1;
  pHVar1 = (HMMIO)(**(code **)(*(int *)this + 0xe8))();
  FUN_00411a90(pHVar1,LVar2,cVar3);
  *(LONG *)((int)this + 0x142) = param_1;
  return 0;
}


