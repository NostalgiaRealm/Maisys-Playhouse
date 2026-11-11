
/* ==== FUN_0040fb00 @ 0040fb00 ==== 
 * signature: CDialog * __fastcall FUN_0040fb00(CDialog * param_1)
 * body: 0040fb00-0040fb4e
 */

CDialog * __fastcall FUN_0040fb00(CDialog *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0040fb4f;
  *unaff_FS_OFFSET = &local_10;
  CDialog::CDialog(param_1,100,(CWnd *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_004be5a8;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}


