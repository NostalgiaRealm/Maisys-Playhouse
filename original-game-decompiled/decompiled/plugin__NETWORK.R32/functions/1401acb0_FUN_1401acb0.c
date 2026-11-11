
/* ==== FUN_1401acb0 @ 1401acb0 ==== 
 * signature: undefined __cdecl FUN_1401acb0(UINT param_1, int param_2, int param_3)
 * body: 1401acb0-1401ad5c
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 1401ad5d-1401ad60
 */

void __cdecl FUN_1401acb0(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_1401ad70();
  if (DAT_1402731c == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_14027318 = 1;
  DAT_14027314 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_14029f7c != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_14029f78 + -4), DAT_14029f7c <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_14029f7c <= puVar1);
    }
    __initterm((undefined4 *)&DAT_14026014,(undefined4 *)&DAT_1402601c);
  }
  __initterm((undefined4 *)&DAT_14026020,(undefined4 *)&DAT_14026024);
  if (param_3 != 0) {
    FUN_1401ad80();
    return;
  }
  DAT_1402731c = 1;
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}


