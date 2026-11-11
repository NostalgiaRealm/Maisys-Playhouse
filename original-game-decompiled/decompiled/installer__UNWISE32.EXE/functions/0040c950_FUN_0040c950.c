
/* ==== FUN_0040c950 @ 0040c950 ==== 
 * signature: int * __cdecl FUN_0040c950(int param_1)
 * body: 0040c950-0040c994
 */

int * __cdecl FUN_0040c950(int param_1)

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


