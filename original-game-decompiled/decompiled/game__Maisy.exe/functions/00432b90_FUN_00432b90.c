
/* ==== FUN_00432b90 @ 00432b90 ==== 
 * signature: int __cdecl FUN_00432b90(short param_1, short * param_2, short * param_3)
 * body: 00432b90-00432d16;00432d31-00432d46
 */

int __cdecl FUN_00432b90(short param_1,short *param_2,short *param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  int *unaff_FS_OFFSET;
  undefined1 local_34 [4];
  char *local_30;
  int local_2c;
  undefined1 local_28 [4];
  char *local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_11;
  undefined1 uStack_d;
  code *pcStack_c;
  uint local_8;
  
  iVar4 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00432d1f;
  local_11 = iVar4 << 8;
  uStack_d = (undefined1)((uint)iVar4 >> 0x18);
  *unaff_FS_OFFSET = (int)&local_11 + 1;
  if ((param_1 < 2) || (4 < param_1)) {
    local_18 = 0x10000;
  }
  else {
    local_11 = iVar4 << 8;
    if (((param_1 < 3) ||
        (local_18 = FUN_00455730(param_2 + 0x2c,(char *)&local_11,(int *)0x0), local_18 == 0)) &&
       ((local_1c = 1, param_1 < 4 ||
        (local_18 = FUN_00455c10(param_2 + 0x42,&local_1c,(int *)0x0), local_18 == 0)))) {
      FUN_00458440(local_34,param_2 + 0x16);
      local_8 = 0;
      FUN_00458440(local_28,param_2);
      local_8 = CONCAT31(local_8._1_3_,1);
      if (local_2c == 0) {
        if (local_20 == 0) {
          iVar4 = -1;
          pcVar2 = local_24;
          do {
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            cVar1 = *pcVar2;
            pcVar2 = pcVar2 + 1;
          } while (cVar1 != '\0');
          if (local_1c < 1) {
            pcVar2 = (char *)FUN_00432940(local_30,local_24,(char)local_11,-local_1c);
          }
          else {
            pcVar2 = FUN_00432a50(local_30,local_24,(char)local_11,local_1c);
          }
          pcVar3 = (char *)0x0;
          pcVar6 = (char *)0x0;
          if (-1 < (int)pcVar2) {
            pcVar6 = pcVar2 + 1;
            uVar5 = 0xffffffff;
            do {
              if (uVar5 == 0) break;
              uVar5 = uVar5 - 1;
              cVar1 = *local_24;
              local_24 = local_24 + 1;
            } while (cVar1 != '\0');
            pcVar3 = pcVar2 + (~uVar5 - 1);
          }
          local_18 = FUN_00454e70(param_3,pcVar6,pcVar3);
          local_8 = local_8 & 0xffffff00;
          FUN_00432d17();
          local_8 = 0xffffffff;
          FUN_00432d29();
        }
        else {
          local_8 = (uint)local_8._1_3_ << 8;
          local_18 = local_20;
          FUN_00432d17();
          local_8 = 0xffffffff;
          FUN_00432d29();
        }
      }
      else {
        local_8 = (uint)local_8._1_3_ << 8;
        local_18 = local_2c;
        FUN_00432d17();
        local_8 = 0xffffffff;
        FUN_00432d29();
      }
    }
  }
  *unaff_FS_OFFSET = CONCAT13(uStack_d,local_11._1_3_);
  return local_18;
}


