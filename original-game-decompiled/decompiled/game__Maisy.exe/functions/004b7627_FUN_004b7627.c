
/* ==== FUN_004b7627 @ 004b7627 ==== 
 * signature: undefined __fastcall FUN_004b7627(CMDIChildWnd * param_1)
 * body: 004b7627-004b7635
 */

void __fastcall FUN_004b7627(CMDIChildWnd *param_1)

{
  CMDIFrameWnd *pCVar1;
  
  pCVar1 = CMDIChildWnd::GetMDIFrame(param_1);
                    /* WARNING: Could not recover jumptable at 0x004b7630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)pCVar1 + 0xd8))();
  return;
}


