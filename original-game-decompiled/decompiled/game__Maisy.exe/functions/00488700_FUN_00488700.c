
/* ==== FUN_00488700 @ 00488700 ==== 
 * signature: CView * __fastcall FUN_00488700(CView * param_1)
 * body: 00488700-00488761
 */

CView * __fastcall FUN_00488700(CView *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00488762;
  *unaff_FS_OFFSET = &local_10;
  CView::CView(param_1);
  *(undefined ***)param_1 = &PTR_FUN_004caa08;
  DAT_004dcf78 = param_1;
  *(undefined2 *)(param_1 + 0x46) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined2 *)(param_1 + 0x44) = 0;
  *(undefined2 *)(param_1 + 0x48) = 0;
  *(undefined2 *)(param_1 + 0x4a) = 0;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}


