
/* ==== FUN_00474a40 @ 00474a40 ==== 
 * signature: int * __thiscall FUN_00474a40(void * this, int param_1)
 * body: 00474a40-00474aae;00474acf-00474b45
 */

int * __thiscall FUN_00474a40(void *this,int param_1)

{
  code *pcVar1;
  int *this_00;
  int iVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00474b46;
  *unaff_FS_OFFSET = &local_10;
  this_00 = FUN_00412c20(0x50);
  local_8 = 0;
  if (this_00 == (int *)0x0) {
    this_00 = (int *)0x0;
  }
  else {
    FUN_00412c90(this_00,0);
    *this_00 = (int)&PTR_FUN_004bf780;
    *this_00 = (int)&PTR_FUN_004c5280;
    *this_00 = (int)&PTR_FUN_004c4fe0;
    *this_00 = (int)&PTR_FUN_004c5758;
  }
  local_8 = 0xffffffff;
  FUN_00474a20(this_00,param_1,*(int *)((int)this + 0x48));
  iVar2 = FUN_00466a80(param_1);
  if ((*(byte *)(iVar2 + 0x30) & 1) != 0) {
    iVar2 = FUN_00466a80(param_1);
    *(byte *)(iVar2 + 0x30) = *(byte *)(iVar2 + 0x30) & 0xfe;
    *(byte *)(this_00 + 0xe) = *(byte *)(this_00 + 0xe) | 4;
  }
  pcVar1 = *(code **)(*this_00 + 0x24);
  iVar2 = *(int *)((int)this + 4) - param_1;
  (*pcVar1)(CONCAT31((int3)((uint)iVar2 >> 8),'\x01' - (iVar2 == 0)));
  (**(code **)(*this_00 + 0xe4))(this);
  (*pcVar1)(0);
  *(byte *)(this_00 + 0xe) = *(byte *)(this_00 + 0xe) & 0xfb;
  *unaff_FS_OFFSET = local_10;
  return this_00;
}


