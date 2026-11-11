
/* ==== FUN_004b3579 @ 004b3579 ==== 
 * signature: CObject * __fastcall FUN_004b3579(int * param_1)
 * body: 004b3579-004b35a4
 */

CObject * __fastcall FUN_004b3579(int *param_1)

{
  CObject *pCVar1;
  CObject *pCVar2;
  
  if ((CRuntimeClass *)param_1[0x13] == (CRuntimeClass *)0x0) {
    pCVar2 = (CObject *)0x0;
  }
  else {
    pCVar1 = CRuntimeClass::CreateObject((CRuntimeClass *)param_1[0x13]);
    pCVar2 = (CObject *)0x0;
    if (pCVar1 != (CObject *)0x0) {
      (**(code **)(*param_1 + 0x60))(pCVar1);
      pCVar2 = pCVar1;
    }
  }
  return pCVar2;
}


