
/* ==== FUN_00414260 @ 00414260 ==== 
 * signature: undefined4 __fastcall FUN_00414260(int param_1)
 * body: 00414260-0041426d
 */

undefined4 __fastcall FUN_00414260(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 0x26);
}


