
/* ==== FUN_00434410 @ 00434410 ==== 
 * signature: int __cdecl FUN_00434410(undefined4 param_1, double * param_2, double param_3)
 * body: 00434410-0043444b
 */

int __cdecl FUN_00434410(undefined4 param_1,double *param_2,double param_3)

{
  int *piVar1;
  
  piVar1 = FUN_0048f9d0();
  *piVar1 = 0;
  *param_2 = SQRT(param_3);
  piVar1 = FUN_0048f9d0();
  if (*piVar1 == 0) {
    return 0;
  }
  piVar1 = FUN_0048f9d0();
  return 0x50002 - (uint)(*piVar1 == 0x21);
}


