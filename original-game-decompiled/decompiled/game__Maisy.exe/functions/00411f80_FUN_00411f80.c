
/* ==== FUN_00411f80 @ 00411f80 ==== 
 * signature: undefined __cdecl FUN_00411f80(HGLOBAL param_1, uint param_2, uint * param_3, uint * param_4, SIZE_T param_5)
 * body: 00411f80-00412007
 */

void __cdecl FUN_00411f80(HGLOBAL param_1,uint param_2,uint *param_3,uint *param_4,SIZE_T param_5)

{
  SIZE_T SVar1;
  uint uVar2;
  
  SVar1 = param_5;
  if ((int)param_5 < 0) {
    SVar1 = GlobalSize(param_1);
  }
  if (param_2 < 2) {
    *param_3 = 0;
  }
  else {
    uVar2 = FUN_00411ed0(param_1,param_2 - 1,0,param_5);
    if ((int)uVar2 < 0) {
      *param_3 = SVar1;
    }
    else {
      *param_3 = uVar2 + 1;
    }
  }
  uVar2 = *param_3;
  if (SVar1 <= uVar2) {
    *param_4 = uVar2;
    return;
  }
  uVar2 = FUN_00411ed0(param_1,1,uVar2,param_5);
  if ((int)uVar2 < 0) {
    *param_4 = SVar1;
    return;
  }
  *param_4 = uVar2 + 1;
  return;
}


