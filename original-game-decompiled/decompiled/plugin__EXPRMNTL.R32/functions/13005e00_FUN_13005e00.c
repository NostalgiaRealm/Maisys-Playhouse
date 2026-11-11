
/* ==== FUN_13005e00 @ 13005e00 ==== 
 * signature: undefined __stdcall FUN_13005e00(void)
 * body: 13005e00-13005ec6
 */

void FUN_13005e00(void)

{
  int iVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  if (DAT_13009d40 == 0) {
    DAT_13009d40 = 0x200;
  }
  else if (DAT_13009d40 < 0x14) {
    DAT_13009d40 = 0x14;
  }
  DAT_13008d38 = FUN_13005b60(DAT_13009d40,4);
  if (DAT_13008d38 == (LPVOID)0x0) {
    DAT_13009d40 = 0x14;
    DAT_13008d38 = FUN_13005b60(0x14,4);
    if (DAT_13008d38 == (LPVOID)0x0) {
      __amsg_exit(0x1a);
    }
  }
  ppuVar3 = &PTR_DAT_130087d0;
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 4;
    *(undefined ***)((int)DAT_13008d38 + iVar1) = ppuVar3;
    ppuVar3 = ppuVar3 + 8;
    iVar1 = iVar2;
  } while (iVar2 < 0x50);
  uVar5 = 0;
  puVar4 = &DAT_130087e0;
  do {
    iVar1 = *(int *)(*(int *)((int)&DAT_13009d50 + ((int)(uVar5 & 0xffffffe7) >> 3)) +
                    (uVar5 & 0x1f) * 0x24);
    if ((iVar1 == -1) || (iVar1 == 0)) {
      *puVar4 = 0xffffffff;
    }
    puVar4 = puVar4 + 8;
    uVar5 = uVar5 + 1;
  } while (puVar4 < &DAT_13008840);
  return;
}


