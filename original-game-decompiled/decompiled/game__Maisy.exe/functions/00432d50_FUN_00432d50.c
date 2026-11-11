
/* ==== FUN_00432d50 @ 00432d50 ==== 
 * signature: int __cdecl FUN_00432d50(short param_1, short * param_2, short * param_3)
 * body: 00432d50-00432e8f;00432eaa-00432ebf
 */

int __cdecl FUN_00432d50(short param_1,short *param_2,short *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  undefined1 local_30 [4];
  char *local_2c;
  int local_28;
  undefined1 local_24 [4];
  char *local_20;
  int local_1c;
  int local_18;
  undefined4 local_11;
  undefined1 uStack_d;
  code *pcStack_c;
  int local_8;
  
  iVar6 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00432e98;
  local_11 = iVar6 << 8;
  uStack_d = (undefined1)((uint)iVar6 >> 0x18);
  *unaff_FS_OFFSET = (int)&local_11 + 1;
  if ((param_1 < 2) || (3 < param_1)) {
    local_18 = 0x10000;
  }
  else {
    local_11 = iVar6 << 8;
    if ((param_1 < 3) ||
       (local_18 = FUN_00455730(param_2 + 0x2c,(char *)&local_11,(int *)0x0), local_18 == 0)) {
      FUN_00458440(local_24,param_2 + 0x16);
      local_8 = 0;
      FUN_00458440(local_30,param_2);
      local_8._0_1_ = 1;
      if (local_1c == 0) {
        if (local_28 == 0) {
          pcVar4 = (char *)0x0;
          uVar3 = 0xffffffff;
          pcVar5 = local_2c;
          do {
            if (uVar3 == 0) break;
            uVar3 = uVar3 - 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          iVar6 = 0;
          pcVar5 = local_20;
          while (-1 < (int)pcVar4) {
            iVar2 = FUN_00432ab0(pcVar5,local_2c,(char)local_11);
            if (iVar2 < 0) {
              pcVar4 = (char *)0xffffffff;
            }
            else {
              iVar6 = iVar6 + 1;
              pcVar4 = pcVar5 + (iVar2 - (int)local_20);
              pcVar5 = pcVar5 + iVar2 + (~uVar3 - 1);
            }
          }
          local_18 = FUN_00454d00(param_3,iVar6);
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_00432e90();
          local_8 = 0xffffffff;
          FUN_00432ea2();
        }
        else {
          local_8 = (uint)local_8._1_3_ << 8;
          local_18 = local_28;
          FUN_00432e90();
          local_8 = 0xffffffff;
          FUN_00432ea2();
        }
      }
      else {
        local_8 = (uint)local_8._1_3_ << 8;
        local_18 = local_1c;
        FUN_00432e90();
        local_8 = 0xffffffff;
        FUN_00432ea2();
      }
    }
  }
  *unaff_FS_OFFSET = CONCAT13(uStack_d,local_11._1_3_);
  return local_18;
}


