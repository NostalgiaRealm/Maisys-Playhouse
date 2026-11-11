
/* ==== FUN_11007b00 @ 11007b00 ==== 
 * signature: undefined __cdecl FUN_11007b00(undefined4 * param_1, int param_2, int param_3)
 * body: 11007b00-11007b5d
 */

void __cdecl FUN_11007b00(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *(undefined4 *)(param_3 + 0x10) = 0;
  *(undefined4 *)(param_3 + 0x28) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_3 + 0x2c) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_3 + 0x30) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_3 + 0x34) = *(undefined4 *)(param_2 + 0x30);
  puVar3 = (undefined4 *)(param_2 + 0x10);
  puVar4 = (undefined4 *)(param_3 + 0x14);
  for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  if (*(int *)(param_2 + 0x34) != 0) {
    uVar1 = FUN_110024d0(param_1,*(int *)(param_2 + 0x34));
    *(undefined4 *)(param_3 + 0x3a) = uVar1;
    return;
  }
  *(undefined4 *)(param_3 + 0x3a) = 0;
  return;
}


