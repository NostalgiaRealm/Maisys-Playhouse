
/* ==== FUN_110065d0 @ 110065d0 ==== 
 * signature: undefined __cdecl FUN_110065d0(int param_1, undefined4 * param_2)
 * body: 110065d0-11006642
 */

void __cdecl FUN_110065d0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)(param_1 + 0xc) = *param_2;
  *(undefined4 *)(param_1 + 0x10) = param_2[1];
  *(undefined4 *)(param_1 + 0x14) = param_2[2];
  *(undefined4 *)(param_1 + 0x18) = param_2[5];
  *(undefined4 *)(param_1 + 0x1c) = param_2[6];
  *(undefined4 *)(param_1 + 0x20) = param_2[3];
  *(undefined4 *)(param_1 + 0x24) = param_2[4];
  *(undefined4 *)(param_1 + 0x28) = param_2[7];
  *(undefined4 *)(param_1 + 0x2c) = param_2[8];
  *(undefined4 *)(param_1 + 0x30) = param_2[9];
  *(undefined4 *)(param_1 + 0x34) = param_2[10];
  puVar2 = (undefined4 *)((int)param_2 + 0x5a);
  puVar3 = (undefined4 *)(param_1 + 0x66);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)puVar2;
  FUN_110025f0((short *)(param_2 + 0xb),(short *)(param_1 + 0x38));
  return;
}


