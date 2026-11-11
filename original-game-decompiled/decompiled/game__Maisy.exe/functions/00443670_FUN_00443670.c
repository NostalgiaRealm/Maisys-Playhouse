
/* ==== FUN_00443670 @ 00443670 ==== 
 * signature: undefined4 __stdcall FUN_00443670(void)
 * body: 00443670-004436bc
 */

uint FUN_00443670(void)

{
  LPWAVEHDR pwh;
  undefined4 in_EAX;
  uint uVar1;
  MMRESULT MVar2;
  undefined4 *puVar3;
  int iVar4;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),1);
  iVar4 = 0;
  if (0 < DAT_004db830) {
    puVar3 = &DAT_004db7b2;
    do {
      if (((*(char *)(puVar3 + 5) != '\0') && (pwh = (LPWAVEHDR)*puVar3, pwh != (LPWAVEHDR)0x0)) &&
         ((pwh->dwFlags & 1) != 0)) {
        MVar2 = waveOutUnprepareHeader(DAT_004db846,pwh,0x20);
        *(undefined1 *)(puVar3 + 5) = 0;
        uVar1 = MVar2 & 0xffffff00;
      }
      puVar3 = (undefined4 *)((int)puVar3 + 0x1a);
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_004db830);
  }
  return uVar1;
}


