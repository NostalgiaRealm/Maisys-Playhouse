
/* ==== FUN_100170c0 @ 100170c0 ==== 
 * signature: undefined __cdecl FUN_100170c0(UINT param_1, int param_2, int param_3)
 * body: 100170c0-1001716d
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 1001716e-10017171
 */

void __cdecl FUN_100170c0(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  undefined4 *puVar2;
  UINT uExitCode;
  
  FUN_10017180();
  if (DAT_100233d0 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_100233cc = 1;
  DAT_100233c8 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_10025334 != (undefined4 *)0x0) &&
       (puVar2 = (undefined4 *)(DAT_10025330 + -4), puVar1 = DAT_10025334, DAT_10025334 <= puVar2))
    {
      do {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          puVar1 = DAT_10025334;
        }
        puVar2 = puVar2 + -1;
      } while (puVar1 <= puVar2);
    }
    FUN_100171a0((undefined4 *)&DAT_1001f014,(undefined4 *)&DAT_1001f01c);
  }
  FUN_100171a0((undefined4 *)&DAT_1001f020,(undefined4 *)&DAT_1001f024);
  if (param_3 != 0) {
    FUN_10017190();
    return;
  }
  DAT_100233d0 = 1;
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}


