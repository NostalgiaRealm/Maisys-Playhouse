
/* ==== FUN_13006700 @ 13006700 ==== 
 * signature: ulong * __stdcall FUN_13006700(void)
 * body: 13006700-13006708
 */

ulong * FUN_13006700(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  return &p_Var1->_tdoserrno;
}


