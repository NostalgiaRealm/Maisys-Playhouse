
/* ==== FUN_004b78f1 @ 004b78f1 ==== 
 * signature: undefined __thiscall FUN_004b78f1(void * this, undefined4 * param_1)
 * body: 004b78f1-004b7909
 */

void __thiscall FUN_004b78f1(void *this,undefined4 *param_1)

{
  CMDIChildWnd *pCVar1;
  
  pCVar1 = CMDIFrameWnd::MDIGetActive(this,(int *)0x0);
  (**(code **)*param_1)(pCVar1 != (CMDIChildWnd *)0x0);
  return;
}


