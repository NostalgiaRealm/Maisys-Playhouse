
/* ==== FUN_004b2a21 @ 004b2a21 ==== 
 * signature: bool __fastcall FUN_004b2a21(CWnd * param_1)
 * body: 004b2a21-004b2a43
 */

bool __fastcall FUN_004b2a21(CWnd *param_1)

{
  CWnd *pCVar1;
  
  pCVar1 = FUN_004b2920(param_1,0);
  if (pCVar1 != (CWnd *)0x0) {
    (**(code **)(*(int *)pCVar1 + 0xf4))();
  }
  return pCVar1 != (CWnd *)0x0;
}


