
/* ==== FUN_004379a0 @ 004379a0 ==== 
 * signature: undefined4 * __thiscall FUN_004379a0(void * this, int param_1, int * param_2, int param_3)
 * body: 004379a0-00437a4a;00437a6b-00437ae6
 */

undefined4 * __thiscall FUN_004379a0(void *this,int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *this_00;
  undefined4 *unaff_FS_OFFSET;
  short sVar5;
  int iVar6;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00437ae7;
  *unaff_FS_OFFSET = &local_10;
  this_00 = (undefined4 *)0x0;
  iVar3 = FUN_00436c80(this,param_2);
  if (iVar3 != 0) {
    iVar4 = FUN_00434920(DAT_004d99ac,*(SIZE_T *)(iVar3 + 0x56),0);
    if (iVar4 != 0) {
      iVar1 = *(int *)(iVar3 + 0x52);
      iVar2 = *(int *)(iVar3 + 0x56);
      this_00 = FUN_00412c20(0x164);
      local_8 = 0;
      if (this_00 == (undefined4 *)0x0) {
        this_00 = (undefined4 *)0x0;
      }
      else {
        FUN_00412c90(this_00,0);
        *this_00 = &PTR_FUN_004bf780;
        *this_00 = &PTR_FUN_004bf978;
        *this_00 = &PTR_FUN_004bfca8;
        *this_00 = &PTR_FUN_004c2a38;
      }
      local_8 = 0xffffffff;
      if (this_00 != (undefined4 *)0x0) {
        if (param_3 == 0) {
          sVar5 = *(short *)(iVar3 + 0x50);
          iVar6 = 0;
        }
        else {
          sVar5 = *(short *)(iVar3 + 0x50);
          iVar6 = *(int *)(*(int *)(param_3 + 0x15e) + -8);
        }
        FUN_004366f0(this,iVar4,iVar3,sVar5,this_00,iVar6);
        FUN_00471f30(this_00,param_1,param_2,
                     *(short *)(iVar3 + 0x4c) << 8 | *(ushort *)(iVar3 + 0x4e),
                     (iVar4 - iVar1) + iVar2);
        if ((*(byte *)(iVar3 + 0x74) & 0x10) != 0) {
          *(byte *)(this_00 + 0x12) = *(byte *)(this_00 + 0x12) & 0xfd;
        }
      }
    }
  }
  *unaff_FS_OFFSET = local_10;
  return this_00;
}


