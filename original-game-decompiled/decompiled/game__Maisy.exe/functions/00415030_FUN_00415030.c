
/* ==== FUN_00415030 @ 00415030 ==== 
 * signature: undefined4 __fastcall FUN_00415030(int param_1)
 * body: 00415030-0041503d
 */

undefined4 __fastcall FUN_00415030(int param_1)

{
  if (*(int *)(param_1 + 0x26) == 0) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x26) + 0x50);
}


