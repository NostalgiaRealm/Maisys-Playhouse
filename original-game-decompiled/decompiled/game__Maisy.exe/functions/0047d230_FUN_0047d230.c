
/* ==== FUN_0047d230 @ 0047d230 ==== 
 * signature: int * __thiscall FUN_0047d230(void * this, int param_1)
 * body: 0047d230-0047d317;0047d34d-0047d414
 */

int * __thiscall FUN_0047d230(void *this,int param_1)

{
  undefined3 uVar1;
  undefined4 *puVar2;
  int *this_00;
  int iVar3;
  undefined4 *unaff_FS_OFFSET;
  AFX_EXCEPTION_LINK local_5c [48];
  undefined4 *local_2c;
  int *local_24;
  int *local_20;
  int *local_1c;
  char local_15;
  undefined1 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0047d46c;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffff98;
  local_15 = '\0';
  local_1c = (int *)0x0;
  AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_5c);
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
  this_00 = FUN_00412c20(0x6e);
  local_8._0_1_ = 3;
  local_24 = this_00;
  if (this_00 == (int *)0x0) {
    local_1c = (int *)0x0;
  }
  else {
    local_20 = this_00;
    FUN_00412c90(this_00,0);
    *this_00 = (int)&PTR_FUN_004bf780;
    *this_00 = (int)&PTR_FUN_004c5280;
    *this_00 = (int)&PTR_FUN_004c4fe0;
    *this_00 = (int)&PTR_FUN_004c59f8;
    *this_00 = (int)&PTR_FUN_004c5ca8;
    local_1c = this_00;
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_0047d200(local_1c,param_1,*(int *)((int)this + 0x48));
  iVar3 = FUN_00466a80(param_1);
  if ((*(byte *)(iVar3 + 0x30) & 1) != 0) {
    iVar3 = FUN_00466a80(param_1);
    *(byte *)(iVar3 + 0x30) = *(byte *)(iVar3 + 0x30) & 0xfe;
    *(byte *)(local_1c + 0xe) = *(byte *)(local_1c + 0xe) | 4;
  }
  iVar3 = *(int *)((int)this + 4) - param_1;
  (**(code **)(*local_1c + 0x24))(CONCAT31((int3)((uint)iVar3 >> 8),'\x01' - (iVar3 == 0)));
  FUN_00423fb0(local_1c,(int)this);
  (**(code **)(*local_1c + 0xe4))(this);
  (**(code **)(*local_1c + 0x24))(0);
  *(byte *)(local_1c + 0xe) = *(byte *)(local_1c + 0xe) & 0xfb;
  if (local_15 != '\0') {
    FUN_0046a6d0(this,(int)local_1c,(int)DAT_004d95bc);
    if (DAT_004d95bc != (undefined4 *)0x0) {
      (**(code **)*DAT_004d95bc)(1);
    }
    DAT_004d95bc = (undefined4 *)0x0;
  }
  local_8 = 0xffffffff;
  FUN_0047d476();
  *unaff_FS_OFFSET = local_10;
  return local_1c;
}


