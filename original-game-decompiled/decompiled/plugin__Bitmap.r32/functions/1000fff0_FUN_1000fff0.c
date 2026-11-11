
/* ==== FUN_1000fff0 @ 1000fff0 ==== 
 * signature: undefined __stdcall FUN_1000fff0(uint param_1)
 * body: 1000fff0-1000fff0
 */

void FUN_1000fff0(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1 & 0x1f) * 0x24;
  iVar1 = (&DAT_10018400)[(int)param_1 >> 5] + iVar2;
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_1000a320(0x11);
    if (*(int *)(iVar1 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0xc));
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    FUN_1000a3a0(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((&DAT_10018400)[(int)param_1 >> 5] + 0xc + iVar2));
  return;
}


