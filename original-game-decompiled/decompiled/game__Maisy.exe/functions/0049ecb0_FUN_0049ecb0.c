
/* ==== FUN_0049ecb0 @ 0049ecb0 ==== 
 * signature: undefined4 __stdcall FUN_0049ecb0(undefined4 param_1, undefined4 param_2)
 * body: 0049ecb0-0049ecb0
 */

undefined4 FUN_0049ecb0(int param_1,uint param_2)

{
  double dVar1;
  uint uVar2;
  float10 fVar3;
  
  uVar2 = FUN_00498590(param_1,param_2);
  if ((uVar2 & 0x90) != 0) {
    return 0;
  }
  fVar3 = __frnd((double)CONCAT44(param_2,param_1));
  if (fVar3 == (float10)(double)CONCAT44(param_2,param_1)) {
    dVar1 = (double)CONCAT44(param_2,param_1) * 0.5;
    fVar3 = __frnd(dVar1);
    if (fVar3 == (float10)dVar1) {
      return 2;
    }
    return 1;
  }
  return 0;
}


