
/* ==== FUN_00462d50 @ 00462d50 ==== 
 * signature: undefined1 __thiscall FUN_00462d50(void * this, int param_1, int param_2, short * param_3, int * param_4)
 * body: 00462d50-00462fd5
 */

undefined1 __thiscall FUN_00462d50(void *this,int param_1,int param_2,short *param_3,int *param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  short local_3c [19];
  short local_16 [5];
  undefined4 local_c;
  char local_5;
  
  local_5 = '\x01';
  if (param_1 < 0x3ea) {
    if (param_1 == 0x3e9) {
      psVar4 = param_3;
      psVar5 = local_3c;
      for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined4 *)psVar5 = *(undefined4 *)psVar4;
        psVar4 = psVar4 + 2;
        psVar5 = psVar5 + 2;
      }
      *psVar5 = *psVar4;
      local_c = *(undefined4 *)((int)this + 0xc2);
      iVar3 = FUN_00414340(this,local_3c,1);
      if ((char)iVar3 == '\0') {
        local_c._2_2_ = local_c._2_2_ + 0x14;
      }
      else {
        local_c._2_2_ = local_c._2_2_ + local_3c[1];
      }
      (**(code **)(*(int *)this + 0x394))(&local_c);
    }
    else if (param_1 == 0xde) {
      if ((*(byte *)((int)this + 0x9c) & 2) == 0) {
        iVar3 = *(int *)this;
        (**(code **)(iVar3 + 0x358))(1,1);
        if ((*(int *)((int)this + 0x3a) != 0) && (*(char *)((int)this + 0x146) != '\0')) {
          uVar2 = FUN_00460d70(this);
          if ((char)uVar2 == '\0') {
            (**(code **)(iVar3 + 0x38c))(local_16,1);
            FUN_004087c0(*(void **)((int)this + 0x3a),local_16,'\x01');
          }
        }
      }
    }
    else if (param_1 == 0xdf) {
      if ((*(byte *)((int)this + 0x9c) & 2) == 0) {
        (**(code **)(*(int *)this + 0x140))(1);
      }
      else {
        iVar3 = *(int *)this;
        (**(code **)(iVar3 + 0x358))(0,1);
        if ((*(int *)((int)this + 0x3a) != 0) && (*(char *)((int)this + 0x146) != '\0')) {
          uVar2 = FUN_00460d70(this);
          if ((char)uVar2 == '\0') {
            (**(code **)(iVar3 + 0x38c))(local_16,1);
            FUN_004087c0(*(void **)((int)this + 0x3a),local_16,'\x01');
          }
        }
      }
    }
    else {
      local_5 = '\0';
    }
  }
  else if (param_1 == 0x3ea) {
    psVar4 = param_3;
    psVar5 = local_3c;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)psVar5 = *(undefined4 *)psVar4;
      psVar4 = psVar4 + 2;
      psVar5 = psVar5 + 2;
    }
    *psVar5 = *psVar4;
    local_c = *(undefined4 *)((int)this + 0xc2);
    iVar3 = FUN_00414340(this,local_3c,1);
    if ((char)iVar3 == '\0') {
      local_c._2_2_ = local_c._2_2_ + -0x14;
    }
    else {
      local_c._2_2_ = local_c._2_2_ - local_3c[1];
    }
    (**(code **)(*(int *)this + 0x394))(&local_c);
  }
  else if (param_1 == 0x3ed) {
    psVar4 = param_3;
    psVar5 = local_3c;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)psVar5 = *(undefined4 *)psVar4;
      psVar4 = psVar4 + 2;
      psVar5 = psVar5 + 2;
    }
    *psVar5 = *psVar4;
    local_c = *(undefined4 *)((int)this + 0xc2);
    iVar3 = FUN_00414340(this,local_3c,1);
    if ((char)iVar3 == '\0') {
      local_c._0_2_ = (short)local_c + -0x14;
    }
    else {
      local_c._0_2_ = (short)local_c - local_3c[1];
    }
    (**(code **)(*(int *)this + 0x394))(&local_c);
  }
  else if (param_1 == 0x3ee) {
    psVar4 = param_3;
    psVar5 = local_3c;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)psVar5 = *(undefined4 *)psVar4;
      psVar4 = psVar4 + 2;
      psVar5 = psVar5 + 2;
    }
    *psVar5 = *psVar4;
    local_c = *(undefined4 *)((int)this + 0xc2);
    iVar3 = FUN_00414340(this,local_3c,1);
    if ((char)iVar3 == '\0') {
      local_c._0_2_ = (short)local_c + 0x14;
    }
    else {
      local_c._0_2_ = (short)local_c + local_3c[1];
    }
    (**(code **)(*(int *)this + 0x394))(&local_c);
  }
  else {
    local_5 = '\0';
  }
  if (local_5 == '\0') {
    uVar1 = FUN_0046bad0(this,param_1,param_2,param_3,param_4);
    return uVar1;
  }
  return 1;
}


