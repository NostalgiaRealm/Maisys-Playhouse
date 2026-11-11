
/* ==== KERNEL32.DLL::UnhandledExceptionFilter @ 004a2368 ==== 
 * signature: LONG __stdcall UnhandledExceptionFilter(_EXCEPTION_POINTERS * ExceptionInfo)
 * body: 004a2368-004a236d
 * thunk to: KERNEL32.DLL::UnhandledExceptionFilter
 */

LONG UnhandledExceptionFilter(_EXCEPTION_POINTERS *ExceptionInfo)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = UnhandledExceptionFilter(ExceptionInfo);
  return LVar1;
}


