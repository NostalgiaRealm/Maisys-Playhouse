
/* ==== FUN_00427bf0 @ 00427bf0 ==== 
 * signature: undefined __thiscall FUN_00427bf0(void * this, int * param_1, short * param_2, short * param_3)
 * body: 00427bf0-00427cb8
 */

void __thiscall FUN_00427bf0(void *this,int *param_1,short *param_2,short *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  SIZE_T SVar2;
  
  bVar1 = FUN_00437430(param_1,(int *)s_bytesloaded_004da31c);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    bVar1 = FUN_00437430(param_1,(int *)s_loadedbytes_004da004);
    if (CONCAT31(extraout_var_00,bVar1) == 0) {
      bVar1 = FUN_00437430(param_1,(int *)s_inmemory_004da02c);
      if (CONCAT31(extraout_var_01,bVar1) != 0) {
        FUN_00454c50(param_3,1 - (*(int *)((int)this + 0xb8) == 0));
        return;
      }
      bVar1 = FUN_00437430(param_1,(int *)s_preloaded_004d9c04);
      if (CONCAT31(extraout_var_02,bVar1) != 0) {
        FUN_00454c50(param_3,*(byte *)((int)this + 0xf9));
        return;
      }
      FUN_0040d210(this,param_1,param_2,param_3);
      return;
    }
  }
  SVar2 = 0;
  if (*(HGLOBAL *)((int)this + 0xb8) != (HGLOBAL)0x0) {
    SVar2 = GlobalSize(*(HGLOBAL *)((int)this + 0xb8));
  }
  FUN_00454d00(param_3,SVar2);
  return;
}


