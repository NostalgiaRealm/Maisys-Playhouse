
/* ==== FUN_0040b5a0 @ 0040b5a0 ==== 
 * signature: undefined __cdecl FUN_0040b5a0(UINT param_1, int param_2, int param_3)
 * body: 0040b5a0-0040b643
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0040b5a0(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  undefined4 *puVar2;
  UINT uExitCode;
  
  if (DAT_004134ac == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  _DAT_004134a8 = 1;
  DAT_004134a4 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_00413e08 != (undefined4 *)0x0) &&
       (puVar2 = (undefined4 *)(DAT_00413e04 + -4), puVar1 = DAT_00413e08, DAT_00413e08 <= puVar2))
    {
      do {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          puVar1 = DAT_00413e08;
        }
        puVar2 = puVar2 + -1;
      } while (puVar1 <= puVar2);
    }
    FUN_0040b650((undefined4 *)&DAT_00410010,(undefined4 *)&DAT_00410014);
  }
  FUN_0040b650((undefined4 *)&DAT_00410018,(undefined4 *)&DAT_0041001c);
  if (param_3 == 0) {
    DAT_004134ac = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  return;
}


