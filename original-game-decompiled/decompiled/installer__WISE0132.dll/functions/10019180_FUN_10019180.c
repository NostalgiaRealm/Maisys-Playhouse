
/* ==== FUN_10019180 @ 10019180 ==== 
 * signature: undefined __stdcall FUN_10019180(void)
 * body: 10019180-1001923b
 */

void FUN_10019180(void)

{
  undefined **ppuVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (DAT_10025200 == 0) {
    DAT_10025200 = 0x200;
  }
  else if (DAT_10025200 < 0x14) {
    DAT_10025200 = 0x14;
  }
  DAT_100241f8 = FUN_10019830(DAT_10025200,4);
  if (DAT_100241f8 == (int *)0x0) {
    DAT_10025200 = 0x14;
    DAT_100241f8 = FUN_10019830(0x14,4);
    if (DAT_100241f8 == (int *)0x0) {
      __amsg_exit(0x1a);
    }
  }
  iVar3 = 0;
  ppuVar1 = &PTR_DAT_10022658;
  do {
    *(undefined ***)((int)DAT_100241f8 + iVar3) = ppuVar1;
    ppuVar1 = ppuVar1 + 8;
    iVar3 = iVar3 + 4;
  } while ((int)ppuVar1 < 0x100228d8);
  uVar2 = 0;
  puVar4 = &DAT_10022668;
  do {
    iVar3 = *(int *)((&DAT_10025220)[(int)uVar2 >> 5] + (uVar2 & 0x1f) * 0x24);
    if ((iVar3 == -1) || (iVar3 == 0)) {
      *puVar4 = 0xffffffff;
    }
    puVar4 = puVar4 + 8;
    uVar2 = uVar2 + 1;
  } while ((int)puVar4 < 0x100226c8);
  return;
}


