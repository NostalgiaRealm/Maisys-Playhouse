
/* ==== FUN_0041c330 @ 0041c330 ==== 
 * signature: undefined __stdcall FUN_0041c330(void)
 * body: 0041c330-0041c366
 */

void FUN_0041c330(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_0041c367;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0xffffffff;
  FUN_0041c371();
  *unaff_FS_OFFSET = local_10;
  return;
}


