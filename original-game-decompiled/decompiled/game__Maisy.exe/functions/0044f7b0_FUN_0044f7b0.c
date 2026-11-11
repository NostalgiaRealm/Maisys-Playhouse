
/* ==== FUN_0044f7b0 @ 0044f7b0 ==== 
 * signature: int __fastcall FUN_0044f7b0(int param_1)
 * body: 0044f7b0-0044f7d9
 */

int __fastcall FUN_0044f7b0(int param_1)

{
  if ((*(byte *)(param_1 + 0x15c) & 1) != 0) {
    return *(int *)(param_1 + 0x94) / 100000;
  }
  return *(int *)(param_1 + 0x94) / -100000;
}


