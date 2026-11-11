
/* ==== FUN_00414270 @ 00414270 ==== 
 * signature: undefined4 __fastcall FUN_00414270(int param_1)
 * body: 00414270-0041427d
 */

undefined4 __fastcall FUN_00414270(int param_1)

{
  if (*(int *)(param_1 + 0xc) == 0) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x26);
}


