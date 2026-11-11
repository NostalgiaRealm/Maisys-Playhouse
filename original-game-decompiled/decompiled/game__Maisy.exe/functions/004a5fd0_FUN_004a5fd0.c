
/* ==== FUN_004a5fd0 @ 004a5fd0 ==== 
 * signature: undefined4 __stdcall FUN_004a5fd0(void)
 * body: 004a5fd0-004a5fd8
 */

undefined4 FUN_004a5fd0(void)

{
  AFX_MODULE_THREAD_STATE *pAVar1;
  
  pAVar1 = AfxGetModuleThreadState();
  return *(undefined4 *)(pAVar1 + 0x28);
}


