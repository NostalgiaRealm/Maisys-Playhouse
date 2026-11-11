
/* ==== FUN_0049bb90 @ 0049bb90 ==== 
 * signature: undefined4 __cdecl FUN_0049bb90(int param_1)
 * body: 0049bb90-0049bbbf
 */

undefined4 __cdecl FUN_0049bb90(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = &DAT_004deff8;
  do {
    if (*piVar2 == param_1) break;
    piVar2 = piVar2 + 2;
    iVar1 = iVar1 + 1;
  } while (piVar2 < &DAT_004df080);
  if ((&DAT_004deff8)[iVar1 * 2] == param_1) {
    return *(undefined4 *)(iVar1 * 8 + 0x4deffc);
  }
  return 0;
}


