
/* ==== FUN_00461170 @ 00461170 ==== 
 * signature: undefined __fastcall FUN_00461170(int * param_1)
 * body: 00461170-00461340
 */

void __fastcall FUN_00461170(int *param_1)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined **local_50 [4];
  short local_40;
  short local_3e;
  AFX_EXCEPTION_LINK local_38 [8];
  undefined4 local_30;
  undefined4 local_2c;
  code *local_24;
  int local_20;
  int local_1c;
  int *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00461355;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffffa4;
  if (*(int *)((int)param_1 + 0x3a) != 0) {
    local_20 = *param_1;
    local_18 = param_1;
    (**(code **)(local_20 + 0x398))(&local_30,0);
    if (((short)local_30 < (short)local_2c) && (local_30._2_2_ < local_2c._2_2_)) {
      local_1c = FUN_004084c0(*(int *)((int)local_18 + 0x3a));
      (**(code **)(local_20 + 0x38c))(&local_40,0);
      local_30 = CONCAT22(local_30._2_2_ + -local_3e,(short)local_30 + -local_40);
      local_2c = CONCAT22(local_2c._2_2_ + -local_3e,(short)local_2c + -local_40);
      local_24 = *(code **)(local_20 + 0x3c8);
      (*local_24)();
      cVar1 = FUN_0047a890();
      if (cVar1 != '\0') {
        AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_38);
        local_8._0_1_ = 1;
        local_8._1_3_ = 0;
        (**(code **)(**(int **)((int)local_18 + 0x5a) + 0x300))
                  (local_1c,&local_30,&local_30,&local_30,0,0,0);
        if ((*(byte *)(local_18 + 0x27) & 0x40) != 0) {
          local_50[0] = &PTR_FUN_004be070;
          local_8._0_1_ = 2;
          FUN_00430500(local_50,0);
          FUN_0043c9e0(local_18,local_50);
          FUN_00430720(local_50,FUN_00461150);
          local_8._0_1_ = 1;
          FUN_00461341();
        }
        local_18[0x33] = local_30;
        local_18[0x34] = local_2c;
        local_18[0x35] = 0x480000;
        local_18[0x36] = 0x480000;
        uVar2 = (*local_24)();
        *(undefined2 *)(local_18 + 0x37) = uVar2;
        *(undefined4 *)((int)local_18 + 0xde) = 0;
        *(undefined2 *)((int)local_18 + 0xe2) = 0;
        local_18[0x39] = 0;
        *(undefined1 *)((int)local_18 + 0xcb) = 0;
        FUN_0047bcd0();
        (**(code **)(local_20 + 0xc4))(0,1);
        local_8 = 0xffffffff;
        FUN_0046135f();
        FUN_0047ac00(local_1c);
      }
    }
  }
  *unaff_FS_OFFSET = local_10;
  return;
}


