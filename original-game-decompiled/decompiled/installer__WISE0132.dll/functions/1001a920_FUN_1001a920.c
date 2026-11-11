
/* ==== FUN_1001a920 @ 1001a920 ==== 
 * signature: int __stdcall FUN_1001a920(void)
 * body: 1001a920-1001a9b2
 */

int FUN_1001a920(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  FUN_10016e20(2);
  iVar4 = 3;
  if (3 < DAT_10025200) {
    do {
      uVar1 = *(uint *)(DAT_100241f8 + iVar4 * 4);
      if (uVar1 != 0) {
        if (((*(byte *)(uVar1 + 0xc) & 0x83) != 0) && (iVar2 = FUN_1001b1a0(uVar1), iVar2 != -1)) {
          iVar3 = iVar3 + 1;
        }
        if (0x13 < iVar4) {
          DeleteCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_100241f8 + iVar4 * 4) + 0x20));
          FUN_10015a50(*(undefined **)(DAT_100241f8 + iVar4 * 4));
          *(undefined4 *)(DAT_100241f8 + iVar4 * 4) = 0;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_10025200);
  }
  FUN_10016ea0(2);
  return iVar3;
}


