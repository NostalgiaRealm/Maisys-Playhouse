
/* ==== FUN_1202b2e0 @ 1202b2e0 ==== 
 * signature: undefined4 __cdecl FUN_1202b2e0(int param_1)
 * body: 1202b2e0-1202b30f
 */

undefined4 __cdecl FUN_1202b2e0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = &DAT_12038128;
  do {
    if (*piVar2 == param_1) break;
    piVar2 = piVar2 + 2;
    iVar1 = iVar1 + 1;
  } while (piVar2 < &DAT_120381b0);
  if ((&DAT_12038128)[iVar1 * 2] == param_1) {
    return *(undefined4 *)(iVar1 * 8 + 0x1203812c);
  }
  return 0;
}


