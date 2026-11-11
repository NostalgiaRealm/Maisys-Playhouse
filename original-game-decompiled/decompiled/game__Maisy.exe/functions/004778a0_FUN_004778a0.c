
/* ==== FUN_004778a0 @ 004778a0 ==== 
 * signature: undefined __cdecl FUN_004778a0(int param_1)
 * body: 004778a0-004778df
 */

void __cdecl FUN_004778a0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar1 = FUN_00434920(DAT_004d99ac,*(SIZE_T *)(param_1 + 0x1e),1);
  *(int *)(param_1 + 0x1a) = iVar1;
  if (iVar1 == 0) {
    FUN_004a3538();
  }
  uVar3 = *(uint *)(param_1 + 0x1e);
  puVar4 = *(undefined4 **)(param_1 + 0x1a);
  for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar4 = 0;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  return;
}


