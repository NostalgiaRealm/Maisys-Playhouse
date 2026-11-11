
/* ==== FUN_1102e860 @ 1102e860 ==== 
 * signature: ulong * __stdcall FUN_1102e860(void)
 * body: 1102e860-1102e868
 */

ulong * FUN_1102e860(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  return &p_Var1->_tdoserrno;
}


