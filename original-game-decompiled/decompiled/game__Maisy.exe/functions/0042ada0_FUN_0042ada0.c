
/* ==== FUN_0042ada0 @ 0042ada0 ==== 
 * signature: undefined __fastcall FUN_0042ada0(undefined4 * param_1)
 * body: 0042ada0-0042adf3
 */

void __fastcall FUN_0042ada0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_0042adf4;
  *param_1 = &PTR_FUN_004c71b8;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  if ((void *)param_1[0x13] != (void *)0x0) {
    FUN_0045a080((void *)param_1[0x13],(int)param_1);
  }
  local_8 = 0xffffffff;
  FUN_0042adfe();
  *unaff_FS_OFFSET = local_10;
  return;
}


