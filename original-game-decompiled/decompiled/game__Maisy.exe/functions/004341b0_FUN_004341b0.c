
/* ==== FUN_004341b0 @ 004341b0 ==== 
 * signature: int __cdecl FUN_004341b0(undefined4 param_1, double * param_2, double param_3)
 * body: 004341b0-004341ed
 */

int __cdecl FUN_004341b0(undefined4 param_1,double *param_2,double param_3)

{
  int *piVar1;
  float10 fVar2;
  
  piVar1 = FUN_0048f9d0();
  *piVar1 = 0;
  fVar2 = (float10)fpatan((float10)param_3,(float10)1);
  *param_2 = (double)fVar2;
  piVar1 = FUN_0048f9d0();
  if (*piVar1 == 0) {
    return 0;
  }
  piVar1 = FUN_0048f9d0();
  return 0x50002 - (uint)(*piVar1 == 0x21);
}


