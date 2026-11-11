
/* ==== FUN_004b2a88 @ 004b2a88 ==== 
 * signature: bool __thiscall FUN_004b2a88(void * this, int param_1)
 * body: 004b2a88-004b2abb
 */

bool __thiscall FUN_004b2a88(void *this,int param_1)

{
  CWnd *pCVar1;
  
  pCVar1 = FUN_004b2920(this,0);
  if (pCVar1 != (CWnd *)0x0) {
    (**(code **)(*(int *)pCVar1 + 0xf0))(param_1 == 0xe151);
  }
  return pCVar1 != (CWnd *)0x0;
}


