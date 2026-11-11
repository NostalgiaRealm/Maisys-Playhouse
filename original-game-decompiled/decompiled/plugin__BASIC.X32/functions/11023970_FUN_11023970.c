
/* ==== FUN_11023970 @ 11023970 ==== 
 * signature: undefined __cdecl FUN_11023970(undefined4 * param_1, int param_2, int param_3)
 * body: 11023970-11023a41
 */

void __cdecl FUN_11023970(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_3 + 0x10) = 0;
  *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined2 *)(param_3 + 0x26) = *(undefined2 *)(param_2 + 0x20);
  *(undefined2 *)(param_3 + 0x28) = *(undefined2 *)(param_2 + 0x22);
  *(undefined4 *)(param_3 + 0x2a) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_3 + 0x2e) = *(undefined4 *)(param_2 + 0x28);
  *(undefined2 *)(param_3 + 0x32) = *(undefined2 *)(param_2 + 0x2c);
  *(undefined4 *)(param_3 + 0x34) = *(undefined4 *)(param_2 + 0x2e);
  *(undefined2 *)(param_3 + 0x38) = *(undefined2 *)(param_2 + 0x32);
  *(undefined4 *)(param_3 + 0x3a) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_3 + 0x3e) = *(undefined4 *)(param_2 + 0x38);
  *(undefined2 *)(param_3 + 0x42) = *(undefined2 *)(param_2 + 0x3c);
  *(undefined4 *)(param_3 + 0x44) = *(undefined4 *)(param_2 + 0x3e);
  uVar2 = *(undefined4 *)(param_2 + 0x46);
  *(undefined4 *)(param_3 + 0x48) = *(undefined4 *)(param_2 + 0x42);
  *(undefined4 *)(param_3 + 0x4c) = uVar2;
  *(undefined2 *)(param_3 + 0x50) = *(undefined2 *)(param_2 + 0x4a);
  *(undefined2 *)(param_3 + 0x52) = *(undefined2 *)(param_2 + 0x4c);
  *(undefined2 *)(param_3 + 0x54) = *(undefined2 *)(param_2 + 0x56);
  iVar1 = *(int *)(param_2 + 0x58);
  *(int *)(param_3 + 0x56) = iVar1;
  uVar2 = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_3 + 0x5a) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_3 + 0x5e) = uVar2;
  if (iVar1 != 0) {
    uVar2 = FUN_11024d00(param_1,iVar1,*(short *)(param_2 + 0x56));
    *(undefined4 *)(param_3 + 0x56) = uVar2;
  }
  return;
}


