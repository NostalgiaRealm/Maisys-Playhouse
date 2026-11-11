
/* ==== FUN_004341f0 @ 004341f0 ==== 
 * signature: int __cdecl FUN_004341f0(undefined4 param_1, double * param_2, double param_3, double param_4)
 * body: 004341f0-0043422e
 */

int __cdecl FUN_004341f0(undefined4 param_1,double *param_2,double param_3,double param_4)

{
  int *piVar1;
  float10 fVar2;
  
  piVar1 = FUN_0048f9d0();
  *piVar1 = 0;
  fVar2 = (float10)fpatan((float10)param_3,(float10)param_4);
  *param_2 = (double)fVar2;
  piVar1 = FUN_0048f9d0();
  if (*piVar1 == 0) {
    return 0;
  }
  piVar1 = FUN_0048f9d0();
  return 0x50002 - (uint)(*piVar1 == 0x21);
}


