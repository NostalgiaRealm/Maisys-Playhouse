
/* ==== FUN_0040e0e0 @ 0040e0e0 ==== 
 * signature: undefined __thiscall FUN_0040e0e0(void * this, LONG param_1)
 * body: 0040e0e0-0040e109
 */

void __thiscall FUN_0040e0e0(void *this,LONG param_1)

{
  HMMIO pHVar1;
  LONG LVar2;
  char cVar3;
  
  DAT_004d98b4 = DAT_004d98b4 + 1;
  cVar3 = '\x01';
  LVar2 = param_1;
  pHVar1 = (HMMIO)FUN_0040dd00(this);
  FUN_00411a90(pHVar1,LVar2,cVar3);
  *(LONG *)((int)this + 0x62) = param_1;
  return;
}


