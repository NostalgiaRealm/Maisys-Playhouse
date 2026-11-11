
/* ==== FUN_1202a2e0 @ 1202a2e0 ==== 
 * signature: undefined __cdecl FUN_1202a2e0(UINT param_1, int param_2, int param_3)
 * body: 1202a2e0-1202a38c
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 1202a38d-1202a390
 */

void __cdecl FUN_1202a2e0(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_1202a3a0();
  if (DAT_12037ed4 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_12037ed0 = 1;
  DAT_12037ecc = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_1203abfc != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_1203abf8 + -4), DAT_1203abfc <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_1203abfc <= puVar1);
    }
    __initterm((undefined4 *)&DAT_1203701c,(undefined4 *)&DAT_12037024);
  }
  __initterm((undefined4 *)&DAT_12037028,(undefined4 *)&DAT_1203702c);
  if (param_3 != 0) {
    FUN_1202a3b0();
    return;
  }
  DAT_12037ed4 = 1;
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}


