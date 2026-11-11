
/* ==== FUN_00434380 @ 00434380 ==== 
 * signature: int __cdecl FUN_00434380(undefined4 param_1, double * param_2, double param_3)
 * body: 00434380-004343bd
 */

int __cdecl FUN_00434380(undefined4 param_1,double *param_2,double param_3)

{
  float10 fVar1;
  int *piVar2;
  
  piVar2 = FUN_0048f9d0();
  fVar1 = (float10)log2((float10)param_3);
  *piVar2 = 0;
  *param_2 = (double)((float10)0.3010299956639812 * fVar1);
  piVar2 = FUN_0048f9d0();
  if (*piVar2 == 0) {
    return 0;
  }
  piVar2 = FUN_0048f9d0();
  return 0x50002 - (uint)(*piVar2 == 0x21);
}


