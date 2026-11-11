
/* ==== FUN_004076b0 @ 004076b0 ==== 
 * signature: undefined4 __fastcall FUN_004076b0(int param_1)
 * body: 004076b0-004076bd
 */

undefined4 __fastcall FUN_004076b0(int param_1)

{
  if (*(int *)(param_1 + 0x52) == 0) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x52) + 0x26);
}


