
/* ==== FUN_110103e0 @ 110103e0 ==== 
 * signature: undefined __cdecl FUN_110103e0(int param_1, int param_2)
 * body: 110103e0-11010445
 */

void __cdecl FUN_110103e0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined2 *)(param_1 + 0x1e) = *(undefined2 *)(param_2 + 0x22);
  *(undefined2 *)(param_1 + 0x20) = *(undefined2 *)(param_2 + 0x24);
  *(undefined2 *)(param_1 + 0x22) = *(undefined2 *)(param_2 + 0x26);
  *(undefined2 *)(param_1 + 0x24) = *(undefined2 *)(param_2 + 0x28);
  *(undefined2 *)(param_1 + 0x1c) = *(undefined2 *)(param_2 + 0x20);
  puVar2 = (undefined4 *)(param_2 + 0x2a);
  puVar3 = (undefined4 *)(param_1 + 0x26);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)puVar2;
  *(undefined2 *)(param_1 + 0x3c) = *(undefined2 *)(param_2 + 0x40);
  return;
}


