
/* ==== FUN_0040fc80 @ 0040fc80 ==== 
 * signature: undefined __stdcall FUN_0040fc80(void)
 * body: 0040fc80-0040fcb6
 */

void FUN_0040fc80(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_0040fcb7;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_0040fcc1();
  *unaff_FS_OFFSET = local_10;
  return;
}


