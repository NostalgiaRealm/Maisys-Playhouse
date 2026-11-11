
/* ==== FUN_10016f70 @ 10016f70 ==== 
 * signature: undefined __cdecl FUN_10016f70(int param_1, int param_2)
 * body: 10016f70-10016f97
 */

void __cdecl FUN_10016f70(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_10016ea0(param_1 + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}


