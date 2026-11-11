
/* ==== FUN_12004d40 @ 12004d40 ==== 
 * signature: undefined __fastcall FUN_12004d40(undefined4 * param_1)
 * body: 12004d40-12004d6d
 */

void __fastcall FUN_12004d40(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  puVar1 = (undefined4 *)*param_1;
  while (puVar2 = puVar1, puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    uVar3 = *(int *)((int)param_1 + 0x12) - puVar2[4];
    puVar2[5] = uVar3;
    if ((uint)puVar2[6] <= uVar3) {
      (*(code *)puVar2[1])(puVar2,puVar2[2]);
    }
  }
  return;
}


