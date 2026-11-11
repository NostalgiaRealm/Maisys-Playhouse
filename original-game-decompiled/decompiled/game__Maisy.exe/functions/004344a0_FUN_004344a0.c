
/* ==== FUN_004344a0 @ 004344a0 ==== 
 * signature: int __cdecl FUN_004344a0(undefined4 param_1, double * param_2, undefined4 param_3, undefined4 param_4)
 * body: 004344a0-004344e6
 */

int __cdecl FUN_004344a0(undefined4 param_1,double *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  double dVar2;
  
  piVar1 = FUN_0048f9d0();
  *piVar1 = 0;
  dVar2 = _floor((double)CONCAT44(param_4,param_3));
  *param_2 = dVar2;
  piVar1 = FUN_0048f9d0();
  if (*piVar1 == 0) {
    return 0;
  }
  piVar1 = FUN_0048f9d0();
  return 0x50002 - (uint)(*piVar1 == 0x21);
}


