
/* ==== FUN_004b7b6a @ 004b7b6a ==== 
 * signature: undefined __fastcall FUN_004b7b6a(void * param_1)
 * body: 004b7b6a-004b7b7c
 */

void __fastcall FUN_004b7b6a(void *param_1)

{
  AFX_MODULE_THREAD_STATE *pAVar1;
  
  pAVar1 = AfxGetModuleThreadState();
  CSimpleList::AddHead((CSimpleList *)(pAVar1 + 8),param_1);
  return;
}


