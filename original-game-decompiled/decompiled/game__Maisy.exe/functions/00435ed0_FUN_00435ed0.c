
/* ==== FUN_00435ed0 @ 00435ed0 ==== 
 * signature: undefined __stdcall FUN_00435ed0(int param_1)
 * body: 00435ed0-00435f0e
 */

void FUN_00435ed0(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x112)) {
    iVar3 = 0;
    do {
      iVar3 = iVar3 + 0x80;
      uVar1 = (ushort)iVar2;
      iVar2 = iVar2 + 1;
      *(ushort *)(*(int *)(param_1 + 0x116) + -0x16 + iVar3) = *(short *)(param_1 + 4) << 8 | uVar1;
    } while (iVar2 < *(int *)(param_1 + 0x112));
  }
  return;
}


