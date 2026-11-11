
/* ==== FUN_0049c1f0 @ 0049c1f0 ==== 
 * signature: undefined __stdcall FUN_0049c1f0(void)
 * body: 0049c1f0-0049c2b6
 */

void FUN_0049c1f0(void)

{
  int iVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  if (DAT_004e6680 == 0) {
    DAT_004e6680 = 0x200;
  }
  else if (DAT_004e6680 < 0x14) {
    DAT_004e6680 = 0x14;
  }
  DAT_004e567c = FUN_0048ebf0(DAT_004e6680,4);
  if (DAT_004e567c == (LPVOID)0x0) {
    DAT_004e6680 = 0x14;
    DAT_004e567c = FUN_0048ebf0(0x14,4);
    if (DAT_004e567c == (LPVOID)0x0) {
      __amsg_exit(0x1a);
    }
  }
  ppuVar3 = &PTR_DAT_004df110;
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 4;
    *(undefined ***)((int)DAT_004e567c + iVar1) = ppuVar3;
    ppuVar3 = ppuVar3 + 8;
    iVar1 = iVar2;
  } while (iVar2 < 0x50);
  uVar5 = 0;
  puVar4 = &DAT_004df120;
  do {
    iVar1 = *(int *)(*(int *)((int)&DAT_004e6690 + ((int)(uVar5 & 0xffffffe7) >> 3)) +
                    (uVar5 & 0x1f) * 0x24);
    if ((iVar1 == -1) || (iVar1 == 0)) {
      *puVar4 = 0xffffffff;
    }
    puVar4 = puVar4 + 8;
    uVar5 = uVar5 + 1;
  } while (puVar4 < &DAT_004df180);
  return;
}


