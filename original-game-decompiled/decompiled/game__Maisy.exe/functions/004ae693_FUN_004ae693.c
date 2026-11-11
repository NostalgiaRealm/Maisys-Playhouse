
/* ==== FUN_004ae693 @ 004ae693 ==== 
 * signature: undefined __stdcall FUN_004ae693(void)
 * body: 004ae693-004ae69b
 */

void FUN_004ae693(void)

{
  AFX_MODULE_THREAD_STATE *pAVar1;
  
  pAVar1 = AfxGetModuleThreadState();
  *(int *)(pAVar1 + 0x10) = *(int *)(pAVar1 + 0x10) + 1;
  return;
}


