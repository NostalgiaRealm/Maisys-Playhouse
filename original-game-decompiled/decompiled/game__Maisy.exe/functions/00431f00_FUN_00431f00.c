
/* ==== FUN_00431f00 @ 00431f00 ==== 
 * signature: int __cdecl FUN_00431f00(short * param_1, short * param_2, short * param_3, char * param_4, short * param_5, char param_6, char param_7)
 * body: 00431f00-0043207b
 */

int __cdecl
FUN_00431f00(short *param_1,short *param_2,short *param_3,char *param_4,short *param_5,char param_6,
            char param_7)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_64 [4];
  char *local_60;
  int local_5c;
  undefined4 local_58;
  char *local_54;
  int local_50;
  AFX_EXCEPTION_LINK local_4c [36];
  int local_28;
  int local_24;
  int local_20;
  size_t local_1c;
  size_t local_18;
  undefined1 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0043209f;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffff90;
  local_20 = 0;
  local_18 = 0;
  local_1c = 0;
  AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_4c);
  local_8 = 1;
  iVar1 = FUN_004562d0(param_1,&local_24,&local_28,(int *)0x0);
  if (iVar1 != 0) {
    local_20 = FUN_00455c10(param_1,&local_24,(int *)0x0);
    if (local_20 == 0) {
      local_28 = local_24;
    }
    else {
      FUN_004a3538();
    }
  }
  FUN_00458440(local_64,param_2);
  local_8._0_1_ = 2;
  if (local_5c != 0) {
    FUN_004a3538();
  }
  FUN_004583c0(&local_58);
  local_8 = CONCAT31(local_8._1_3_,3);
  if ((param_3 != (short *)0x0) &&
     (FUN_004583d0(&local_58,param_3), param_4 = local_54, local_50 != 0)) {
    FUN_004a3538();
    param_4 = local_54;
  }
  FUN_00431c40(local_60,param_4,local_24,local_28,&local_18,&local_1c,param_7);
  if (param_6 == '\0') {
    iVar1 = FUN_00431b20((int)local_60,local_18,local_1c - local_18,param_5);
  }
  else {
    if ((local_18 != 0) || (local_1c != 0)) {
      if (local_1c == local_18) {
        local_18 = 0;
        local_1c = 0;
      }
      else {
        local_18 = local_18 + 1;
      }
    }
    iVar1 = FUN_00454e70(param_5,local_18,local_1c);
  }
  if (iVar1 != 0) {
    FUN_004a3538();
  }
  local_8._0_1_ = 2;
  FUN_0043207c();
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_00432084();
  local_8 = 0xffffffff;
  FUN_004320a9();
  *unaff_FS_OFFSET = local_10;
  return local_20;
}


