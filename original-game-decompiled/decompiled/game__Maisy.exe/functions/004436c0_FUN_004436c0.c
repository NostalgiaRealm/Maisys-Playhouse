
/* ==== FUN_004436c0 @ 004436c0 ==== 
 * signature: int __stdcall FUN_004436c0(void)
 * body: 004436c0-0044372d
 */

int FUN_004436c0(void)

{
  MMRESULT MVar1;
  char *pcVar2;
  int iVar3;
  
  iVar3 = (int)(short)(-(ushort)(DAT_004db86c == '\0') & 2);
  if (iVar3 < DAT_004db830) {
    pcVar2 = &DAT_004db7c6 + iVar3 * 0x1a;
    do {
      if (*pcVar2 == '\0') {
        return iVar3;
      }
      if ((((*(LPWAVEHDR *)(pcVar2 + -0x14))->dwFlags & 1) != 0) &&
         (MVar1 = waveOutUnprepareHeader(DAT_004db846,*(LPWAVEHDR *)(pcVar2 + -0x14),0x20),
         MVar1 == 0)) {
        *pcVar2 = '\0';
      }
      if (*pcVar2 == '\0') {
        return iVar3;
      }
      pcVar2 = pcVar2 + 0x1a;
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_004db830);
  }
  return -1;
}


