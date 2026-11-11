
/* ==== FUN_11006650 @ 11006650 ==== 
 * signature: undefined __cdecl FUN_11006650(int param_1, undefined4 * param_2)
 * body: 11006650-110066c2
 */

void __cdecl FUN_11006650(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *param_2 = *(undefined4 *)(param_1 + 0xc);
  param_2[1] = *(undefined4 *)(param_1 + 0x10);
  param_2[2] = *(undefined4 *)(param_1 + 0x14);
  param_2[5] = *(undefined4 *)(param_1 + 0x18);
  param_2[6] = *(undefined4 *)(param_1 + 0x1c);
  param_2[3] = *(undefined4 *)(param_1 + 0x20);
  param_2[4] = *(undefined4 *)(param_1 + 0x24);
  param_2[7] = *(undefined4 *)(param_1 + 0x28);
  param_2[8] = *(undefined4 *)(param_1 + 0x2c);
  param_2[9] = *(undefined4 *)(param_1 + 0x30);
  param_2[10] = *(undefined4 *)(param_1 + 0x34);
  puVar2 = (undefined4 *)(param_1 + 0x66);
  puVar3 = (undefined4 *)((int)param_2 + 0x5a);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)puVar2;
  FUN_11002670((short *)(param_1 + 0x38),(short *)(param_2 + 0xb));
  return;
}


