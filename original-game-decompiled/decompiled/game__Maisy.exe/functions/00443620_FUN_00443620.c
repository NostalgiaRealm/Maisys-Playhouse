
/* ==== FUN_00443620 @ 00443620 ==== 
 * signature: undefined __stdcall FUN_00443620(void)
 * body: 00443620-00443667
 */

void FUN_00443620(void)

{
  int iVar1;
  DWORD DVar2;
  short sVar3;
  
  sVar3 = 0;
  DVar2 = timeGetTime();
  if (0 < DAT_004db792) {
    do {
      iVar1 = sVar3 * 0x3e;
      if (((&DAT_004db5a2)[iVar1] == '\0') && (*(int *)((int)&DAT_004db5c8 + iVar1) == -1)) {
        *(DWORD *)((int)&DAT_004db5c8 + iVar1) = DVar2;
      }
      sVar3 = sVar3 + 1;
    } while (sVar3 < DAT_004db792);
  }
  return;
}


