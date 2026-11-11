
/* ==== FUN_00401500 @ 00401500 ==== 
 * signature: int __cdecl FUN_00401500(short param_1, short * param_2, short * param_3)
 * body: 00401500-004015c7;004015da-004015f6
 */

int __cdecl FUN_00401500(short param_1,short *param_2,short *param_3)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_24 [4];
  undefined4 local_20;
  int local_1c;
  int local_18;
  int *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_004015c8;
  *unaff_FS_OFFSET = &local_10;
  if (param_1 < 2) {
    local_18 = 0x10000;
  }
  else {
    local_14 = (int *)0x0;
    local_18 = FUN_00455ee0(param_2,(int *)&local_14,(int *)0x0);
    if (local_18 == 0) {
      if ((local_14 == (int *)0x0) || ((*(byte *)((int)local_14 + 0x1e) & 1) == 0)) {
        local_18 = FUN_00454c50(param_3,0);
      }
      else {
        FUN_00458440(local_24,param_2 + 0x16);
        local_8 = 0;
        if (local_1c == 0) {
          iVar1 = (**(code **)(*local_14 + 0xac))(local_20);
          local_18 = FUN_00454c50(param_3,1 - (iVar1 == 0));
          local_8 = 0xffffffff;
          FUN_004015d2();
        }
        else {
          local_8 = 0xffffffff;
          local_18 = local_1c;
          FUN_004015d2();
        }
      }
    }
  }
  *unaff_FS_OFFSET = local_10;
  return local_18;
}


