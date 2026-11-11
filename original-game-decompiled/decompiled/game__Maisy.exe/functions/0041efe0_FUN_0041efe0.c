
/* ==== FUN_0041efe0 @ 0041efe0 ==== 
 * signature: undefined __cdecl FUN_0041efe0(int param_1, int param_2)
 * body: 0041efe0-0041f035
 */

void __cdecl FUN_0041efe0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_1c [6];
  
  puVar2 = (undefined4 *)(param_1 * 0x18 + DAT_004da058);
  puVar3 = puVar2;
  puVar4 = local_1c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = (undefined4 *)(DAT_004da058 + param_2 * 0x18);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
  }
  puVar3 = local_1c;
  puVar2 = (undefined4 *)(DAT_004da058 + param_2 * 0x18);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}


