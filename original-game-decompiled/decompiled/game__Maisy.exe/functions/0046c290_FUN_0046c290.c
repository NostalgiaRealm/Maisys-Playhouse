
/* ==== FUN_0046c290 @ 0046c290 ==== 
 * signature: int __thiscall FUN_0046c290(void * this, int * param_1)
 * body: 0046c290-0046c41d;0046c42b-0046c4a7;0046c4eb-0046c502
 */

int __thiscall FUN_0046c290(void *this,int *param_1)

{
  uint uVar1;
  undefined3 uVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *unaff_FS_OFFSET;
  int local_78 [8];
  int local_58;
  int *local_54;
  int local_50;
  byte local_4c;
  AFX_EXCEPTION_LINK local_48 [24];
  undefined4 *local_30;
  int local_24;
  int local_20;
  int *local_1c;
  char local_15;
  undefined1 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0046c4d9;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffff7c;
  local_15 = '\0';
  local_20 = 0;
  if (((param_1 == (int *)0x0) || (*(int *)((int)this + 0x1e) != *(int *)((int)param_1 + 0x1e))) ||
     (*(short *)((int)this + 0x22) != *(short *)((int)param_1 + 0x22))) {
    local_20 = 0x9000e;
  }
  else {
    local_1c = this;
    AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_48);
    local_8._1_3_ = 0;
    uVar2 = local_8._1_3_;
    local_8._0_1_ = 1;
    local_8._1_3_ = 0;
    if (DAT_004d95bc == (int *)0x0) {
      local_30 = FUN_00412c20(0x4a);
      local_8._0_1_ = 2;
      piVar3 = (int *)0x0;
      if (local_30 != (undefined4 *)0x0) {
        piVar3 = FUN_0042f970(local_30,0x2e,0x200,'\0',0,'\0');
      }
      local_15 = '\x01';
      DAT_004d95c0 = local_1c;
      DAT_004d95bc = piVar3;
      uVar2 = local_8._1_3_;
    }
    local_8._1_3_ = uVar2;
    local_8._0_1_ = 1;
    piVar3 = (int *)(**(code **)(*local_1c + 0x184))();
    piVar4 = (int *)(**(code **)(*param_1 + 0x184))();
    while (piVar3 != (int *)0x0) {
      local_24 = (**(code **)(*piVar3 + 0xe8))(piVar4);
      local_20 = local_24;
      if (local_24 != 0) {
        local_8 = 0xffffffff;
        FUN_0046c4e3();
        local_20 = local_24;
        goto LAB_0046c4f0;
      }
      piVar3 = (int *)(**(code **)(*piVar3 + 0x17c))();
      piVar4 = (int *)(**(code **)(*piVar4 + 0x17c))();
    }
    if (DAT_004d95bc != (int *)0x0) {
      FUN_0043e610(param_1,8,local_78,&local_58,DAT_004d95c0);
      local_54 = local_1c;
      uVar1 = *(uint *)((int)param_1 + 0x1e);
      local_4c = local_4c ^ ((byte)((uVar1 & 0x10) >> 4) ^ local_4c) & 1;
      local_4c = local_4c ^ (((uVar1 & 0x20000000) == 0) * -2 + 2U ^ local_4c) & 2;
      local_4c = local_4c ^ ((char)((uVar1 & 2) >> 1) << 2 ^ local_4c) & 4;
      if ((((local_4c & 4) == 0) || ((short)param_1[0x18] != 0)) ||
         (((uVar1 & 0x40000000) != 0 || (*(short *)((int)param_1 + 0x22) == 0x43)))) {
        local_4c = local_4c & 0xf7;
      }
      else {
        local_4c = local_4c | 8;
      }
      local_50 = local_1c[3];
      (**(code **)(*DAT_004d95bc + 0xe8))(local_78);
    }
    if (local_15 != '\0') {
      FUN_0046a6d0(param_1,(int)local_1c,(int)DAT_004d95bc);
      if (DAT_004d95bc != (int *)0x0) {
        (**(code **)*DAT_004d95bc)(1);
      }
      DAT_004d95bc = (int *)0x0;
    }
    local_8 = 0xffffffff;
    FUN_0046c4e3();
  }
LAB_0046c4f0:
  *unaff_FS_OFFSET = local_10;
  return local_20;
}


