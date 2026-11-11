
/* ==== FUN_10001e70 @ 10001e70 ==== 
 * signature: undefined __cdecl FUN_10001e70(HGLOBAL param_1)
 * body: 10001e70-10001e84
 */

void __cdecl FUN_10001e70(HGLOBAL param_1)

{
  GlobalUnlock(param_1);
  GlobalFree(param_1);
  return;
}


