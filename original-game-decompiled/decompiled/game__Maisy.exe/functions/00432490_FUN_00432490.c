
/* ==== FUN_00432490 @ 00432490 ==== 
 * signature: int __cdecl FUN_00432490(short * param_1, short * param_2, short * param_3, short * param_4)
 * body: 00432490-004325bf
 */

int __cdecl FUN_00432490(short *param_1,short *param_2,short *param_3,short *param_4)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  undefined4 *unaff_FS_OFFSET;
  bool bVar4;
  undefined1 local_30 [4];
  byte *local_2c;
  int local_28;
  undefined1 local_24 [4];
  byte *local_20;
  int local_1c;
  int local_18;
  char local_11;
  undefined4 local_10;
  code *pcStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_004325c8;
  *unaff_FS_OFFSET = &local_10;
  local_11 = '\0';
  if ((param_3 == (short *)0x0) ||
     (local_18 = FUN_00455730(param_3,&local_11,(int *)0x0), local_18 == 0)) {
    FUN_00458440(local_24,param_1);
    local_8 = 0;
    FUN_00458440(local_30,param_2);
    local_8._0_1_ = 1;
    if (local_1c == 0) {
      if (local_28 == 0) {
        if (local_11 == '\0') {
          uVar3 = FUN_0043d430((char *)local_20,(char *)local_2c);
          sVar2 = (short)uVar3;
        }
        else {
          do {
            bVar1 = *local_20;
            bVar4 = bVar1 < *local_2c;
            if (bVar1 != *local_2c) {
LAB_00432571:
              sVar2 = (1 - (ushort)bVar4) - (ushort)(bVar4 != false);
              goto LAB_0043258b;
            }
            if (bVar1 == 0) break;
            bVar1 = local_20[1];
            bVar4 = bVar1 < local_2c[1];
            if (bVar1 != local_2c[1]) goto LAB_00432571;
            local_20 = local_20 + 2;
            local_2c = local_2c + 2;
          } while (bVar1 != 0);
          sVar2 = 0;
        }
LAB_0043258b:
        *param_4 = sVar2;
        sVar2 = *param_4;
        bVar4 = false;
        if (sVar2 < 0) {
          *param_4 = -1;
          sVar2 = *param_4;
          bVar4 = sVar2 < 0;
        }
        if (sVar2 != 0 && !bVar4) {
          *param_4 = 1;
        }
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_004325c0();
        local_8 = 0xffffffff;
        FUN_004325d2();
        local_18 = 0;
      }
      else {
        local_8 = (uint)local_8._1_3_ << 8;
        local_18 = local_28;
        FUN_004325c0();
        local_8 = 0xffffffff;
        FUN_004325d2();
      }
    }
    else {
      local_8 = (uint)local_8._1_3_ << 8;
      local_18 = local_1c;
      FUN_004325c0();
      local_8 = 0xffffffff;
      FUN_004325d2();
    }
  }
  *unaff_FS_OFFSET = local_10;
  return local_18;
}


