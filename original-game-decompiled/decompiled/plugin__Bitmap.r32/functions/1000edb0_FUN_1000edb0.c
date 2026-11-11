
/* ==== FUN_1000edb0 @ 1000edb0 ==== 
 * signature: int __stdcall FUN_1000edb0(void)
 * body: 1000edb0-1000ee42
 */

int FUN_1000edb0(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  FUN_1000a320(2);
  iVar4 = 3;
  if (3 < DAT_100183e0) {
    do {
      uVar1 = *(uint *)(DAT_100173c0 + iVar4 * 4);
      if (uVar1 != 0) {
        if (((*(byte *)(uVar1 + 0xc) & 0x83) != 0) && (iVar2 = FUN_1000f8b0(uVar1), iVar2 != -1)) {
          iVar3 = iVar3 + 1;
        }
        if (0x13 < iVar4) {
          DeleteCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_100173c0 + iVar4 * 4) + 0x20));
          FUN_1000bff0(*(undefined **)(DAT_100173c0 + iVar4 * 4));
          *(undefined4 *)(DAT_100173c0 + iVar4 * 4) = 0;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_100183e0);
  }
  FUN_1000a3a0(2);
  return iVar3;
}


