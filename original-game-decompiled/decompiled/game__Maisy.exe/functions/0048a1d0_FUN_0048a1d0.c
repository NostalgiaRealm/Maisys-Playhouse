
/* ==== FUN_0048a1d0 @ 0048a1d0 ==== 
 * signature: undefined __stdcall FUN_0048a1d0(void)
 * body: 0048a1d0-0048a243
 */

void FUN_0048a1d0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0048a244;
  *unaff_FS_OFFSET = &local_10;
  if (DAT_004dcfa4 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_004a5fed(4);
    local_8 = 0;
    puVar2 = (undefined4 *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = FUN_00489db0(puVar1);
    }
    local_8 = 0xffffffff;
    DAT_004dcfa4 = puVar2;
    FUN_00433340();
    FUN_004018c0();
    FUN_0042b1e0();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}


