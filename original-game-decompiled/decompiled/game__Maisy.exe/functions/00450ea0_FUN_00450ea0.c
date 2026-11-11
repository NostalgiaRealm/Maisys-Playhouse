
/* ==== FUN_00450ea0 @ 00450ea0 ==== 
 * signature: undefined __thiscall FUN_00450ea0(void * this, int * param_1, undefined4 param_2, undefined4 * param_3)
 * body: 00450ea0-00450fc6;00450fd4-004510c2
 */

void __thiscall FUN_00450ea0(void *this,int *param_1,undefined4 param_2,undefined4 *param_3)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_88 [3];
  short local_7a;
  int *local_74;
  undefined4 local_70;
  undefined4 *local_6c;
  int local_64;
  uint local_5e;
  int local_5a;
  AFX_EXCEPTION_LINK local_54 [28];
  int *local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  byte *local_2c;
  int *local_28;
  int *local_24;
  int *local_20;
  short local_18;
  undefined1 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_004510d4;
  *unaff_FS_OFFSET = &local_10;
  local_2c = (byte *)((int)this + 0x30);
  local_14 = &stack0xffffff6c;
  *local_2c = *local_2c & 0xfd;
  local_20 = this;
  FUN_00486dd0(param_1,local_88,param_3,0x14);
  local_18 = local_7a;
  AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_54);
  sVar1 = 1;
  local_8 = 1;
  local_24 = (int *)((int)local_20 + 0x26);
  (**(code **)(*(int *)*local_24 + 0xf4))((int)local_18);
  if (0 < local_18) {
    do {
      local_74 = (int *)0x0;
      local_30 = (undefined4 *)FUN_004a5fed(0xe);
      if (local_30 == (undefined4 *)0x0) {
        local_34 = (undefined4 *)0x0;
      }
      else {
        *local_30 = &PTR_FUN_004be070;
        local_34 = local_30;
      }
      local_8 = CONCAT31((int3)((uint)local_8 >> 8),1);
      local_6c = local_34;
      FUN_00430500(local_34,0);
      (**(code **)(*(int *)*local_24 + 0xe8))(&local_74);
      sVar1 = sVar1 + 1;
    } while (sVar1 <= local_18);
  }
  sVar1 = 1;
  if (0 < local_18) {
    local_38 = (int *)((int)local_20 + 0x2a);
    do {
      piVar2 = (int *)0x0;
      local_28 = (int *)0x0;
      FUN_00486e50(param_1,&local_64);
      iVar3 = (int)sVar1;
      *local_38 = iVar3;
      if (local_64 == -1) {
        if (local_5a != 0xe) {
LAB_00450fe6:
          piVar2 = FUN_00466ac0(param_1,local_5e,&local_64);
          local_28 = piVar2;
        }
      }
      else if ((local_64 != -2) && ((local_5e & 0x20) != 0)) goto LAB_00450fe6;
      if (piVar2 != (int *)0x0) {
        FUN_00430370((void *)*local_24,iVar3,&local_74);
        local_74 = piVar2;
        (**(code **)(*piVar2 + 0x110))(iVar3);
        local_70 = *(undefined4 *)((int)piVar2 + 0x2a);
        FUN_0042ff10((void *)*local_24,iVar3,&local_74);
      }
      sVar1 = sVar1 + 1;
    } while (sVar1 <= local_18);
  }
  iVar3 = FUN_00430190(*local_24);
  sVar1 = 0;
  if (0 < local_18) {
    do {
      if (*(int *)(sVar1 * 0x10 + iVar3) != 0) {
        (**(code **)(*local_74 + 0x110))(sVar1 + 1);
      }
      sVar1 = sVar1 + 1;
    } while (sVar1 < local_18);
  }
  FUN_004301f0(*local_24);
  local_8 = 0xffffffff;
  FUN_004510de();
  *local_2c = *local_2c | 2;
  *(undefined4 *)((int)local_20 + 0x2a) = 0xffffffff;
  (**(code **)(*local_20 + 0x1c))(0);
  *unaff_FS_OFFSET = local_10;
  return;
}


