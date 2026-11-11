
/* ==== FUN_00426900 @ 00426900 ==== 
 * signature: undefined2 __cdecl FUN_00426900(int param_1)
 * body: 00426900-00426930
 */

undefined2 __cdecl FUN_00426900(int param_1)

{
  char *pcVar1;
  
  *(undefined1 *)(param_1 + 10) = 0;
  pcVar1 = *(char **)(param_1 + 6);
  if (pcVar1 != (char *)0x0) {
    FUN_00428d60(pcVar1);
    FUN_004a602d(pcVar1);
    *(undefined4 *)(param_1 + 6) = 0;
  }
  return 0;
}


