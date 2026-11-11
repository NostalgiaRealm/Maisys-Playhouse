
/* ==== FUN_00492630 @ 00492630 ==== 
 * signature: undefined __cdecl FUN_00492630(LPVOID param_1, SIZE_T param_2)
 * body: 00492630-0049265c
 */

void __cdecl FUN_00492630(LPVOID param_1,SIZE_T param_2)

{
  if (param_2 == 0) {
    param_2 = 1;
  }
  if (0xffffffe0 < param_2) {
    param_2 = 0xffffffe0;
  }
  HeapReAlloc(DAT_004e679c,0x10,param_1,param_2);
  return;
}


