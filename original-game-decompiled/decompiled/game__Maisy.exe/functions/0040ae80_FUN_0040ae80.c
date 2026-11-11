
/* ==== FUN_0040ae80 @ 0040ae80 ==== 
 * signature: undefined __stdcall FUN_0040ae80(void)
 * body: 0040ae80-0040aed9;0040aef1-0040af03
 */

void FUN_0040ae80(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  puVar2 = DAT_004d95c4;
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0040aeda;
  *unaff_FS_OFFSET = &local_10;
  if (puVar2 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_004a5fed(4);
    local_8 = 0;
    puVar2 = (undefined4 *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = FUN_0043ba70(puVar1);
    }
  }
  else {
    FUN_0043ba90(puVar2);
    puVar2 = DAT_004d95c4;
  }
  DAT_004d95c4 = puVar2;
  *unaff_FS_OFFSET = local_10;
  return;
}


