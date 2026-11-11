
/* ==== FUN_1000c130 @ 1000c130 ==== 
 * signature: undefined __stdcall FUN_1000c130(void)
 * body: 1000c130-1000c1eb
 */

void FUN_1000c130(void)

{
  undefined **ppuVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (DAT_100183e0 == 0) {
    DAT_100183e0 = 0x200;
  }
  else if (DAT_100183e0 < 0x14) {
    DAT_100183e0 = 0x14;
  }
  DAT_100173c0 = FUN_1000d550(DAT_100183e0,4);
  if (DAT_100173c0 == (int *)0x0) {
    DAT_100183e0 = 0x14;
    DAT_100173c0 = FUN_1000d550(0x14,4);
    if (DAT_100173c0 == (int *)0x0) {
      __amsg_exit(0x1a);
    }
  }
  iVar3 = 0;
  ppuVar1 = &PTR_DAT_10013858;
  do {
    *(undefined ***)((int)DAT_100173c0 + iVar3) = ppuVar1;
    ppuVar1 = ppuVar1 + 8;
    iVar3 = iVar3 + 4;
  } while ((int)ppuVar1 < 0x10013ad8);
  uVar2 = 0;
  puVar4 = &DAT_10013868;
  do {
    iVar3 = *(int *)((&DAT_10018400)[(int)uVar2 >> 5] + (uVar2 & 0x1f) * 0x24);
    if ((iVar3 == -1) || (iVar3 == 0)) {
      *puVar4 = 0xffffffff;
    }
    puVar4 = puVar4 + 8;
    uVar2 = uVar2 + 1;
  } while ((int)puVar4 < 0x100138c8);
  return;
}


