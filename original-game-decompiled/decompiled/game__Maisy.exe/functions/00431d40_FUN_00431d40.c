
/* ==== FUN_00431d40 @ 00431d40 ==== 
 * signature: int __cdecl FUN_00431d40(short param_1, short * param_2, short * param_3)
 * body: 00431d40-00431dd6
 */

int __cdecl FUN_00431d40(short param_1,short *param_2,short *param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_20 [4];
  char *local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00431dd7;
  *unaff_FS_OFFSET = &local_10;
  if (param_1 == 1) {
    FUN_00458440(local_20,param_2);
    local_8 = 0;
    if (local_18 == 0) {
      uVar2 = 0xffffffff;
      do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        cVar1 = *local_1c;
        local_1c = local_1c + 1;
      } while (cVar1 != '\0');
      local_14 = FUN_00454d00(param_3,~uVar2 - 1);
      local_8 = 0xffffffff;
      FUN_00431de1();
    }
    else {
      local_8 = 0xffffffff;
      local_14 = local_18;
      FUN_00431de1();
    }
  }
  else {
    local_14 = 0x10000;
  }
  *unaff_FS_OFFSET = local_10;
  return local_14;
}


