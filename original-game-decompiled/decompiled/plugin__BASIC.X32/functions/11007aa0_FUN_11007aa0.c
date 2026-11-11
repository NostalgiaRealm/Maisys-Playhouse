
/* ==== FUN_11007aa0 @ 11007aa0 ==== 
 * signature: undefined __cdecl FUN_11007aa0(undefined4 * param_1, int param_2, int param_3)
 * body: 11007aa0-11007af0
 */

void __cdecl FUN_11007aa0(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_3 + 0x28);
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_3 + 0x2c);
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_3 + 0x30);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_3 + 0x34);
  puVar2 = (undefined4 *)(param_3 + 0x14);
  puVar3 = (undefined4 *)(param_2 + 0x10);
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  if (*(int *)(param_2 + 0x34) != 0) {
    FUN_11002530(param_1,*(int *)(param_2 + 0x34));
  }
  *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(param_3 + 0x3a);
  return;
}


