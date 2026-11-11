
/* ==== FUN_00450980 @ 00450980 ==== 
 * signature: int * __thiscall FUN_00450980(void * this, short param_1)
 * body: 00450980-00450a88;00450ac5-00450ad9
 */

int * __thiscall FUN_00450980(void *this,short param_1)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  int *local_50 [4];
  AFX_EXCEPTION_LINK local_40 [20];
  undefined4 local_2c;
  undefined4 local_28;
  int *local_24;
  int local_20;
  int *local_1c;
  undefined4 local_15;
  undefined1 uStack_11;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00450ab3;
  *unaff_FS_OFFSET = &local_10;
  local_15._1_3_ = SUB43(&stack0xffffffa4,0);
  uStack_11 = (undefined1)((uint)&stack0xffffffa4 >> 0x18);
  if (param_1 != 0) {
    local_20 = (int)param_1;
    if (local_20 <= *(int *)((int)*(void **)((int)this + 0x26) + 0x26)) {
      FUN_00430370(*(void **)((int)this + 0x26),local_20,local_50);
      if (local_50[0] != (int *)0x0) {
        local_24 = (int *)((int)this + 4);
        local_28 = DAT_004d95bc;
        local_2c = DAT_004d95c0;
        local_15 = CONCAT31(local_15._1_3_,*(undefined1 *)(*local_24 + 0x32));
        (**(code **)(*(int *)*local_24 + 0xe8))(0);
        DAT_004d95bc = 0;
        DAT_004d95c0 = 0;
        AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_40);
        local_8 = 1;
        local_1c = (int *)(**(code **)(*local_50[0] + 0xec))(local_50[0][1]);
        local_8 = 0xffffffff;
        FUN_00450abd();
        DAT_004d95bc = local_28;
        DAT_004d95c0 = local_2c;
        (**(code **)(*(int *)*local_24 + 0xe8))(local_15);
        iVar1 = *local_1c;
        (**(code **)(iVar1 + 0x10c))(*(undefined4 *)((int)local_50[0] + 0x2a));
        (**(code **)(iVar1 + 0x110))(local_20);
        goto LAB_00450ac7;
      }
    }
  }
  local_1c = (int *)0x0;
LAB_00450ac7:
  *unaff_FS_OFFSET = local_10;
  return local_1c;
}


