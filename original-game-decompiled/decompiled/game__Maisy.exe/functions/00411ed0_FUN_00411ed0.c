
/* ==== FUN_00411ed0 @ 00411ed0 ==== 
 * signature: uint __cdecl FUN_00411ed0(HGLOBAL param_1, int param_2, uint param_3, SIZE_T param_4)
 * body: 00411ed0-00411f63
 */

uint __cdecl FUN_00411ed0(HGLOBAL param_1,int param_2,uint param_3,SIZE_T param_4)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_1c [4];
  int local_18;
  uint local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00411f64;
  *unaff_FS_OFFSET = &local_10;
  if ((int)param_4 < 0) {
    param_4 = GlobalSize(param_1);
  }
  FUN_00411ea0(local_1c,param_1);
  iVar1 = 0;
  local_14 = param_3;
  do {
    if (param_4 <= local_14) {
      local_8 = 0xffffffff;
      FUN_00411f6e();
      local_14 = 0xffffffff;
LAB_00411f43:
      *unaff_FS_OFFSET = local_10;
      return local_14;
    }
    if ((*(char *)(local_18 + local_14) == '\r') && (iVar1 = iVar1 + 1, param_2 == iVar1)) {
      local_8 = 0xffffffff;
      FUN_00411f6e();
      goto LAB_00411f43;
    }
    local_14 = local_14 + 1;
  } while( true );
}


