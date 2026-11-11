
/* ==== FUN_00442f90 @ 00442f90 ==== 
 * signature: undefined4 __stdcall FUN_00442f90(void)
 * body: 00442f90-00443016
 */

undefined4 FUN_00442f90(void)

{
  undefined4 uVar1;
  code *pcVar2;
  
  DAT_004db79a = GlobalAlloc(0x2002,DAT_004db7aa);
  uVar1 = 0;
  if (DAT_004db79a != (HGLOBAL)0x0) {
    DAT_004db79e = GlobalLock(DAT_004db79a);
    pcVar2 = GlobalFree_exref;
    if (DAT_004db79e != (LPVOID)0x0) {
      DAT_004db7a2 = GlobalAlloc(0x2002,DAT_004db7aa);
      uVar1 = 0;
      if (DAT_004db7a2 == (HGLOBAL)0x0) goto LAB_0044300d;
      DAT_004db7a6 = GlobalLock(DAT_004db7a2);
      pcVar2 = GlobalFree_exref;
      if (DAT_004db7a6 != (LPVOID)0x0) {
        return (uint)DAT_004db7a6 & 0xffffff00;
      }
      GlobalFree(DAT_004db7a2);
    }
    GlobalUnlock(DAT_004db79a);
    uVar1 = (*pcVar2)(DAT_004db79a);
  }
LAB_0044300d:
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


