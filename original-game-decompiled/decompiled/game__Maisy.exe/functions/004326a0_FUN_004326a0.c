
/* ==== FUN_004326a0 @ 004326a0 ==== 
 * signature: int __cdecl FUN_004326a0(short * param_1, short * param_2, short * param_3, short * param_4)
 * body: 004326a0-00432867
 */

int __cdecl FUN_004326a0(short *param_1,short *param_2,short *param_3,short *param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  size_t sVar5;
  char *pcVar6;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_34;
  char *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  HLOCAL local_18;
  int local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00432868;
  *unaff_FS_OFFSET = &local_10;
  iVar2 = FUN_004562d0(param_1,&local_24,&local_28,(int *)0x0);
  if (iVar2 != 0) {
    local_14 = FUN_00455c10(param_1,&local_24,(int *)0x0);
    if (local_14 != 0) goto LAB_0043272b;
    local_28 = local_24;
  }
  FUN_004583c0(&local_34);
  local_8 = 0;
  if (param_3 != (short *)0x0) {
    FUN_004583d0(&local_34,param_3);
    if (local_2c != 0) {
      local_8 = 0xffffffff;
      local_14 = local_2c;
      FUN_00432872();
      goto LAB_0043272b;
    }
  }
  local_18 = (HLOCAL)0x0;
  local_14 = FUN_00432220(param_2,&local_18);
  if (local_14 == 0) {
    pcVar3 = LocalLock(local_18);
    uVar4 = 0xffffffff;
    pcVar6 = pcVar3;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar2 = ~uVar4 - 1;
    sVar5 = 0;
    if (local_30 != (char *)0x0) {
      uVar4 = 0xffffffff;
      pcVar6 = local_30;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      sVar5 = ~uVar4 - 1;
    }
    FUN_00431a60(local_24,local_28,iVar2,&local_1c,&local_20);
    local_14 = (sVar5 - local_20) + iVar2;
    if (iVar2 < local_14) {
      LocalUnlock(local_18);
      FUN_0043f730(local_18,local_14 + 1);
      pcVar3 = LocalLock(local_18);
    }
    if (local_14 != iVar2) {
      FUN_0043f500(pcVar3 + local_1c + sVar5,pcVar3 + local_20 + local_1c,
                   ((iVar2 - local_20) - local_1c) + 1);
    }
    if (sVar5 != 0) {
      FUN_0043f500(pcVar3 + local_1c,local_30,sVar5);
    }
    local_14 = FUN_00454fa0(param_4,pcVar3);
    LocalUnlock(local_18);
    FUN_0043f720(local_18);
    local_8 = 0xffffffff;
    FUN_00432872();
  }
  else {
    local_8 = 0xffffffff;
    FUN_00432872();
  }
LAB_0043272b:
  *unaff_FS_OFFSET = local_10;
  return local_14;
}


