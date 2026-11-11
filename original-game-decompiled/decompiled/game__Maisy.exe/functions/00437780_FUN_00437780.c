
/* ==== FUN_00437780 @ 00437780 ==== 
 * signature: undefined4 * __thiscall FUN_00437780(void * this, int param_1, int * param_2)
 * body: 00437780-00437820;00437839-0043788c
 */

undefined4 * __thiscall FUN_00437780(void *this,int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *this_00;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0043788d;
  *unaff_FS_OFFSET = &local_10;
  this_00 = (undefined4 *)0x0;
  iVar3 = FUN_00436c80(this,param_2);
  if (iVar3 != 0) {
    iVar4 = FUN_00434920(DAT_004d99ac,*(SIZE_T *)(iVar3 + 0x56),0);
    if (iVar4 != 0) {
      iVar1 = *(int *)(iVar3 + 0x52);
      iVar2 = *(int *)(iVar3 + 0x56);
      this_00 = FUN_00412c20(0x16a);
      local_8 = 0;
      if (this_00 == (undefined4 *)0x0) {
        this_00 = (undefined4 *)0x0;
      }
      else {
        FUN_00412c90(this_00,0);
        *this_00 = &PTR_FUN_004c4528;
        *this_00 = &PTR_FUN_004c3838;
        *this_00 = &PTR_FUN_004c78d0;
      }
      local_8 = 0xffffffff;
      if (this_00 != (undefined4 *)0x0) {
        FUN_00417b10(this_00,param_1,param_2,
                     *(short *)(iVar3 + 0x4c) << 8 | *(ushort *)(iVar3 + 0x4e),
                     (iVar4 - iVar1) + iVar2);
        FUN_004366f0(this,iVar4,iVar3,*(short *)(iVar3 + 0x50),this_00,0);
      }
    }
  }
  *unaff_FS_OFFSET = local_10;
  return this_00;
}


