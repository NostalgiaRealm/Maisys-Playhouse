
/* ==== FUN_1000a400 @ 1000a400 ==== 
 * signature: undefined __cdecl FUN_1000a400(int param_1, int param_2)
 * body: 1000a400-1000a427
 */

void __cdecl FUN_1000a400(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_1000a320(param_1 + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}


