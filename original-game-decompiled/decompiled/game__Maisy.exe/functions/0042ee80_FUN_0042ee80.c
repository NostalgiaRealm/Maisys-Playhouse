
/* ==== FUN_0042ee80 @ 0042ee80 ==== 
 * signature: int * __thiscall FUN_0042ee80(void * this, int param_1)
 * body: 0042ee80-0042ef11;0042ef32-0042efbd
 */

int * __thiscall FUN_0042ee80(void *this,int param_1)

{
  int *this_00;
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  AFX_EXCEPTION_LINK local_48 [40];
  int *local_20;
  int *local_1c;
  int *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0042efee;
  *unaff_FS_OFFSET = &local_10;
  local_18 = (int *)0x0;
  local_14 = &stack0xffffffac;
  AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_48);
  local_8 = 1;
  this_00 = FUN_00412c20(0x50);
  local_8._0_1_ = 2;
  local_20 = this_00;
  if (this_00 == (int *)0x0) {
    local_18 = (int *)0x0;
  }
  else {
    local_1c = this_00;
    FUN_00412c90(this_00,0);
    *this_00 = (int)&PTR_FUN_004bf780;
    *this_00 = (int)&PTR_FUN_004c5280;
    *this_00 = (int)&PTR_FUN_004c4fe0;
    *this_00 = (int)&PTR_FUN_004c64a8;
    local_18 = this_00;
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_0042ee40(local_18,param_1,*(int *)((int)this + 0x48));
  iVar1 = FUN_00466a80(param_1);
  if ((*(byte *)(iVar1 + 0x30) & 1) != 0) {
    iVar1 = FUN_00466a80(param_1);
    *(byte *)(iVar1 + 0x30) = *(byte *)(iVar1 + 0x30) & 0xfe;
    *(byte *)(local_18 + 0xe) = *(byte *)(local_18 + 0xe) | 4;
  }
  iVar1 = *(int *)((int)this + 4) - param_1;
  (**(code **)(*local_18 + 0x24))(CONCAT31((int3)((uint)iVar1 >> 8),'\x01' - (iVar1 == 0)));
  (**(code **)(*local_18 + 0xe4))(this);
  (**(code **)(*local_18 + 0x24))(0);
  *(byte *)(local_18 + 0xe) = *(byte *)(local_18 + 0xe) & 0xfb;
  local_8 = 0xffffffff;
  FUN_0042eff8();
  *unaff_FS_OFFSET = local_10;
  return local_18;
}


