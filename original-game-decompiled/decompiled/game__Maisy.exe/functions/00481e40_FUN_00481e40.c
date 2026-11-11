
/* ==== FUN_00481e40 @ 00481e40 ==== 
 * signature: undefined __stdcall FUN_00481e40(void)
 * body: 00481e40-00481e9b
 */

void FUN_00481e40(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00481e9c;
  *unaff_FS_OFFSET = &local_10;
  puVar1 = FUN_00412c20(0x4e);
  local_8 = 0;
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_00481ee0(puVar1);
  }
  DAT_004dcd34 = puVar2;
  *unaff_FS_OFFSET = local_10;
  return;
}


