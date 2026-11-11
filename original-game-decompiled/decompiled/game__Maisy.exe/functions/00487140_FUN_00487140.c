
/* ==== FUN_00487140 @ 00487140 ==== 
 * signature: undefined __cdecl FUN_00487140(undefined4 * param_1, uint param_2)
 * body: 00487140-0048716c
 */

void __cdecl FUN_00487140(undefined4 *param_1,uint param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = (param_2 & 0x1fffffff) << 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *param_1 = FUN_004870e0;
  param_1[2] = FUN_00487120;
  param_1[4] = FUN_00487100;
  return;
}


