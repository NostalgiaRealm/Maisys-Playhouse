
/* ==== FUN_00429940 @ 00429940 ==== 
 * signature: undefined __fastcall FUN_00429940(undefined4 * param_1)
 * body: 00429940-0042999b
 */

void __fastcall FUN_00429940(undefined4 *param_1)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_0042999c;
  *param_1 = &PTR_FUN_004c6f08;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  iVar1 = FUN_00429b00((int)param_1);
  FUN_00436690(DAT_004dae3c,param_1[0x14],(ushort)iVar1);
  local_8 = 0xffffffff;
  FUN_004299a6();
  *unaff_FS_OFFSET = local_10;
  return;
}


