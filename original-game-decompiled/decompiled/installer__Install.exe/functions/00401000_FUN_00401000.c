
/* ==== FUN_00401000 @ 00401000 ==== 
 * signature: undefined __stdcall FUN_00401000(void)
 * body: 00401000-00401082
 */

void FUN_00401000(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  DAT_00404370 = GlobalAlloc(2,0x10000);
  DAT_0040436c = GlobalLock(DAT_00404370);
  DAT_004043a8 = GlobalAlloc(2,0x8040);
  DAT_00404398 = GlobalLock(DAT_004043a8);
  DAT_00404388 = GlobalAlloc(2,0x400);
  DAT_00404374 = GlobalLock(DAT_00404388);
  *DAT_00404374 = 0;
  uVar1 = 1;
  do {
    iVar3 = 8;
    uVar2 = uVar1;
    do {
      if ((uVar2 & 1) == 0) {
        uVar2 = uVar2 >> 1;
      }
      else {
        uVar2 = uVar2 >> 1 ^ 0xedb88320;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    DAT_00404374[uVar1] = uVar2;
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 0x100);
  return;
}


