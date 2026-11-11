
/* ==== FUN_00442b50 @ 00442b50 ==== 
 * signature: longlong __cdecl FUN_00442b50(double param_1)
 * body: 00442b50-00442bb7
 */

longlong __cdecl FUN_00442b50(double param_1)

{
  longlong lVar1;
  
  if (param_1 * 65536.0 < 2147483647.0) {
    lVar1 = __ftol();
    return lVar1;
  }
  lVar1 = __ftol();
  return lVar1;
}


