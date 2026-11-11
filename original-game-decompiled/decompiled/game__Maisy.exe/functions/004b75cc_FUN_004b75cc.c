
/* ==== FUN_004b75cc @ 004b75cc ==== 
 * signature: undefined __thiscall FUN_004b75cc(void * this, WPARAM param_1)
 * body: 004b75cc-004b760f
 */

void __thiscall FUN_004b75cc(void *this,WPARAM param_1)

{
  CMDIChildWnd *pCVar1;
  
  pCVar1 = CMDIFrameWnd::MDIGetActive(this,(int *)0x0);
  if (pCVar1 == (CMDIChildWnd *)0x0) {
    if (param_1 == 0) {
      param_1 = *(WPARAM *)((int)this + 0x44);
    }
    SendMessageA(*(HWND *)((int)this + 0xbc),0x230,param_1,0);
  }
  else {
    (**(code **)(*(int *)pCVar1 + 0xfc))(1,pCVar1,param_1);
  }
  return;
}


