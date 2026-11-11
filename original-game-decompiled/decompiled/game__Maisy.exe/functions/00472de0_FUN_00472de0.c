
/* ==== FUN_00472de0 @ 00472de0 ==== 
 * signature: CMDIFrameWnd * __fastcall FUN_00472de0(CMDIFrameWnd * param_1)
 * body: 00472de0-00472e38
 */

CMDIFrameWnd * __fastcall FUN_00472de0(CMDIFrameWnd *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00472e39;
  *unaff_FS_OFFSET = &local_10;
  CMDIFrameWnd::CMDIFrameWnd(param_1);
  *(undefined2 *)(param_1 + 0xc2) = 0;
  *(undefined ***)param_1 = &PTR_FUN_004c99c0;
  *(undefined2 *)(param_1 + 0xc0) = 3;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}


