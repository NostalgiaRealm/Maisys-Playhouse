
/* ==== FUN_00407720 @ 00407720 ==== 
 * signature: undefined4 __fastcall FUN_00407720(int param_1)
 * body: 00407720-0040772d
 */

undefined4 __fastcall FUN_00407720(int param_1)

{
  if (*(int *)(param_1 + 0x56) == 0) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x56) + 0x26);
}


