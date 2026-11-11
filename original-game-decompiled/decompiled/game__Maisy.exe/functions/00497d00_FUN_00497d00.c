
/* ==== FUN_00497d00 @ 00497d00 ==== 
 * signature: undefined4 __cdecl FUN_00497d00(int param_1)
 * body: 00497d00-00497d24
 */

undefined4 __cdecl FUN_00497d00(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_004debc0;
  do {
    if (*piVar1 == param_1) {
      return *(undefined4 *)(iVar2 * 8 + 0x4debc4);
    }
    piVar1 = piVar1 + 2;
    iVar2 = iVar2 + 1;
  } while (piVar1 < &DAT_004dec98);
  return 0;
}


