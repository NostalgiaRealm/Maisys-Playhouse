
/* ==== FUN_004b68c3 @ 004b68c3 ==== 
 * signature: undefined __fastcall FUN_004b68c3(CWnd * param_1)
 * body: 004b68c3-004b68ed
 */

void __fastcall FUN_004b68c3(CWnd *param_1)

{
  LONG *pLVar1;
  
  pLVar1 = (LONG *)(**(code **)(*(int *)param_1 + 0x84))();
  SetWindowLongA(*(HWND *)(param_1 + 0x1c),-4,*pLVar1);
  *pLVar1 = 0;
  CWnd::Detach(param_1);
  return;
}


