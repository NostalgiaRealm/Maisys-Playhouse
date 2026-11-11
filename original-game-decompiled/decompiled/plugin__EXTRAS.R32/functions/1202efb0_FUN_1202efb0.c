
/* ==== FUN_1202efb0 @ 1202efb0 ==== 
 * signature: ulong * __stdcall FUN_1202efb0(void)
 * body: 1202efb0-1202efb8
 */

ulong * FUN_1202efb0(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  return &p_Var1->_tdoserrno;
}


