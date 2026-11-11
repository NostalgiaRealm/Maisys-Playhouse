
/* ==== FUN_00443020 @ 00443020 ==== 
 * signature: undefined __stdcall FUN_00443020(void)
 * body: 00443020-004430ab
 */

void FUN_00443020(void)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = 0;
  if (0 < DAT_004db830) {
    do {
      FUN_00442e50(iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_004db830);
  }
  pcVar2 = GlobalFree_exref;
  if (DAT_004db7a2 != (HGLOBAL)0x0) {
    GlobalUnlock(DAT_004db7a2);
    pcVar2 = GlobalFree_exref;
    GlobalFree(DAT_004db7a2);
    DAT_004db7a2 = (HGLOBAL)0x0;
  }
  if (DAT_004db79a != (HGLOBAL)0x0) {
    GlobalUnlock(DAT_004db79a);
    (*pcVar2)(DAT_004db79a);
    DAT_004db79a = (HGLOBAL)0x0;
  }
  DAT_004db7aa = 0;
  return;
}


