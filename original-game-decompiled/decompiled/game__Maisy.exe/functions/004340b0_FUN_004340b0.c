
/* ==== FUN_004340b0 @ 004340b0 ==== 
 * signature: int __cdecl FUN_004340b0(undefined4 param_1, double * param_2, double param_3)
 * body: 004340b0-004340eb
 */

int __cdecl FUN_004340b0(undefined4 param_1,double *param_2,double param_3)

{
  int *piVar1;
  float10 fVar2;
  
  piVar1 = FUN_0048f9d0();
  *piVar1 = 0;
  fVar2 = (float10)fcos((float10)param_3);
  *param_2 = (double)fVar2;
  piVar1 = FUN_0048f9d0();
  if (*piVar1 == 0) {
    return 0;
  }
  piVar1 = FUN_0048f9d0();
  return 0x50002 - (uint)(*piVar1 == 0x21);
}


