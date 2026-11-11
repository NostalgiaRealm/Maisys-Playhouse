
/* ==== FUN_0048f9e0 @ 0048f9e0 ==== 
 * signature: ulong * __stdcall FUN_0048f9e0(void)
 * body: 0048f9e0-0048f9e8
 */

ulong * FUN_0048f9e0(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  return &p_Var1->_tdoserrno;
}


