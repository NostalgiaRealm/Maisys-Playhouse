
/* ==== FUN_00414830 @ 00414830 ==== 
 * signature: undefined4 * __stdcall FUN_00414830(int param_1)
 * body: 00414830-004148cf
 */

undefined4 * FUN_00414830(int param_1)

{
  undefined2 uVar1;
  HGLOBAL hMem;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  FUN_00451f80();
  if (*(int *)(param_1 + 4) != 0x73646976) {
    return (undefined4 *)0x0;
  }
  if (*(int *)(param_1 + 0x10) == 1) {
    return (undefined4 *)0x0;
  }
  if (*(int *)(param_1 + 0x10) == 2) {
    return (undefined4 *)0x0;
  }
  hMem = GlobalAlloc(0x42,0x3e);
  puVar2 = GlobalLock(hMem);
  if (puVar2 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x14) = 0xfffffffd;
    return (undefined4 *)0x0;
  }
  uVar1 = FUN_00451fb0();
  *(undefined2 *)(puVar2 + 0xb) = uVar1;
  FUN_00451f90();
  uVar3 = (*DAT_004e01b8)();
  *puVar2 = uVar3;
  FUN_00451f90();
  *(undefined4 *)((int)puVar2 + 0x2e) = 0;
  *(undefined4 *)((int)puVar2 + 0x32) = 0;
  *(undefined4 *)((int)puVar2 + 0x36) = 0;
  *(undefined4 *)((int)puVar2 + 0x3a) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return puVar2;
}


