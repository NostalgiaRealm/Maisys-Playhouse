
/* ==== FUN_1401bea0 @ 1401bea0 ==== 
 * signature: undefined4 __cdecl FUN_1401bea0(int param_1)
 * body: 1401bea0-1401becf
 */

undefined4 __cdecl FUN_1401bea0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = &DAT_14027570;
  do {
    if (*piVar2 == param_1) break;
    piVar2 = piVar2 + 2;
    iVar1 = iVar1 + 1;
  } while (piVar2 < &DAT_140275f8);
  if ((&DAT_14027570)[iVar1 * 2] == param_1) {
    return *(undefined4 *)(iVar1 * 8 + 0x14027574);
  }
  return 0;
}


