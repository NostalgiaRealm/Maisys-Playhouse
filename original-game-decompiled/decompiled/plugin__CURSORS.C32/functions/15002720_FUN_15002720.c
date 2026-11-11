
/* ==== FUN_15002720 @ 15002720 ==== 
 * signature: undefined __stdcall FUN_15002720(void)
 * body: 15002720-150027e6
 */

void FUN_15002720(void)

{
  int iVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  if (DAT_15006a40 == 0) {
    DAT_15006a40 = 0x200;
  }
  else if (DAT_15006a40 < 0x14) {
    DAT_15006a40 = 0x14;
  }
  DAT_15005a3c = FUN_15002480(DAT_15006a40,4);
  if (DAT_15005a3c == (LPVOID)0x0) {
    DAT_15006a40 = 0x14;
    DAT_15005a3c = FUN_15002480(0x14,4);
    if (DAT_15005a3c == (LPVOID)0x0) {
      __amsg_exit(0x1a);
    }
  }
  ppuVar3 = &PTR_DAT_150054e0;
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 4;
    *(undefined ***)((int)DAT_15005a3c + iVar1) = ppuVar3;
    ppuVar3 = ppuVar3 + 8;
    iVar1 = iVar2;
  } while (iVar2 < 0x50);
  uVar5 = 0;
  puVar4 = &DAT_150054f0;
  do {
    iVar1 = *(int *)(*(int *)((int)&DAT_15006a50 + ((int)(uVar5 & 0xffffffe7) >> 3)) +
                    (uVar5 & 0x1f) * 0x24);
    if ((iVar1 == -1) || (iVar1 == 0)) {
      *puVar4 = 0xffffffff;
    }
    puVar4 = puVar4 + 8;
    uVar5 = uVar5 + 1;
  } while (puVar4 < &DAT_15005550);
  return;
}


