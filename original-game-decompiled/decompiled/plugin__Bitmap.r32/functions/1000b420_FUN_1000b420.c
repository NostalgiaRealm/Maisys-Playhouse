
/* ==== FUN_1000b420 @ 1000b420 ==== 
 * signature: undefined __stdcall FUN_1000b420(void)
 * body: 1000b420-1000b456
 */

void FUN_1000b420(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR_LOOP_10014360;
  do {
    if (ppuVar1[4] != (undefined *)0x0) {
      VirtualFree(ppuVar1[4],0,0x8000);
    }
    ppuVar1 = (undefined **)*ppuVar1;
  } while (ppuVar1 != &PTR_LOOP_10014360);
  HeapDestroy(DAT_100183e4);
  return;
}


