
/* ==== FUN_00488830 @ 00488830 ==== 
 * signature: undefined __fastcall FUN_00488830(undefined4 * param_1)
 * body: 00488830-00488878
 */

void __fastcall FUN_00488830(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_00488879;
  *param_1 = &PTR_FUN_004caa08;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  FUN_00488a50();
  local_8 = 0xffffffff;
  FUN_00488883();
  *unaff_FS_OFFSET = local_10;
  return;
}


