
/* ==== FUN_004342f0 @ 004342f0 ==== 
 * signature: int __cdecl FUN_004342f0(undefined4 param_1, double * param_2, double param_3)
 * body: 004342f0-0043433d
 */

int __cdecl FUN_004342f0(undefined4 param_1,double *param_2,double param_3)

{
  int *piVar1;
  float10 fVar2;
  float10 fVar3;
  
  piVar1 = FUN_0048f9d0();
  *piVar1 = 0;
  fVar2 = ROUND((float10)1.4426950408889634 * (float10)param_3);
  fVar3 = (float10)f2xm1((float10)1.4426950408889634 * (float10)param_3 - fVar2);
  fVar2 = (float10)fscale((float10)1 + fVar3,fVar2);
  *param_2 = (double)fVar2;
  piVar1 = FUN_0048f9d0();
  if (*piVar1 == 0) {
    return 0;
  }
  piVar1 = FUN_0048f9d0();
  return 0x50002 - (uint)(*piVar1 == 0x21);
}


