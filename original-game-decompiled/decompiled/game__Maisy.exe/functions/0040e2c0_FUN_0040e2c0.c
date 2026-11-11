
/* ==== FUN_0040e2c0 @ 0040e2c0 ==== 
 * signature: undefined __thiscall FUN_0040e2c0(void * this, char * param_1, int param_2)
 * body: 0040e2c0-0040e2eb
 */

void __thiscall FUN_0040e2c0(void *this,char *param_1,int param_2)

{
  HMMIO pHVar1;
  int iVar2;
  
  DAT_004d98b0 = DAT_004d98b0 + 1;
  iVar2 = param_2;
  pHVar1 = (HMMIO)FUN_0040dd00(this);
  FUN_00411b50(pHVar1,iVar2,param_1);
  *(int *)((int)this + 0x62) = *(int *)((int)this + 0x62) + param_2;
  return;
}


