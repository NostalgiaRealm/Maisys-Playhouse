
/* ==== FUN_004b29f7 @ 004b29f7 ==== 
 * signature: undefined __thiscall FUN_004b29f7(void * this, undefined4 * param_1)
 * body: 004b29f7-004b2a20
 */

void __thiscall FUN_004b29f7(void *this,undefined4 *param_1)

{
  CWnd *pCVar1;
  undefined4 uVar2;
  
  pCVar1 = FUN_004b2920(this,0);
  if ((pCVar1 == (CWnd *)0x0) || (uVar2 = 1, *(int *)(pCVar1 + 0x80) != 0)) {
    uVar2 = 0;
  }
  (**(code **)*param_1)(uVar2);
  return;
}


