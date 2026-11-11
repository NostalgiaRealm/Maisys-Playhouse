
/* ==== AfxGetModuleThreadState @ 004baffc ==== 
 * signature: AFX_MODULE_THREAD_STATE * __stdcall AfxGetModuleThreadState(void)
 * body: 004baffc-004bb011
 * note: Library Function - Single Match  class AFX_MODULE_THREAD_STATE * __stdcall AfxGetModuleThreadState(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    class AFX_MODULE_THREAD_STATE * __stdcall AfxGetModuleThreadState(void)
   
   Library: Visual Studio 1998 Release */

AFX_MODULE_THREAD_STATE * AfxGetModuleThreadState(void)

{
  int iVar1;
  AFX_MODULE_THREAD_STATE *pAVar2;
  
  iVar1 = FUN_004bafca();
  pAVar2 = (AFX_MODULE_THREAD_STATE *)
           FUN_004bbe8e((void *)(iVar1 + 0x1038),CThreadLocal<AFX_MODULE_THREAD_STATE>::CreateObject
                       );
  return pAVar2;
}


