
/* ==== FUN_00484da0 @ 00484da0 ==== 
 * signature: undefined __fastcall FUN_00484da0(undefined4 * param_1)
 * body: 00484da0-00484e39
 */

void __fastcall FUN_00484da0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  int local_28 [5];
  undefined4 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_00484e3a;
  *param_1 = &PTR_FUN_004c8970;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  local_14 = param_1;
  if ((LPVOID)param_1[0x58] != (LPVOID)0x0) {
    FUN_0043f6d0((LPVOID)param_1[0x58]);
    local_14[0x58] = 0;
  }
  if (local_14[0x5a] != 0) {
    FUN_0048b370((int)local_28,0x4dcd9c);
    FUN_00434de0(DAT_004dae3c,local_28,(LPVOID)local_14[0x5a]);
  }
  local_8 = 0xffffffff;
  FUN_00484e44();
  *unaff_FS_OFFSET = local_10;
  return;
}


