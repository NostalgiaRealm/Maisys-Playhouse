
/* ==== FUN_0041d550 @ 0041d550 ==== 
 * signature: undefined __thiscall FUN_0041d550(void * this, int param_1, undefined4 param_2, int * param_3)
 * body: 0041d550-0041d6fd
 */

void __thiscall FUN_0041d550(void *this,int param_1,undefined4 param_2,int *param_3)

{
  undefined4 *puVar1;
  short sVar2;
  void *pvVar3;
  undefined2 uVar4;
  undefined4 *unaff_FS_OFFSET;
  AFX_EXCEPTION_LINK local_30 [8];
  undefined4 local_28;
  undefined4 local_24;
  int local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0041d71e;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffffc4;
  local_28 = *param_3;
  local_24 = param_3[1];
  local_1c = *(int *)this;
  local_18 = this;
  (**(code **)(local_1c + 0x114))();
  if (((short)param_3[1] <= (short)*param_3) ||
     (*(short *)((int)param_3 + 6) <= *(short *)((int)param_3 + 2))) {
    local_28._2_2_ = (short)((uint)*(undefined4 *)((int)local_18 + 0xb8) >> 0x10);
    sVar2 = local_28._2_2_;
    local_28._0_2_ = (short)*(undefined4 *)((int)local_18 + 0xb8);
    local_24._0_2_ = (short)*(undefined4 *)((int)local_18 + 0xbc);
    local_24._0_2_ = (short)local_24 - (short)local_28;
    local_24._2_2_ = (short)((uint)*(undefined4 *)((int)local_18 + 0xbc) >> 0x10);
    local_28 = 0;
    local_24 = CONCAT22(local_24._2_2_ - sVar2,(short)local_24);
  }
  *(int *)((int)local_18 + 0xf4) = local_28;
  *(int *)((int)local_18 + 0xf8) = local_24;
  puVar1 = (undefined4 *)((int)local_18 + 0x106);
  *(undefined4 *)((int)local_18 + 0xfc) = 0x480000;
  *(undefined4 *)((int)local_18 + 0x100) = 0x480000;
  if ((LPVOID)*puVar1 != (LPVOID)0x0) {
    FUN_00434950((LPVOID)*puVar1);
    *puVar1 = 0;
  }
  *(undefined2 *)((int)local_18 + 0x10a) = 0;
  *puVar1 = 0;
  *(undefined4 *)((int)local_18 + 0x10c) = 0;
  *(undefined1 *)((int)local_18 + 0xf3) = 0;
  AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_30);
  pvVar3 = local_18;
  local_8 = 1;
  uVar4 = (**(code **)(local_1c + 0x1d8))();
  *(undefined2 *)((int)pvVar3 + 0x104) = uVar4;
  FUN_0047a890();
  FUN_0043c8a0();
  FUN_0043c8b0();
  (**(code **)(local_1c + 0x1f0))(0,&local_28);
  (**(code **)(local_1c + 0x1f8))(1);
  FUN_0047bcd0();
  (**(code **)(local_1c + 0x1d4))();
  (**(code **)(local_1c + 0xc4))(0,1);
  local_8 = 0xffffffff;
  FUN_0041d728();
  FUN_0047ac00(param_1);
  *unaff_FS_OFFSET = local_10;
  return;
}


