
/* ==== FUN_00434450 @ 00434450 ==== 
 * signature: int __cdecl FUN_00434450(undefined4 param_1, double * param_2, undefined4 param_3, undefined4 param_4)
 * body: 00434450-00434496
 */

int __cdecl FUN_00434450(undefined4 param_1,double *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  double dVar2;
  
  piVar1 = FUN_0048f9d0();
  *piVar1 = 0;
  dVar2 = _ceil((double)CONCAT44(param_4,param_3));
  *param_2 = dVar2;
  piVar1 = FUN_0048f9d0();
  if (*piVar1 == 0) {
    return 0;
  }
  piVar1 = FUN_0048f9d0();
  return 0x50002 - (uint)(*piVar1 == 0x21);
}


