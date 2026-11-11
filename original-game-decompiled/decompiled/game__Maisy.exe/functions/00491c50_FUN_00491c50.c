
/* ==== FUN_00491c50 @ 00491c50 ==== 
 * signature: undefined __cdecl FUN_00491c50(UINT param_1, int param_2, int param_3)
 * body: 00491c50-00491cfc
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00491cfd-00491d00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00491c50(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_00491d10();
  if (DAT_004de1e0 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  _DAT_004de1dc = 1;
  DAT_004de1d8 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_004e67a4 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_004e67a0 + -4), DAT_004e67a4 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_004e67a4 <= puVar1);
    }
    __initterm((undefined4 *)&DAT_004d9160,(undefined4 *)&DAT_004d9168);
  }
  __initterm((undefined4 *)&DAT_004d916c,(undefined4 *)&DAT_004d9170);
  if (param_3 != 0) {
    FUN_00491d20();
    return;
  }
  DAT_004de1e0 = 1;
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}


