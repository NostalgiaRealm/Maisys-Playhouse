
/* ==== FUN_004360b0 @ 004360b0 ==== 
 * signature: undefined __thiscall FUN_004360b0(void * this, int param_1)
 * body: 004360b0-004361ff
 */

void __thiscall FUN_004360b0(void *this,int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int local_98 [32];
  void *local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = 0;
  if (*(short *)(param_1 + 4) == 0) {
    local_10 = 2;
  }
  if (local_10 < *(int *)(param_1 + 0x112)) {
    iVar6 = local_10 << 7;
    local_18 = this;
    do {
      local_8 = 0;
      FUN_00436030(local_18,*(int *)(param_1 + 0x116) + iVar6,&local_8,(int)local_98);
      uVar2 = FUN_00434920(DAT_004d99ac,local_8 * 4 + 4,0);
      *(undefined4 *)(*(int *)(param_1 + 0x116) + 0x66 + iVar6) = uVar2;
      if (*(int *)(*(int *)(param_1 + 0x116) + 0x66 + iVar6) == 0) {
        FUN_004a3538();
      }
      local_14 = local_98[0];
      local_c = 1;
      **(undefined4 **)(*(int *)(param_1 + 0x116) + 0x66 + iVar6) = 8;
      if (0 < local_8) {
        iVar3 = 4;
        do {
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x116) + 0x66 + iVar6) + iVar3) = 8;
          if (local_8 - local_c < local_8) {
            iVar4 = local_8;
            piVar5 = local_98 + local_8;
            do {
              iVar4 = iVar4 + -1;
              piVar1 = (int *)(*(int *)(*(int *)(param_1 + 0x116) + 0x66 + iVar6) + iVar3);
              *piVar1 = *piVar1 + *piVar5;
              piVar5 = piVar5 + -1;
            } while (local_8 - local_c < iVar4);
          }
          piVar5 = (int *)((int)local_98 + iVar3);
          iVar3 = iVar3 + 4;
          local_14 = local_14 + *piVar5;
          local_c = local_c + 1;
        } while (local_c <= local_8);
      }
      iVar6 = iVar6 + 0x80;
      local_10 = local_10 + 1;
      *(int *)(*(int *)(param_1 + 0x116) + -0x2a + iVar6) = local_14;
    } while (local_10 < *(int *)(param_1 + 0x112));
  }
  return;
}


