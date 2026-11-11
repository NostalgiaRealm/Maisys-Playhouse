
/* ==== FUN_0043f380 @ 0043f380 ==== 
 * signature: bool __cdecl FUN_0043f380(undefined4 param_1, char * param_2)
 * body: 0043f380-0043f421
 */

bool __cdecl FUN_0043f380(undefined4 param_1,char *param_2)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  CDialog local_78 [100];
  CString local_14 [4];
  undefined4 local_10;
  code *pcStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0043f42a;
  *unaff_FS_OFFSET = &local_10;
  MessageBeep(0x40);
  FUN_004abb44((undefined4 *)local_14);
  local_8 = 0;
  AfxFormatString1(local_14,0x427,param_2);
  FUN_0043f190(local_78,local_14);
  local_8._0_1_ = 1;
  FUN_004a6901(local_78);
  iVar1 = FUN_0043f280((int)local_78);
  local_8 = (uint)local_8._1_3_ << 8;
  if (iVar1 == 0) {
    FUN_0043f422();
    local_8 = 0xffffffff;
    FUN_0043f434();
  }
  else {
    FUN_0043f422();
    local_8 = 0xffffffff;
    FUN_0043f434();
  }
  *unaff_FS_OFFSET = local_10;
  return iVar1 == 0;
}


