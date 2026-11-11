
/* ==== FUN_00435cf0 @ 00435cf0 ==== 
 * signature: undefined __thiscall FUN_00435cf0(void * this, int param_1)
 * body: 00435cf0-00435dbb
 */

void __thiscall FUN_00435cf0(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_00434920(DAT_004d99ac,*(int *)(param_1 + 0x112) << 7,1);
  *(int *)(param_1 + 0x116) = iVar1;
  if ((iVar1 == 0) && (*(int *)(param_1 + 0x112) != 0)) {
    uVar2 = FUN_00434920(DAT_004d99ac,*(int *)(param_1 + 0x112) << 7,1);
    *(undefined4 *)(param_1 + 0x116) = uVar2;
  }
  iVar1 = 0;
  FUN_00436e90(param_1);
  if (0 < *(int *)(param_1 + 0x112)) {
    iVar4 = 0;
    do {
      *(undefined4 *)(*(int *)(param_1 + 0x116) + 0x5e + iVar4) = 0;
      *(short *)(*(int *)(param_1 + 0x116) + 0x4e + iVar4) = (short)iVar1;
      iVar1 = iVar1 + 1;
      *(undefined2 *)(*(int *)(param_1 + 0x116) + 0x4c + iVar4) = *(undefined2 *)(param_1 + 4);
      *(undefined4 *)(*(int *)(param_1 + 0x116) + 0x70 + iVar4) = 0x4d6f6d4f;
      iVar3 = *(int *)(param_1 + 0x116) + iVar4;
      iVar4 = iVar4 + 0x80;
      FUN_00436230(this,iVar3);
    } while (iVar1 < *(int *)(param_1 + 0x112));
  }
  FUN_00436e30();
  return;
}


