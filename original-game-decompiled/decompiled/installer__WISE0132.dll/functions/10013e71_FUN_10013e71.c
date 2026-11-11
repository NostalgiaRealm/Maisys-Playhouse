
/* ==== FUN_10013e71 @ 10013e71 ==== 
 * signature: undefined __cdecl FUN_10013e71(HGLOBAL param_1)
 * body: 10013e71-10013e85
 */

void __cdecl FUN_10013e71(HGLOBAL param_1)

{
  GlobalUnlock(param_1);
  GlobalFree(param_1);
  return;
}


