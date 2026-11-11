
/* ==== FUN_004344f0 @ 004344f0 ==== 
 * signature: int __cdecl FUN_004344f0(undefined4 param_1, double * param_2, double param_3)
 * body: 004344f0-0043452b
 */

int __cdecl FUN_004344f0(undefined4 param_1,double *param_2,double param_3)

{
  int *piVar1;
  
  piVar1 = FUN_0048f9d0();
  *piVar1 = 0;
  *param_2 = ABS(param_3);
  piVar1 = FUN_0048f9d0();
  if (*piVar1 == 0) {
    return 0;
  }
  piVar1 = FUN_0048f9d0();
  return 0x50002 - (uint)(*piVar1 == 0x21);
}


