
/* ==== FUN_0045ee80 @ 0045ee80 ==== 
 * signature: CMDIChildWnd * __fastcall FUN_0045ee80(CMDIChildWnd * param_1)
 * body: 0045ee80-0045ef02
 */

CMDIChildWnd * __fastcall FUN_0045ee80(CMDIChildWnd *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0045ef03;
  *unaff_FS_OFFSET = &local_10;
  CMDIChildWnd::CMDIChildWnd(param_1);
  *(undefined ***)param_1 = &PTR_FUN_004c9170;
  DAT_004dc1c0 = param_1;
  *(undefined2 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  param_1[0xcc] = (CMDIChildWnd)0x0;
  *(undefined4 *)(param_1 + 0xce) = 0;
  *(undefined4 *)(param_1 + 0xd6) = 0;
  *(undefined4 *)(param_1 + 0xd2) = 0;
  *unaff_FS_OFFSET = local_10;
  *(undefined2 *)(param_1 + 0xda) = 3;
  return param_1;
}


