
/* ==== FUN_00434580 @ 00434580 ==== 
 * signature: int __cdecl FUN_00434580(undefined4 param_1, double * param_2, undefined4 param_3, undefined4 param_4, int * param_5)
 * body: 00434580-004345ca
 */

int __cdecl
FUN_00434580(undefined4 param_1,double *param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  int *piVar1;
  double dVar2;
  
  piVar1 = FUN_0048f9d0();
  *piVar1 = 0;
  dVar2 = _frexp((double)CONCAT44(param_4,param_3),param_5);
  *param_2 = dVar2;
  piVar1 = FUN_0048f9d0();
  if (*piVar1 == 0) {
    return 0;
  }
  piVar1 = FUN_0048f9d0();
  return 0x50002 - (uint)(*piVar1 == 0x21);
}


