
/* ==== KERNEL32.DLL::UnhandledExceptionFilter @ 14023952 ==== 
 * signature: LONG __stdcall UnhandledExceptionFilter(_EXCEPTION_POINTERS * ExceptionInfo)
 * body: 14023952-14023957
 * thunk to: KERNEL32.DLL::UnhandledExceptionFilter
 */

LONG UnhandledExceptionFilter(_EXCEPTION_POINTERS *ExceptionInfo)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x14023952. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = UnhandledExceptionFilter(ExceptionInfo);
  return LVar1;
}


