
/* ==== FUN_00443760 @ 00443760 ==== 
 * signature: undefined4 __stdcall FUN_00443760(void)
 * body: 00443760-004438b4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00443760(void)

{
  DWORD in_EAX;
  int iVar1;
  int iVar2;
  
  DAT_004db87c = 0;
  if ((DAT_004db5a0 != '\0') && (DAT_004db792 != 0)) {
    if ((_DAT_004db834 & 0x1000) == 0) {
      DAT_004db842 = timeGetTime();
      iVar1 = FUN_004436c0();
      if (iVar1 != -1) {
        iVar2 = FUN_004438c0(iVar1);
        if (iVar2 != 0) {
          FUN_00443420(iVar1);
          if (DAT_004db7aa / 2 <= (int)((DAT_004db842 - _DAT_004db83e) * DAT_004db850) / 1000) {
            FUN_00443670();
            iVar1 = FUN_004436c0();
            if (iVar1 != -1) {
              iVar2 = FUN_004438c0(iVar1);
              if (iVar2 != 0) {
                FUN_00443420(iVar1);
              }
            }
          }
        }
      }
      in_EAX = timeGetTime();
      _DAT_004db83e = in_EAX;
    }
    else {
      DAT_004db86c = 1;
      iVar1 = FUN_004436c0();
      if (iVar1 != -1) {
        DAT_004db870 = 0;
        _DAT_004db834 = _DAT_004db834 & 0xffffefff;
        iVar2 = FUN_004438c0(iVar1);
        waveOutReset(DAT_004db846);
        if (iVar2 != 0) {
          FUN_00443620();
          FUN_00443420(iVar1);
        }
        DAT_004db86c = 0;
        DAT_004db870 = 0;
        iVar1 = FUN_004436c0();
        if (iVar1 != -1) {
          iVar2 = FUN_004438c0(iVar1);
          if (iVar2 != 0) {
            FUN_00443420(iVar1);
          }
        }
      }
      in_EAX = 0;
      DAT_004db86c = 0;
      DAT_004db870 = 0;
    }
  }
  DAT_004db87c = 1;
  return CONCAT31((int3)(in_EAX >> 8),1);
}


