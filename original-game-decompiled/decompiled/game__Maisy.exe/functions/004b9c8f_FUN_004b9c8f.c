
/* ==== FUN_004b9c8f @ 004b9c8f ==== 
 * signature: undefined __stdcall FUN_004b9c8f(void)
 * body: 004b9c8f-004b9ca7
 */

void FUN_004b9c8f(void)

{
  int iVar1;
  LONG LVar2;
  
  iVar1 = FUN_004bafca();
  LVar2 = InterlockedDecrement((LONG *)(iVar1 + 0x2c));
  if (LVar2 == 0) {
    FUN_004b9c2a();
    return;
  }
  return;
}


