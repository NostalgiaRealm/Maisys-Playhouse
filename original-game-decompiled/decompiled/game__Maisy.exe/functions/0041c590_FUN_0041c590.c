
/* ==== FUN_0041c590 @ 0041c590 ==== 
 * signature: undefined __stdcall FUN_0041c590(void)
 * body: 0041c590-0041c5c6
 */

void FUN_0041c590(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_0041c5c7;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_0041c5d1();
  *unaff_FS_OFFSET = local_10;
  return;
}


