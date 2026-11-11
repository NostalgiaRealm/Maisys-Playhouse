
/* ==== FUN_14021050 @ 14021050 ==== 
 * signature: ulong * __stdcall FUN_14021050(void)
 * body: 14021050-14021058
 */

ulong * FUN_14021050(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  return &p_Var1->_tdoserrno;
}


