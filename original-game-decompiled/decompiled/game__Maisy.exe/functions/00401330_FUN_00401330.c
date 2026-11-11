
/* ==== FUN_00401330 @ 00401330 ==== 
 * signature: int __cdecl FUN_00401330(short param_1, short * param_2, short * param_3, int * param_4)
 * body: 00401330-004013f0
 */

int __cdecl FUN_00401330(short param_1,short *param_2,short *param_3,int *param_4)

{
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_24 [4];
  char *local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_004013f1;
  *unaff_FS_OFFSET = &local_10;
  if (param_1 < 1) {
    local_14 = 0x10000;
  }
  else {
    local_18 = 0;
    FUN_00458440(local_24,param_2);
    local_8 = 0;
    if (local_1c == 0) {
      local_14 = FUN_0048c070(param_4,'/',local_20,&local_18);
      if (local_14 == 0) {
        local_14 = FUN_00454d50(param_3,local_18);
        local_8 = 0xffffffff;
        FUN_004013fb();
      }
      else {
        local_8 = 0xffffffff;
        FUN_004013fb();
      }
    }
    else {
      local_8 = 0xffffffff;
      local_14 = local_1c;
      FUN_004013fb();
    }
  }
  *unaff_FS_OFFSET = local_10;
  return local_14;
}


