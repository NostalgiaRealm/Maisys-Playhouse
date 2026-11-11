
/* ==== FUN_0040e1e0 @ 0040e1e0 ==== 
 * signature: int __thiscall FUN_0040e1e0(void * this, HPSTR param_1, int param_2)
 * body: 0040e1e0-0040e2bf
 */

int __thiscall FUN_0040e1e0(void *this,HPSTR param_1,int param_2)

{
  HMMIO pHVar1;
  HPSTR pcVar2;
  int iVar3;
  int iVar4;
  int local_10;
  int local_c;
  void *local_8;
  
  iVar3 = 0;
  pcVar2 = param_1;
  local_8 = this;
  if (-1 < param_2 - DAT_004d98a4) {
    do {
      iVar4 = DAT_004d98a4;
      DAT_004d98ac = DAT_004d98ac + 1;
      FUN_0040e110(local_8,&local_c);
      FUN_00443760();
      FUN_0040e110(local_8,&local_10);
      if (local_10 != local_c) {
        FUN_0040e0e0(local_8,local_c);
      }
      iVar3 = iVar3 + iVar4;
      param_1 = pcVar2 + iVar4;
      pHVar1 = (HMMIO)FUN_0040dd00(local_8);
      FUN_00411b20(pHVar1,iVar4,pcVar2);
      pcVar2 = param_1;
    } while (iVar3 <= param_2 - DAT_004d98a4);
  }
  if (iVar3 < param_2) {
    iVar4 = param_2 - iVar3;
    DAT_004d98ac = DAT_004d98ac + 1;
    FUN_0040e110(local_8,&local_c);
    FUN_00443760();
    FUN_0040e110(local_8,&local_10);
    if (local_10 != local_c) {
      FUN_0040e0e0(local_8,local_c);
    }
    iVar3 = iVar3 + iVar4;
    pHVar1 = (HMMIO)FUN_0040dd00(local_8);
    FUN_00411b20(pHVar1,iVar4,param_1);
  }
  return iVar3;
}


