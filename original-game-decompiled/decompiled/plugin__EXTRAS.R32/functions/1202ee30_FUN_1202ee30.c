
/* ==== FUN_1202ee30 @ 1202ee30 ==== 
 * signature: undefined __stdcall FUN_1202ee30(void)
 * body: 1202ee30-1202eef6
 */

void FUN_1202ee30(void)

{
  int iVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  if (DAT_1203aae0 == 0) {
    DAT_1203aae0 = 0x200;
  }
  else if (DAT_1203aae0 < 0x14) {
    DAT_1203aae0 = 0x14;
  }
  DAT_12039adc = FUN_1202c3b0(DAT_1203aae0,4);
  if (DAT_12039adc == (LPVOID)0x0) {
    DAT_1203aae0 = 0x14;
    DAT_12039adc = FUN_1202c3b0(0x14,4);
    if (DAT_12039adc == (LPVOID)0x0) {
      __amsg_exit(0x1a);
    }
  }
  ppuVar3 = &PTR_DAT_12038718;
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 4;
    *(undefined ***)((int)DAT_12039adc + iVar1) = ppuVar3;
    ppuVar3 = ppuVar3 + 8;
    iVar1 = iVar2;
  } while (iVar2 < 0x50);
  uVar5 = 0;
  puVar4 = &DAT_12038728;
  do {
    iVar1 = *(int *)(*(int *)((int)&DAT_1203aaf0 + ((int)(uVar5 & 0xffffffe7) >> 3)) +
                    (uVar5 & 0x1f) * 0x24);
    if ((iVar1 == -1) || (iVar1 == 0)) {
      *puVar4 = 0xffffffff;
    }
    puVar4 = puVar4 + 8;
    uVar5 = uVar5 + 1;
  } while (puVar4 < &DAT_12038788);
  return;
}


