
/* ==== FUN_10016f00 @ 10016f00 ==== 
 * signature: undefined __cdecl FUN_10016f00(int param_1, int param_2)
 * body: 10016f00-10016f27
 */

void __cdecl FUN_10016f00(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_10016e20(param_1 + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}


