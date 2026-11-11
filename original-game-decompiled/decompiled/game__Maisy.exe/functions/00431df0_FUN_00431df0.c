
/* ==== FUN_00431df0 @ 00431df0 ==== 
 * signature: int __cdecl FUN_00431df0(short param_1, short * param_2, short * param_3)
 * body: 00431df0-00431ee2
 */

int __cdecl FUN_00431df0(short param_1,short *param_2,short *param_3)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_30 [4];
  char *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00431ee3;
  *unaff_FS_OFFSET = &local_10;
  if (param_1 == 2) {
    local_14 = FUN_004562d0(param_2,&local_18,&local_1c,(int *)0x0);
    if (local_14 != 0) {
      local_14 = FUN_00455c10(param_2,&local_18,(int *)0x0);
      if (local_14 != 0) goto LAB_00431e19;
      local_1c = local_18;
    }
    FUN_00458440(local_30,param_2 + 0x16);
    local_8 = 0;
    if (local_28 == 0) {
      uVar2 = 0xffffffff;
      pcVar3 = local_2c;
      do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      FUN_00431a60(local_18,local_1c,~uVar2 - 1,&local_20,&local_24);
      local_14 = FUN_00431b20((int)local_2c,local_20,local_24,param_3);
      local_8 = 0xffffffff;
      FUN_00431eed();
    }
    else {
      local_8 = 0xffffffff;
      FUN_00431eed();
    }
  }
  else {
    local_14 = 0x10000;
  }
LAB_00431e19:
  *unaff_FS_OFFSET = local_10;
  return local_14;
}


