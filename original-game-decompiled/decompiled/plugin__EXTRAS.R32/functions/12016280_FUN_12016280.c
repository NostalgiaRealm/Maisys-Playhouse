
/* ==== FUN_12016280 @ 12016280 ==== 
 * signature: longlong __cdecl FUN_12016280(double param_1)
 * body: 12016280-120162ea
 */

longlong __cdecl FUN_12016280(double param_1)

{
  longlong lVar1;
  
  if (param_1 * 65536.0 < 2147483647.0) {
    lVar1 = __ftol();
    return lVar1;
  }
  lVar1 = __ftol();
  return lVar1;
}


