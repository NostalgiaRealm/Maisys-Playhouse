
/* ==== FUN_0042fad0 @ 0042fad0 ==== 
 * signature: undefined __fastcall FUN_0042fad0(undefined4 * param_1)
 * body: 0042fad0-0042fb38
 */

void __fastcall FUN_0042fad0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_0042fb39;
  *param_1 = &PTR_FUN_004c7320;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  if ((*(HLOCAL *)((int)param_1 + 0x36) != (HLOCAL)0x0) && ((*(byte *)(param_1 + 0x12) & 1) != 0)) {
    FUN_0043f720(*(HLOCAL *)((int)param_1 + 0x36));
    *(undefined4 *)((int)param_1 + 0x36) = 0;
    *(undefined4 *)((int)param_1 + 0x2a) = 0;
    *(undefined4 *)((int)param_1 + 0x26) = 0;
  }
  local_8 = 0xffffffff;
  FUN_0042fb43();
  *unaff_FS_OFFSET = local_10;
  return;
}


