
/* ==== FUN_0040c970 @ 0040c970 ==== 
 * signature: int __thiscall FUN_0040c970(void * this, int * param_1)
 * body: 0040c970-0040cabc;0040caca-0040cae0;0040cb24-0040cb3b
 */

int __thiscall FUN_0040c970(void *this,int *param_1)

{
  undefined3 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *unaff_FS_OFFSET;
  AFX_EXCEPTION_LINK local_44 [24];
  undefined4 *local_2c;
  int local_20;
  int local_1c;
  char local_15;
  undefined1 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0040cb12;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffffb0;
  local_15 = '\0';
  local_1c = 0;
  if (((param_1 == (int *)0x0) || (*(int *)((int)this + 0x1e) != *(int *)((int)param_1 + 0x1e))) ||
     (*(short *)((int)this + 0x22) != *(short *)((int)param_1 + 0x22))) {
    local_1c = 0x9000e;
  }
  else {
    AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_44);
    local_8._1_3_ = 0;
    uVar1 = local_8._1_3_;
    local_8._0_1_ = 1;
    local_8._1_3_ = 0;
    if (DAT_004d95bc == (undefined4 *)0x0) {
      local_2c = FUN_00412c20(0x4a);
      local_8._0_1_ = 2;
      puVar2 = (undefined4 *)0x0;
      if (local_2c != (undefined4 *)0x0) {
        puVar2 = FUN_0042f970(local_2c,0x2e,0x200,'\0',0,'\0');
      }
      local_15 = '\x01';
      DAT_004d95bc = puVar2;
      DAT_004d95c0 = this;
      uVar1 = local_8._1_3_;
    }
    local_8._1_3_ = uVar1;
    local_8._0_1_ = 1;
    piVar3 = (int *)(**(code **)(*(int *)this + 0x184))();
    piVar4 = (int *)(**(code **)(*param_1 + 0x184))();
    while (piVar3 != (int *)0x0) {
      local_20 = (**(code **)(*piVar3 + 0xe8))(piVar4);
      local_1c = local_20;
      if (local_20 != 0) {
        local_8 = 0xffffffff;
        FUN_0040cb1c();
        local_1c = local_20;
        goto LAB_0040cb29;
      }
      piVar3 = (int *)(**(code **)(*piVar3 + 0x17c))();
      piVar4 = (int *)(**(code **)(*piVar4 + 0x17c))();
    }
    (**(code **)(*(int *)this + 0xe4))(param_1);
    if (local_15 != '\0') {
      FUN_0046a6d0(param_1,(int)this,(int)DAT_004d95bc);
      if (DAT_004d95bc != (undefined4 *)0x0) {
        (**(code **)*DAT_004d95bc)(1);
      }
      DAT_004d95bc = (undefined4 *)0x0;
    }
    local_8 = 0xffffffff;
    FUN_0040cb1c();
  }
LAB_0040cb29:
  *unaff_FS_OFFSET = local_10;
  return local_1c;
}


