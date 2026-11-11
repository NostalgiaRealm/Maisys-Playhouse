
/* ==== AfxGetThreadState @ 004ba94d ==== 
 * signature: _AFX_THREAD_STATE * __stdcall AfxGetThreadState(void)
 * body: 004ba94d-004ba95c
 * note: Library Function - Single Match  class _AFX_THREAD_STATE * __stdcall AfxGetThreadState(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    class _AFX_THREAD_STATE * __stdcall AfxGetThreadState(void)
   
   Library: Visual Studio 1998 Release */

_AFX_THREAD_STATE * AfxGetThreadState(void)

{
  _AFX_THREAD_STATE *p_Var1;
  
  p_Var1 = (_AFX_THREAD_STATE *)
           FUN_004bbe8e(&DAT_004e362c,CThreadLocal<_AFX_THREAD_STATE>::CreateObject);
  return p_Var1;
}


