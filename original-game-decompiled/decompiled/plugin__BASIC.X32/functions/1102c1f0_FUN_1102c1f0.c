
/* ==== FUN_1102c1f0 @ 1102c1f0 ==== 
 * signature: undefined __stdcall FUN_1102c1f0(void)
 * body: 1102c1f0-1102c2b6
 */

void FUN_1102c1f0(void)

{
  int iVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  if (DAT_1103aa20 == 0) {
    DAT_1103aa20 = 0x200;
  }
  else if (DAT_1103aa20 < 0x14) {
    DAT_1103aa20 = 0x14;
  }
  DAT_11039a1c = FUN_110291a0(DAT_1103aa20,4);
  if (DAT_11039a1c == (LPVOID)0x0) {
    DAT_1103aa20 = 0x14;
    DAT_11039a1c = FUN_110291a0(0x14,4);
    if (DAT_11039a1c == (LPVOID)0x0) {
      __amsg_exit(0x1a);
    }
  }
  ppuVar3 = &PTR_DAT_11036ca0;
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 4;
    *(undefined ***)((int)DAT_11039a1c + iVar1) = ppuVar3;
    ppuVar3 = ppuVar3 + 8;
    iVar1 = iVar2;
  } while (iVar2 < 0x50);
  uVar5 = 0;
  puVar4 = &DAT_11036cb0;
  do {
    iVar1 = *(int *)(*(int *)((int)&DAT_1103aa30 + ((int)(uVar5 & 0xffffffe7) >> 3)) +
                    (uVar5 & 0x1f) * 0x24);
    if ((iVar1 == -1) || (iVar1 == 0)) {
      *puVar4 = 0xffffffff;
    }
    puVar4 = puVar4 + 8;
    uVar5 = uVar5 + 1;
  } while (puVar4 < &DAT_11036d10);
  return;
}


