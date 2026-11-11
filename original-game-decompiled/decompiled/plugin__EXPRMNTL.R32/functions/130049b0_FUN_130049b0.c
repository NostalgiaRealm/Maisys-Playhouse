
/* ==== FUN_130049b0 @ 130049b0 ==== 
 * signature: undefined __cdecl FUN_130049b0(UINT param_1, int param_2, int param_3)
 * body: 130049b0-13004a5c
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 13004a5d-13004a60
 */

void __cdecl FUN_130049b0(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_13004a70();
  if (DAT_1300837c == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_13008378 = 1;
  DAT_13008374 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_13009e5c != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_13009e58 + -4), DAT_13009e5c <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_13009e5c <= puVar1);
    }
    __initterm((undefined4 *)&DAT_13008014,(undefined4 *)&DAT_1300801c);
  }
  __initterm((undefined4 *)&DAT_13008020,(undefined4 *)&DAT_13008024);
  if (param_3 != 0) {
    FUN_13004a80();
    return;
  }
  DAT_1300837c = 1;
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}


