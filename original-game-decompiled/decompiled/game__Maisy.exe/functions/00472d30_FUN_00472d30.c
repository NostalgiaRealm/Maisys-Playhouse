
/* ==== FUN_00472d30 @ 00472d30 ==== 
 * signature: CMDIFrameWnd * __stdcall FUN_00472d30(void)
 * body: 00472d30-00472d8a
 */

CMDIFrameWnd * FUN_00472d30(void)

{
  CMDIFrameWnd *pCVar1;
  CMDIFrameWnd *pCVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00472d8b;
  *unaff_FS_OFFSET = &local_10;
  pCVar1 = (CMDIFrameWnd *)FUN_004a5fed(0xc4);
  local_8 = 0;
  pCVar2 = (CMDIFrameWnd *)0x0;
  if (pCVar1 != (CMDIFrameWnd *)0x0) {
    pCVar2 = FUN_00472de0(pCVar1);
  }
  *unaff_FS_OFFSET = local_10;
  return pCVar2;
}


