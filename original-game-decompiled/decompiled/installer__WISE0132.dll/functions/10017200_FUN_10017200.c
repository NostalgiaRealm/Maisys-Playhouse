
/* ==== FUN_10017200 @ 10017200 ==== 
 * signature: undefined __stdcall FUN_10017200(void)
 * body: 10017200-10017236
 */

void FUN_10017200(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR_LOOP_100201b0;
  do {
    if (ppuVar1[4] != (undefined *)0x0) {
      VirtualFree(ppuVar1[4],0,0x8000);
    }
    ppuVar1 = (undefined **)*ppuVar1;
  } while (ppuVar1 != &PTR_LOOP_100201b0);
  HeapDestroy(DAT_1002532c);
  return;
}


