
/* ==== FUN_00442c30 @ 00442c30 ==== 
 * signature: undefined __stdcall FUN_00442c30(void)
 * body: 00442c30-00442d7c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00442c30(void)

{
  int iVar1;
  MMRESULT MVar2;
  undefined4 uVar3;
  code *dwCallback;
  short sVar4;
  uint uVar5;
  WAVEFORMATEX local_1c;
  HWAVEOUT local_8;
  
  dwCallback = (code *)0x0;
  local_8 = (HWAVEOUT)0x0;
  if (DAT_004db5a0 == '\0') {
    if (DAT_004db868 != '\0') {
      dwCallback = FUN_004430d0;
    }
    local_1c.nChannels = (WORD)DAT_004db854;
    local_1c.nSamplesPerSec = DAT_004db84c;
    local_1c.wFormatTag = 1;
    local_1c.wBitsPerSample = (WORD)DAT_004db850;
    iVar1 = (int)(DAT_004db850 + (DAT_004db850 >> 0x1f & 7U)) >> 3;
    local_1c.nAvgBytesPerSec = DAT_004db854 * DAT_004db84c * iVar1;
    local_1c.nBlockAlign = (short)iVar1 * local_1c.nChannels;
    local_1c.cbSize = 0;
    MVar2 = waveOutOpen(&local_8,0xffffffff,&local_1c,(DWORD_PTR)dwCallback,0,
                        (dwCallback == (code *)0x0) - 1 & 0x30000);
    if (MVar2 == 0) {
      _DAT_004db83c = 0;
      DAT_004db5a0 = '\x01';
      DAT_004db846 = local_8;
      if (DAT_004db860 == -1) {
        DAT_004db860 = FUN_00443170();
      }
      else {
        FUN_00443200((short)DAT_004db860);
      }
      _DAT_004db83e = timeGetTime();
      uVar5 = DAT_004db85c;
      if (DAT_004d91e8 != 0) {
        uVar5 = DAT_004d91e8;
      }
      if ((uVar5 & 1) != 0) {
        uVar5 = uVar5 + 1;
      }
      DAT_004db842 = _DAT_004db83e;
      if (uVar5 != DAT_004db7aa) {
        FUN_00443020();
        DAT_004db7aa = uVar5;
        uVar3 = FUN_00442f90();
        if ((char)uVar3 == '\0') {
          sVar4 = 0;
          if (0 < DAT_004db830) {
            do {
              uVar3 = FUN_00442d80((int)sVar4);
              if ((char)uVar3 != '\0') goto LAB_00442d71;
              sVar4 = sVar4 + 1;
            } while (sVar4 < DAT_004db830);
          }
        }
        else {
LAB_00442d71:
          FUN_004430b0();
        }
      }
    }
  }
  return;
}


