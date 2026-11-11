
/* ==== FUN_004a5fed @ 004a5fed ==== 
 * signature: int __cdecl FUN_004a5fed(SIZE_T param_1)
 * body: 004a5fed-004a602c
 */

int __cdecl FUN_004a5fed(SIZE_T param_1)

{
  int iVar1;
  AFX_MODULE_THREAD_STATE *pAVar2;
  code *pcVar3;
  
  pcVar3 = (code *)0xffffffff;
  while( true ) {
    iVar1 = FUN_00490210(param_1);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (pcVar3 == (code *)0xffffffff) {
      pAVar2 = AfxGetModuleThreadState();
      pcVar3 = *(code **)(pAVar2 + 0x28);
    }
    if (pcVar3 == (code *)0x0) break;
    iVar1 = (*pcVar3)(param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 0;
}


