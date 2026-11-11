
/* ==== FUN_0046abc0 @ 0046abc0 ==== 
 * signature: undefined __fastcall FUN_0046abc0(int param_1)
 * body: 0046abc0-0046ac0e
 */

void __fastcall FUN_0046abc0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x62) != 0) {
    if (*(int *)(param_1 + 0x66) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x66) + 0x6a) = *(undefined4 *)(param_1 + 0x6a);
    }
    if (*(int *)(param_1 + 0x6a) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x6a) + 0x66) = *(undefined4 *)(param_1 + 0x66);
    }
    iVar1 = FUN_00469fb0(*(int **)(param_1 + 0x62));
    if (iVar1 == param_1) {
      *(undefined4 *)(*(int *)(param_1 + 0x62) + 0x6e) = *(undefined4 *)(param_1 + 0x6a);
    }
    *(undefined4 *)(param_1 + 0x6a) = 0;
    *(undefined4 *)(param_1 + 0x66) = 0;
    *(undefined4 *)(param_1 + 0x62) = 0;
  }
  return;
}


