
/* ==== FUN_1401e430 @ 1401e430 ==== 
 * signature: undefined __stdcall FUN_1401e430(void)
 * body: 1401e430-1401e4f6
 */

void FUN_1401e430(void)

{
  int iVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  if (DAT_14029e60 == 0) {
    DAT_14029e60 = 0x200;
  }
  else if (DAT_14029e60 < 0x14) {
    DAT_14029e60 = 0x14;
  }
  DAT_14028e54 = FUN_1401e520(DAT_14029e60,4);
  if (DAT_14028e54 == (LPVOID)0x0) {
    DAT_14029e60 = 0x14;
    DAT_14028e54 = FUN_1401e520(0x14,4);
    if (DAT_14028e54 == (LPVOID)0x0) {
      __amsg_exit(0x1a);
    }
  }
  ppuVar3 = &PTR_DAT_14027e80;
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 4;
    *(undefined ***)((int)DAT_14028e54 + iVar1) = ppuVar3;
    ppuVar3 = ppuVar3 + 8;
    iVar1 = iVar2;
  } while (iVar2 < 0x50);
  uVar5 = 0;
  puVar4 = &DAT_14027e90;
  do {
    iVar1 = *(int *)(*(int *)((int)&DAT_14029e70 + ((int)(uVar5 & 0xffffffe7) >> 3)) +
                    (uVar5 & 0x1f) * 0x24);
    if ((iVar1 == -1) || (iVar1 == 0)) {
      *puVar4 = 0xffffffff;
    }
    puVar4 = puVar4 + 8;
    uVar5 = uVar5 + 1;
  } while (puVar4 < &DAT_14027ef0);
  return;
}


