
/* ==== FUN_00414560 @ 00414560 ==== 
 * signature: undefined __fastcall FUN_00414560(int param_1)
 * body: 00414560-00414591
 */

void __fastcall FUN_00414560(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x1a);
  if ((int)puVar2 - param_1 != 0x12) {
    do {
      puVar1 = (undefined4 *)puVar2[2];
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2 = puVar1;
    } while (param_1 - (int)puVar1 != -0x12);
    *(int *)(param_1 + 0x16) = param_1 + 0x12;
    *(int *)(param_1 + 0x1a) = param_1 + 0x12;
  }
  return;
}


