
/* ==== FUN_004488f0 @ 004488f0 ==== 
 * signature: CWnd * __fastcall FUN_004488f0(CWnd * param_1)
 * body: 004488f0-00448948
 */

CWnd * __fastcall FUN_004488f0(CWnd *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00448951;
  *unaff_FS_OFFSET = &local_10;
  CWnd::CWnd(param_1);
  *(undefined ***)param_1 = &PTR_FUN_004cbd3c;
  *(undefined ***)param_1 = &PTR_FUN_004c8368;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}


