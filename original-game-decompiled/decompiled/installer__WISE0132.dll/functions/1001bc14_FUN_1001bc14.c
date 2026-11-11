
/* ==== FUN_1001bc14 @ 1001bc14 ==== 
 * signature: undefined FUN_1001bc14(void)
 * body: 1001bc14-1001bc74
 */

void FUN_1001bc14(void)

{
  uint in_EAX;
  int iVar1;
  int iVar2;
  
  iVar2 = (in_EAX & 0x1f) * 0x24;
  iVar1 = (&DAT_10025220)[(int)in_EAX >> 5] + iVar2;
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_10016e20(0x11);
    if (*(int *)(iVar1 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0xc));
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    FUN_10016ea0(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((&DAT_10025220)[(int)in_EAX >> 5] + 0xc + iVar2));
  return;
}


