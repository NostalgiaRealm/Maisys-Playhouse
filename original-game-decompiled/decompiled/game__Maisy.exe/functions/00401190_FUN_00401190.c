
/* ==== FUN_00401190 @ 00401190 ==== 
 * signature: int __cdecl FUN_00401190(short param_1, short * param_2, undefined4 param_3, int param_4)
 * body: 00401190-004012d2
 */

int __cdecl FUN_00401190(short param_1,short *param_2,undefined4 param_3,int param_4)

{
  short *psVar1;
  undefined4 *unaff_FS_OFFSET;
  char local_38 [20];
  undefined1 local_24 [4];
  char *local_20;
  int local_1c;
  int local_18;
  int *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_004012d3;
  *unaff_FS_OFFSET = &local_10;
  if (param_1 < 2) {
    local_18 = 0x10000;
  }
  else {
    local_14 = (int *)0x0;
    local_18 = FUN_00455ee0(param_2,(int *)&local_14,(int *)0x0);
    if (local_18 == 0) {
      if (local_14 != (int *)0x0) {
        FUN_00458440(local_24,param_2 + 0x16);
        local_8 = 0;
        if (local_1c != 0) {
          local_8 = 0xffffffff;
          local_18 = local_1c;
          FUN_004012dd();
          goto LAB_004012c3;
        }
        FUN_004374f0(local_20,local_38);
        FUN_00437550((int)local_38);
        if (param_4 == 4) {
          if (param_1 < 3) {
            psVar1 = (short *)0x0;
          }
          else {
            psVar1 = param_2 + 0x2c;
          }
          local_18 = (**(code **)(*local_14 + 0x98))(local_38,psVar1,param_3);
          local_8 = 0xffffffff;
          FUN_004012dd();
          goto LAB_004012c3;
        }
        if (param_4 == 2) {
          psVar1 = param_2 + 0x42;
          if (param_1 < 4) {
            psVar1 = (short *)0x0;
          }
          local_18 = (**(code **)(*local_14 + 0x9c))(local_38,psVar1,param_2 + 0x2c);
          local_8 = 0xffffffff;
          FUN_004012dd();
          goto LAB_004012c3;
        }
        local_8 = 0xffffffff;
        FUN_004012dd();
      }
      local_18 = 0;
    }
  }
LAB_004012c3:
  *unaff_FS_OFFSET = local_10;
  return local_18;
}


