
/* ==== FUN_0040fc20 @ 0040fc20 ==== 
 * signature: undefined __stdcall FUN_0040fc20(void)
 * body: 0040fc20-0040fc6a
 */

void FUN_0040fc20(void)

{
  undefined4 *unaff_FS_OFFSET;
  CDialog local_6c [92];
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0040fc73;
  *unaff_FS_OFFSET = &local_10;
  FUN_0040fb00(local_6c);
  local_8 = 0;
  FUN_004a6901(local_6c);
  local_8 = 0xffffffff;
  FUN_0040fc6b();
  *unaff_FS_OFFSET = local_10;
  return;
}


