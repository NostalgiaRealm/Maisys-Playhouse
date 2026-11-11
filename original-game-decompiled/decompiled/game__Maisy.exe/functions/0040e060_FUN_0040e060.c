
/* ==== FUN_0040e060 @ 0040e060 ==== 
 * signature: undefined4 __stdcall FUN_0040e060(void)
 * body: 0040e060-0040e0af
 */

undefined4 FUN_0040e060(void)

{
  undefined4 uVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_1c [12];
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0040e0b8;
  *unaff_FS_OFFSET = &local_10;
  FUN_0043bf50(local_1c);
  local_8 = 0;
  FUN_0043bf60();
  local_8 = 0xffffffff;
  uVar1 = FUN_0040e0b0();
  *unaff_FS_OFFSET = local_10;
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


