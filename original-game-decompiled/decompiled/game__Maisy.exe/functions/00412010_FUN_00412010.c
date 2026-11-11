
/* ==== FUN_00412010 @ 00412010 ==== 
 * signature: int __cdecl FUN_00412010(HGLOBAL param_1, SIZE_T param_2)
 * body: 00412010-00412095
 */

int __cdecl FUN_00412010(HGLOBAL param_1,SIZE_T param_2)

{
  uint uVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00412096;
  *unaff_FS_OFFSET = &local_10;
  if ((int)param_2 < 0) {
    param_2 = GlobalSize(param_1);
  }
  local_14 = 0;
  FUN_00411ea0(local_1c,param_1);
  for (uVar1 = 0; uVar1 < param_2; uVar1 = uVar1 + 1) {
    if (*(char *)(local_18 + uVar1) == '\r') {
      local_14 = local_14 + 1;
    }
  }
  if ((param_2 != 0) && (*(char *)(local_18 + -1 + param_2) != '\r')) {
    local_14 = local_14 + 1;
  }
  local_8 = 0xffffffff;
  FUN_004120a0();
  *unaff_FS_OFFSET = local_10;
  return local_14;
}


