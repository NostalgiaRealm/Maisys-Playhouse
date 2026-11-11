
/* ==== FUN_1000fff4 @ 1000fff4 ==== 
 * signature: undefined FUN_1000fff4(void)
 * body: 1000fff4-10010054
 */

void FUN_1000fff4(void)

{
  uint in_EAX;
  int iVar1;
  int iVar2;
  
  iVar2 = (in_EAX & 0x1f) * 0x24;
  iVar1 = (&DAT_10018400)[(int)in_EAX >> 5] + iVar2;
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_1000a320(0x11);
    if (*(int *)(iVar1 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0xc));
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    FUN_1000a3a0(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((&DAT_10018400)[(int)in_EAX >> 5] + 0xc + iVar2));
  return;
}


