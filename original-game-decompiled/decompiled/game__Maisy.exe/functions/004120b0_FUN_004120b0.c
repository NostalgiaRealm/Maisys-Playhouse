
/* ==== FUN_004120b0 @ 004120b0 ==== 
 * signature: int __cdecl FUN_004120b0(HGLOBAL param_1, uint param_2, SIZE_T param_3)
 * body: 004120b0-0041212f
 */

int __cdecl FUN_004120b0(HGLOBAL param_1,uint param_2,SIZE_T param_3)

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
  pcStack_c = FUN_00412130;
  *unaff_FS_OFFSET = &local_10;
  if ((int)param_3 < 0) {
    param_3 = GlobalSize(param_1);
  }
  FUN_00411ea0(local_1c,param_1);
  local_14 = 1;
  uVar1 = 0;
  if (param_3 != 0) {
    do {
      if (param_2 <= uVar1) break;
      if (*(char *)(local_18 + uVar1) == '\r') {
        local_14 = local_14 + 1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_3);
  }
  local_8 = 0xffffffff;
  FUN_0041213a();
  *unaff_FS_OFFSET = local_10;
  return local_14;
}


