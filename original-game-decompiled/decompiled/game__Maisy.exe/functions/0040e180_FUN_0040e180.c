
/* ==== FUN_0040e180 @ 0040e180 ==== 
 * signature: int __thiscall FUN_0040e180(void * this, HPSTR param_1, int param_2)
 * body: 0040e180-0040e1d2
 */

int __thiscall FUN_0040e180(void *this,HPSTR param_1,int param_2)

{
  HMMIO pHVar1;
  int iVar2;
  
  DAT_004d98a8 = DAT_004d98a8 + 1;
  if ((DAT_004d98a4 < param_2) && (DAT_004d98a0 != '\0')) {
    FUN_0040e1e0(this,param_1,param_2);
    return param_2;
  }
  iVar2 = param_2;
  pHVar1 = (HMMIO)FUN_0040dd00(this);
  FUN_00411b20(pHVar1,iVar2,param_1);
  *(int *)((int)this + 0x62) = *(int *)((int)this + 0x62) + param_2;
  return param_2;
}


