
/* ==== FUN_00402185 @ 00402185 ==== 
 * signature: undefined __stdcall FUN_00402185(void)
 * body: 00402185-004021c4
 */

void FUN_00402185(void)

{
  HGLOBAL hMem;
  undefined4 *puVar1;
  
  DAT_00404390 = DAT_00404390 + -1;
  if ((DAT_00404390 == 0) && (puVar1 = DAT_004043a0, DAT_004043a0 != (undefined4 *)0x0)) {
    do {
      hMem = (HGLOBAL)*puVar1;
      puVar1 = (undefined4 *)puVar1[1];
      GlobalUnlock(hMem);
      GlobalFree(hMem);
    } while (puVar1 != (undefined4 *)0x0);
    DAT_00404378 = 0;
    DAT_00404364 = 0;
    DAT_004043a0 = (undefined4 *)0x0;
  }
  return;
}


