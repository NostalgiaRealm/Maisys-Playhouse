
/* ==== FUN_0040da40 @ 0040da40 ==== 
 * signature: int __fastcall FUN_0040da40(int param_1)
 * body: 0040da40-0040da51
 */

int __fastcall FUN_0040da40(int param_1)

{
  if (*(int *)(param_1 + 0xa8) == 0) {
    return 0;
  }
  return (int)*(short *)(*(int *)(param_1 + 0xa8) + 0xc);
}


