
/* ==== KERNEL32.DLL::SetUnhandledExceptionFilter @ 004a2398 ==== 
 * signature: LPTOP_LEVEL_EXCEPTION_FILTER __stdcall SetUnhandledExceptionFilter(LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter)
 * body: 004a2398-004a239d
 * thunk to: KERNEL32.DLL::SetUnhandledExceptionFilter
 */

LPTOP_LEVEL_EXCEPTION_FILTER
SetUnhandledExceptionFilter(LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter)

{
  LPTOP_LEVEL_EXCEPTION_FILTER pPVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a2398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pPVar1 = SetUnhandledExceptionFilter(lpTopLevelExceptionFilter);
  return pPVar1;
}


