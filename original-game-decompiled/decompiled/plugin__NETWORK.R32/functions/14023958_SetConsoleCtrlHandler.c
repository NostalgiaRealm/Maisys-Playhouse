
/* ==== KERNEL32.DLL::SetConsoleCtrlHandler @ 14023958 ==== 
 * signature: BOOL __stdcall SetConsoleCtrlHandler(PHANDLER_ROUTINE HandlerRoutine, BOOL Add)
 * body: 14023958-1402395d
 * thunk to: KERNEL32.DLL::SetConsoleCtrlHandler
 */

BOOL SetConsoleCtrlHandler(PHANDLER_ROUTINE HandlerRoutine,BOOL Add)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x14023958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetConsoleCtrlHandler(HandlerRoutine,Add);
  return BVar1;
}


