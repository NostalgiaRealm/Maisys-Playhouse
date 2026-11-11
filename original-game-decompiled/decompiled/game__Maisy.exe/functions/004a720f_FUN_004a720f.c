
/* ==== FUN_004a720f @ 004a720f ==== 
 * signature: undefined __stdcall FUN_004a720f(void)
 * body: 004a720f-004a7259
 */

void FUN_004a720f(void)

{
  CNoTrackObject *pCVar1;
  
  pCVar1 = CThreadLocalObject::GetDataNA((CThreadLocalObject *)&DAT_004e362c);
  if (pCVar1 != (CNoTrackObject *)0x0) {
    pCVar1 = pCVar1 + 0xd0;
    if (*(int **)pCVar1 != (int *)0x0) {
      (**(code **)(**(int **)pCVar1 + 0x5c))();
      if (*(int **)pCVar1 != (int *)0x0) {
        (**(code **)(**(int **)pCVar1 + 4))(1);
      }
      *(int *)pCVar1 = 0;
    }
  }
  if (DAT_004e5100 != (void *)0x0) {
    FUN_004bbd99(DAT_004e5100,0);
  }
  return;
}


