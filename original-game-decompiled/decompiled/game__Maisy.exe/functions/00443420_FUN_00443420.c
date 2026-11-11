
/* ==== FUN_00443420 @ 00443420 ==== 
 * signature: undefined4 __cdecl FUN_00443420(int param_1)
 * body: 00443420-004434ac
 */

uint __cdecl FUN_00443420(int param_1)

{
  int iVar1;
  MMRESULT MVar2;
  
  iVar1 = param_1 * 0x1a;
  if (*(int *)(&DAT_004db7be + param_1 * 0x1a) != 0) {
    **(undefined4 **)((int)&DAT_004db7b2 + iVar1) = *(undefined4 *)(&DAT_004db7ba + iVar1);
    *(int *)(*(int *)((int)&DAT_004db7b2 + iVar1) + 4) =
         *(int *)(&DAT_004db7be + iVar1) - *(int *)(&DAT_004db7c2 + iVar1);
    *(undefined4 *)(*(int *)((int)&DAT_004db7b2 + iVar1) + 0x10) = 0;
    *(undefined4 *)(*(int *)((int)&DAT_004db7b2 + iVar1) + 0x14) = 0;
    (&DAT_004db7c6)[iVar1] = 1;
    waveOutPrepareHeader(DAT_004db846,*(LPWAVEHDR *)((int)&DAT_004db7b2 + iVar1),0x20);
    MVar2 = waveOutWrite(DAT_004db846,*(LPWAVEHDR *)((int)&DAT_004db7b2 + iVar1),0x20);
    return MVar2 & 0xffffff00;
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


