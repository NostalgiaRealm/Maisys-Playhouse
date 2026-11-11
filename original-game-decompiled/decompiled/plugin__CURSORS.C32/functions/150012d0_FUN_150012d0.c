
/* ==== FUN_150012d0 @ 150012d0 ==== 
 * signature: undefined __cdecl FUN_150012d0(UINT param_1, int param_2, int param_3)
 * body: 150012d0-1500137c
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 1500137d-15001380
 */

void __cdecl FUN_150012d0(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_15001390();
  if (DAT_15005088 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_15005084 = 1;
  DAT_15005080 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_15006b5c != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_15006b58 + -4), DAT_15006b5c <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_15006b5c <= puVar1);
    }
    __initterm((undefined4 *)&DAT_15005014,(undefined4 *)&DAT_1500501c);
  }
  __initterm((undefined4 *)&DAT_15005020,(undefined4 *)&DAT_15005024);
  if (param_3 != 0) {
    FUN_150013a0();
    return;
  }
  DAT_15005088 = 1;
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}


