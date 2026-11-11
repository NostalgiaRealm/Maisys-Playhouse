
/* ==== KERNEL32.DLL::SetConsoleCtrlHandler @ 004a23ce ==== 
 * signature: BOOL __stdcall SetConsoleCtrlHandler(PHANDLER_ROUTINE HandlerRoutine, BOOL Add)
 * body: 004a23ce-004a23d3
 * thunk to: KERNEL32.DLL::SetConsoleCtrlHandler
 */

BOOL SetConsoleCtrlHandler(PHANDLER_ROUTINE HandlerRoutine,BOOL Add)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a23ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetConsoleCtrlHandler(HandlerRoutine,Add);
  return BVar1;
}


