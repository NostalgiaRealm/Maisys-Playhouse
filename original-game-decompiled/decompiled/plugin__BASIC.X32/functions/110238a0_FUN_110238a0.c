
/* ==== FUN_110238a0 @ 110238a0 ==== 
 * signature: undefined __cdecl FUN_110238a0(undefined4 * param_1, int param_2, int param_3)
 * body: 110238a0-11023969
 */

void __cdecl FUN_110238a0(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x14);
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_3 + 0x18);
  *(undefined2 *)(param_2 + 0x20) = *(undefined2 *)(param_3 + 0x26);
  *(undefined2 *)(param_2 + 0x22) = *(undefined2 *)(param_3 + 0x28);
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_3 + 0x2a);
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_3 + 0x2e);
  *(undefined2 *)(param_2 + 0x2c) = *(undefined2 *)(param_3 + 0x32);
  *(undefined4 *)(param_2 + 0x2e) = *(undefined4 *)(param_3 + 0x34);
  *(undefined2 *)(param_2 + 0x32) = *(undefined2 *)(param_3 + 0x38);
  *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(param_3 + 0x3a);
  *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_3 + 0x3e);
  *(undefined2 *)(param_2 + 0x3c) = *(undefined2 *)(param_3 + 0x42);
  *(undefined4 *)(param_2 + 0x3e) = *(undefined4 *)(param_3 + 0x44);
  uVar1 = *(undefined4 *)(param_3 + 0x4c);
  *(undefined4 *)(param_2 + 0x42) = *(undefined4 *)(param_3 + 0x48);
  *(undefined4 *)(param_2 + 0x46) = uVar1;
  *(undefined2 *)(param_2 + 0x4a) = *(undefined2 *)(param_3 + 0x50);
  *(undefined2 *)(param_2 + 0x4c) = *(undefined2 *)(param_3 + 0x52);
  *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_3 + 0x1c);
  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_3 + 0x20);
  *(undefined2 *)(param_2 + 0x56) = *(undefined2 *)(param_3 + 0x54);
  if (*(int *)(param_2 + 0x58) != 0) {
    FUN_11002730(param_1,*(int *)(param_2 + 0x58));
  }
  *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_3 + 0x56);
  uVar1 = *(undefined4 *)(param_3 + 0x5e);
  *(undefined4 *)(param_2 + 0x5c) = *(undefined4 *)(param_3 + 0x5a);
  *(undefined4 *)(param_2 + 0x60) = uVar1;
  return;
}


