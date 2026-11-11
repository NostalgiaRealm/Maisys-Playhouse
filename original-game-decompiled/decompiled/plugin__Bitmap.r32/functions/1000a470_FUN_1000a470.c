
/* ==== FUN_1000a470 @ 1000a470 ==== 
 * signature: undefined __cdecl FUN_1000a470(int param_1, int param_2)
 * body: 1000a470-1000a497
 */

void __cdecl FUN_1000a470(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_1000a3a0(param_1 + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}


