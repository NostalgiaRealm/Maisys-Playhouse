
/* ==== FUN_00436b80 @ 00436b80 ==== 
 * signature: undefined4 * __thiscall FUN_00436b80(void * this, int param_1, int * param_2, int param_3, int * param_4)
 * body: 00436b80-00436c5f
 */

undefined4 * __thiscall FUN_00436b80(void *this,int param_1,int *param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *this_00;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *unaff_FS_OFFSET;
  short sVar5;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00436c60;
  *unaff_FS_OFFSET = &local_10;
  puVar4 = (undefined4 *)0x0;
  iVar1 = FUN_00436c80(this,param_2);
  if (iVar1 != 0) {
    iVar2 = FUN_00434920(DAT_004d99ac,*(SIZE_T *)(iVar1 + 0x56),0);
    if (iVar2 != 0) {
      iVar3 = (iVar2 - *(int *)(iVar1 + 0x52)) + *(int *)(iVar1 + 0x56);
      if (param_4 != (int *)0x0) {
        *param_4 = iVar3;
      }
      puVar4 = (undefined4 *)0x0;
      this_00 = FUN_00412c20(0x56);
      local_8 = 0;
      if (this_00 != (undefined4 *)0x0) {
        puVar4 = FUN_00429830(this_00,param_1,iVar3);
      }
      local_8 = 0xffffffff;
      if (puVar4 == (undefined4 *)0x0) {
        FUN_004a3538();
      }
      if (param_3 == 0) {
        sVar5 = *(short *)(iVar1 + 0x50);
        iVar3 = 0;
      }
      else {
        sVar5 = *(short *)(iVar1 + 0x50);
        iVar3 = *(int *)(*(int *)(param_3 + 0x50) + -8);
      }
      FUN_004366f0(this,iVar2,iVar1,sVar5,puVar4,iVar3);
    }
  }
  *unaff_FS_OFFSET = local_10;
  return puVar4;
}


