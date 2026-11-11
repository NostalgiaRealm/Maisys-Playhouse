
/* ==== FUN_1102a120 @ 1102a120 ==== 
 * signature: undefined __cdecl FUN_1102a120(UINT param_1, int param_2, int param_3)
 * body: 1102a120-1102a1cc
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 1102a1cd-1102a1d0
 */

void __cdecl FUN_1102a120(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_1102a1e0();
  if (DAT_11036600 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_110365fc = 1;
  DAT_110365f8 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_1103ab38 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_1103ab34 + -4), DAT_1103ab38 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_1103ab38 <= puVar1);
    }
    __initterm((undefined4 *)&DAT_11036014,(undefined4 *)&DAT_1103601c);
  }
  __initterm((undefined4 *)&DAT_11036020,(undefined4 *)&DAT_11036024);
  if (param_3 != 0) {
    FUN_1102a1f0();
    return;
  }
  DAT_11036600 = 1;
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}


