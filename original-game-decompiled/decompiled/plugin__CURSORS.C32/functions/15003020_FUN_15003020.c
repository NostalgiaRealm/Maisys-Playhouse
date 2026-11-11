
/* ==== FUN_15003020 @ 15003020 ==== 
 * signature: ulong * __stdcall FUN_15003020(void)
 * body: 15003020-15003028
 */

ulong * FUN_15003020(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  return &p_Var1->_tdoserrno;
}


