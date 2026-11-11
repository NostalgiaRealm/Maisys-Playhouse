
/* ==== FUN_00434130 @ 00434130 ==== 
 * signature: int __cdecl FUN_00434130(undefined4 param_1, double * param_2)
 * body: 00434130-0043416e
 */

int __cdecl FUN_00434130(undefined4 param_1,double *param_2)

{
  int *piVar1;
  undefined4 extraout_ECX;
  float10 fVar2;
  
  piVar1 = FUN_0048f9d0();
  *piVar1 = 0;
  fVar2 = (float10)FUN_0048fa12(extraout_ECX);
  *param_2 = (double)fVar2;
  piVar1 = FUN_0048f9d0();
  if (*piVar1 == 0) {
    return 0;
  }
  piVar1 = FUN_0048f9d0();
  return 0x50002 - (uint)(*piVar1 == 0x21);
}


