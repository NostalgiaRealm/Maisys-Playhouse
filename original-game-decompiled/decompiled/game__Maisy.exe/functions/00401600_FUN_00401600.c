
/* ==== FUN_00401600 @ 00401600 ==== 
 * signature: uint __cdecl FUN_00401600(short param_1, short * param_2, undefined4 param_3, int * param_4)
 * body: 00401600-0040170b;00401714-0040188c;0040189f-004018b3
 */

uint __cdecl FUN_00401600(short param_1,short *param_2,undefined4 param_3,int *param_4)

{
  char *pcVar1;
  uint uVar2;
  code *pcVar3;
  short *psVar4;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_a8 [84];
  undefined1 local_54 [2];
  int *local_52;
  undefined1 local_40 [12];
  undefined1 local_34 [4];
  int local_30;
  uint local_2c;
  int local_28;
  undefined1 local_24 [4];
  char *local_20;
  uint local_1c;
  int *local_18;
  uint local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0040188d;
  *unaff_FS_OFFSET = &local_10;
  if (0 < param_1) {
    local_14 = 0;
    if (3 < param_1) {
      FUN_00458440(local_24,param_2 + 0x42);
      local_8 = 0;
      if (local_1c != 0) {
        local_8 = 0xffffffff;
        local_14 = local_1c;
        FUN_0040170c();
        uVar2 = local_14;
        goto LAB_004018a4;
      }
      pcVar1 = _strchr(local_20,0x6e);
      if (pcVar1 == (char *)0x0) {
        pcVar1 = _strchr(local_20,0x69);
        if (pcVar1 == (char *)0x0) {
          local_14 = 0x80000000;
        }
        pcVar1 = _strchr(local_20,99);
        if (pcVar1 == (char *)0x0) {
          local_14 = local_14 | 0x40000000;
        }
        pcVar1 = _strchr(local_20,0x72);
        if (pcVar1 == (char *)0x0) {
          local_14 = local_14 | 0x20000000;
        }
      }
      else {
        local_14 = 0xe0000000;
      }
      local_8 = 0xffffffff;
      FUN_0040170c();
    }
    local_18 = (int *)0x0;
    if (param_1 < 3) {
      local_18 = (int *)(**(code **)(*param_4 + 0x170))();
    }
    else {
      uVar2 = FUN_00455ee0(param_2 + 0x2c,(int *)&local_18,(int *)0x0);
      if (uVar2 != 0) goto LAB_004018a4;
    }
    if ((local_18 != (int *)0x0) && ((*(byte *)((int)local_18 + 0x1e) & 1) != 0)) {
      pcVar3 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 0x10),1,0x30,(int *)&local_1c);
      DAT_004e34cc = (*pcVar3)(local_1c,local_54,0x69);
      local_52 = local_18;
      FUN_00458440(local_34,param_2);
      local_8 = 1;
      if (local_2c == 0) {
        local_1c = FUN_0048c530(local_18,local_30,(int)local_40);
        if (local_1c == 0) {
          pcVar3 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 0x10),1,0x16,&local_28);
          psVar4 = (short *)0x0;
          if (1 < param_1) {
            psVar4 = param_2 + 0x16;
          }
          DAT_004e34cc = (*pcVar3)(local_28,param_4,local_54,local_40,psVar4,local_14,local_a8);
          if (DAT_004e34cc == 0) {
            pcVar3 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 0x10),1,0x17,(int *)&local_14);
            DAT_004e34cc = (*pcVar3)(local_14,param_4,local_a8);
            local_8 = 0xffffffff;
            if (DAT_004e34cc == 0) {
              FUN_00401897();
              uVar2 = 0;
            }
            else {
              FUN_00401897();
              uVar2 = local_1c;
            }
          }
          else {
            local_8 = 0xffffffff;
            FUN_00401897();
            uVar2 = local_1c;
          }
        }
        else {
          local_8 = 0xffffffff;
          FUN_00401897();
          uVar2 = local_1c;
        }
      }
      else {
        local_8 = 0xffffffff;
        local_14 = local_2c;
        FUN_00401897();
        uVar2 = local_14;
      }
      goto LAB_004018a4;
    }
  }
  uVar2 = 0x10000;
LAB_004018a4:
  *unaff_FS_OFFSET = local_10;
  return uVar2;
}


