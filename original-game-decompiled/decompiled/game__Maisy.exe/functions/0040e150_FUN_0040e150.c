
/* ==== FUN_0040e150 @ 0040e150 ==== 
 * signature: undefined __thiscall FUN_0040e150(void * this, int param_1)
 * body: 0040e150-0040e173
 */

void __thiscall FUN_0040e150(void *this,int param_1)

{
  HMMIO pHVar1;
  int iVar2;
  char cVar3;
  
  cVar3 = '\0';
  iVar2 = param_1;
  pHVar1 = (HMMIO)FUN_0040dd00(this);
  FUN_00411a90(pHVar1,iVar2,cVar3);
  *(int *)((int)this + 0x62) = *(int *)((int)this + 0x62) + param_1;
  return;
}


