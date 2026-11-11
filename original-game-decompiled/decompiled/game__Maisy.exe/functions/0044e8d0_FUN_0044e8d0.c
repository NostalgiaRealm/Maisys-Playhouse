
/* ==== FUN_0044e8d0 @ 0044e8d0 ==== 
 * signature: undefined __thiscall FUN_0044e8d0(void * this, void * param_1, undefined4 param_2, undefined4 * param_3)
 * body: 0044e8d0-0044ebae
 */

void __thiscall FUN_0044e8d0(void *this,void *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  LPVOID *ppvVar5;
  undefined4 local_78 [4];
  uint local_66;
  int local_60 [4];
  undefined4 local_50;
  undefined4 local_4c [3];
  undefined4 local_40;
  LPVOID local_3c [6];
  byte local_24;
  undefined1 local_20 [4];
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  if (*(short *)((int)param_1 + 0x16c) < 1) {
    FUN_0044d6a0(this);
  }
  if (*(short *)(param_3 + 1) == 0) {
    iVar3 = 0;
    FUN_00486dd0(param_1,local_4c,param_3,0x10);
    if (0 < local_40._2_2_) {
      do {
        iVar3 = iVar3 + 1;
        FUN_00486e50(param_1,local_60);
        FUN_0044ebb0(this,(int)param_1,param_2,local_60);
      } while (iVar3 < local_40._2_2_);
    }
  }
  else if (*(short *)(param_3 + 1) == 1) {
    iVar3 = 0;
    FUN_00486dd0(param_1,&local_50,param_3,0x14);
    if (0 < local_40._2_2_) {
      do {
        iVar3 = iVar3 + 1;
        FUN_00486e50(param_1,local_60);
        FUN_0044ebb0(this,(int)param_1,param_2,local_60);
      } while (iVar3 < local_40._2_2_);
    }
  }
  else {
    local_8 = 0;
    local_40 = 0;
    uVar4 = 0;
    FUN_00486dd0(param_1,local_78,param_3,0x16);
    (**(code **)(**(int **)((int)this + 0x30) + 0xf4))(local_66);
    if (local_66 != 0) {
      do {
        ppvVar5 = local_3c;
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          *ppvVar5 = (LPVOID)0x0;
          ppvVar5 = ppvVar5 + 1;
        }
        *(undefined2 *)ppvVar5 = 0;
        if (*(short *)(param_3 + 1) == 2) {
          FUN_00486d60(param_1,local_20,0x10);
          local_10 = 0;
          local_c = 0;
        }
        else if (*(short *)(param_3 + 1) == 3) {
          FUN_00486d60(param_1,local_20,0x18);
          local_10 = 0;
          local_c = 0;
        }
        else {
          FUN_00486d60(param_1,local_20,0x18);
        }
        if ((ushort)local_1c < 0x21) {
          if ((ushort)local_1c == 0) goto LAB_0044ea84;
          local_3c[3] = (LPVOID)FUN_0043b950(local_1c & 0xffff);
          FUN_00486d60(param_1,local_3c[3],local_1c & 0xffff);
        }
        else {
          FUN_00486d40(param_1,local_1c & 0xffff);
          local_1c = local_1c & 0xffff0000;
LAB_0044ea84:
          local_3c[3] = (LPVOID)0x0;
        }
        local_24 = local_24 ^ (local_20[0] & 1 ^ local_24) & 1;
        if ((local_24 & 1) == 0) {
          local_40 = uVar4 + 1;
          local_3c[4] = (LPVOID)local_10;
          local_3c[5] = (LPVOID)local_c;
        }
        else {
          FUN_0043ba20(local_3c[3]);
          local_3c[3] = (LPVOID)0x0;
          local_3c[4] = (LPVOID)0x68;
          if (local_8 < 1) {
            *(uint *)((int)this + 0x42) = uVar4 + 1;
          }
          else {
            FUN_00430190(*(int *)((int)this + 0x30));
            iVar3 = FUN_004301c0(*(void **)((int)this + 0x30),local_8);
            *(uint *)(iVar3 + 0xc) = uVar4 + 1;
            FUN_004301f0(*(int *)((int)this + 0x30));
          }
          local_3c[3] = (LPVOID)0x0;
          local_8 = uVar4 + 1;
        }
        uVar4 = uVar4 + 1;
        local_3c[1] = (LPVOID)local_18;
        local_3c[2] = (LPVOID)local_14;
        local_3c[0] = (LPVOID)0x0;
        (**(code **)(**(int **)((int)this + 0x30) + 0xe8))(local_3c);
      } while (uVar4 < local_66);
    }
    if ((*(int *)((int)this + 0x42) != 0) && (local_40 < local_66)) {
      FUN_00430110(*(void **)((int)this + 0x30),local_40 + 1,local_66 - local_40);
      iVar3 = FUN_0044e340((int)this);
      if (iVar3 < *(int *)((int)this + 0x42)) {
        *(undefined4 *)((int)this + 0x42) = 0;
      }
      else {
        FUN_00430190(*(int *)((int)this + 0x30));
        iVar2 = *(int *)((int)this + 0x42);
        do {
          iVar1 = FUN_004301c0(*(void **)((int)this + 0x30),iVar2);
          iVar2 = *(int *)(iVar1 + 0xc);
          if (iVar3 < iVar2) break;
        } while (iVar2 != 0);
        *(undefined4 *)(iVar1 + 0xc) = 0;
        FUN_004301f0(*(int *)((int)this + 0x30));
      }
    }
  }
  (**(code **)(*(int *)this + 0x1c))(0);
  return;
}


