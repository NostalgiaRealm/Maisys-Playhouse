
/* ==== FUN_1000a690 @ 1000a690 ==== 
 * signature: undefined __cdecl FUN_1000a690(UINT param_1, int param_2, int param_3)
 * body: 1000a690-1000a73d
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 1000a73e-1000a741
 */

void __cdecl FUN_1000a690(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  undefined4 *puVar2;
  UINT uExitCode;
  
  FUN_1000a750();
  if (DAT_10017010 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_1001700c = 1;
  DAT_10017008 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_10018508 != (undefined4 *)0x0) &&
       (puVar2 = (undefined4 *)(DAT_10018504 + -4), puVar1 = DAT_10018508, DAT_10018508 <= puVar2))
    {
      do {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          puVar1 = DAT_10018508;
        }
        puVar2 = puVar2 + -1;
      } while (puVar1 <= puVar2);
    }
    FUN_1000a770((undefined4 *)&DAT_10013014,(undefined4 *)&DAT_1001301c);
  }
  FUN_1000a770((undefined4 *)&DAT_10013020,(undefined4 *)&DAT_10013024);
  if (param_3 != 0) {
    FUN_1000a760();
    return;
  }
  DAT_10017010 = 1;
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}


