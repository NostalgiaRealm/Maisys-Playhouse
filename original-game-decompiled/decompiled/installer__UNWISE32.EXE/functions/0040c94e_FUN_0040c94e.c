
/* ==== FUN_0040c94e @ 0040c94e ==== 
 * signature: undefined FUN_0040c94e(void)
 * body: 0040c94e-0040c94f
 */

int * FUN_0040c94e(int param_1)

{
  int *piVar1;
  
  piVar1 = &DAT_004131f8;
  if (DAT_004131f8 != param_1) {
    do {
      piVar1 = piVar1 + 3;
      if (&DAT_004131f8 + DAT_00413278 * 3 <= piVar1) break;
    } while (*piVar1 != param_1);
  }
  if ((&DAT_004131f8 + DAT_00413278 * 3 <= piVar1) || (*piVar1 != param_1)) {
    piVar1 = (int *)0x0;
  }
  return piVar1;
}


