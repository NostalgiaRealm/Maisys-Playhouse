
/* ==== FUN_00447f20 @ 00447f20 ==== 
 * signature: undefined __stdcall FUN_00447f20(void)
 * body: 00447f20-00447f79
 */

void FUN_00447f20(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00447f7a;
  *unaff_FS_OFFSET = &local_10;
  DAT_004db9d0 = (undefined4 *)FUN_004a5fed(4);
  if (DAT_004db9d0 == (undefined4 *)0x0) {
    DAT_004db9d0 = (undefined4 *)0x0;
  }
  else {
    *DAT_004db9d0 = 0x800000;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}


