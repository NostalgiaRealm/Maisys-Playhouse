
/* ==== FUN_0044df80 @ 0044df80 ==== 
 * signature: undefined __stdcall FUN_0044df80(int * param_1, undefined4 param_2)
 * body: 0044df80-0044e012
 */

void FUN_0044df80(int *param_1,undefined4 param_2)

{
  undefined4 *unaff_FS_OFFSET;
  AFX_EXCEPTION_LINK local_28 [12];
  undefined4 local_1c;
  undefined1 local_15;
  undefined1 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0044e037;
  *unaff_FS_OFFSET = &local_10;
  local_15 = DAT_004db9c4;
  local_1c = DAT_004db9a4;
  local_14 = &stack0xffffffcc;
  AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_28);
  local_8 = 1;
  DAT_004db9c4 = 0;
  DAT_004db9a4 = (short)param_2 + -1;
  (**(code **)(*param_1 + 0x118))(param_2);
  local_8 = 0xffffffff;
  FUN_0044e041();
  DAT_004db9a4 = local_1c;
  *unaff_FS_OFFSET = local_10;
  DAT_004db9c4 = local_15;
  return;
}


