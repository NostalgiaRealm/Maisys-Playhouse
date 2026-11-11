
/* ==== FUN_1102b100 @ 1102b100 ==== 
 * signature: undefined4 __cdecl FUN_1102b100(int param_1)
 * body: 1102b100-1102b12f
 */

undefined4 __cdecl FUN_1102b100(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = &DAT_11036850;
  do {
    if (*piVar2 == param_1) break;
    piVar2 = piVar2 + 2;
    iVar1 = iVar1 + 1;
  } while (piVar2 < &DAT_110368d8);
  if ((&DAT_11036850)[iVar1 * 2] == param_1) {
    return *(undefined4 *)(iVar1 * 8 + 0x11036854);
  }
  return 0;
}


