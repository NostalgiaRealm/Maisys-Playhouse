
/* ==== FUN_004a7166 @ 004a7166 ==== 
 * signature: undefined __stdcall FUN_004a7166(uint param_1, int param_2)
 * body: 004a7166-004a719c
 */

void FUN_004a7166(uint param_1,int param_2)

{
  AFX_MODULE_THREAD_STATE *pAVar1;
  
  pAVar1 = AfxGetModuleThreadState();
  if (*(int **)(pAVar1 + 4) != (int *)0x0) {
    if (param_2 != 0) {
      (**(code **)(**(int **)(pAVar1 + 4) + 0x7c))();
    }
    *(undefined4 *)(pAVar1 + 4) = 0;
  }
  FUN_004a720f();
  __endthreadex(param_1);
  return;
}


