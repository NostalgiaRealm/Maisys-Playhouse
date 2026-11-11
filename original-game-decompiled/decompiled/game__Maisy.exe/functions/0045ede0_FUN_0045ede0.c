
/* ==== FUN_0045ede0 @ 0045ede0 ==== 
 * signature: CMDIChildWnd * __stdcall FUN_0045ede0(void)
 * body: 0045ede0-0045ee3a
 */

CMDIChildWnd * FUN_0045ede0(void)

{
  CMDIChildWnd *pCVar1;
  CMDIChildWnd *pCVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0045ee3b;
  *unaff_FS_OFFSET = &local_10;
  pCVar1 = (CMDIChildWnd *)FUN_004a5fed(0xde);
  local_8 = 0;
  pCVar2 = (CMDIChildWnd *)0x0;
  if (pCVar1 != (CMDIChildWnd *)0x0) {
    pCVar2 = FUN_0045ee80(pCVar1);
  }
  *unaff_FS_OFFSET = local_10;
  return pCVar2;
}


