
/* ==== FUN_1202c1d0 @ 1202c1d0 ==== 
 * signature: undefined FUN_1202c1d0(void)
 * body: 1202c1d0-1202c1e7
 */

void FUN_1202c1d0(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  if (p_Var1->_tfpecode != 0) {
    p_Var1 = __getptd();
    (*(code *)p_Var1->_tfpecode)();
  }
  terminate();
  return;
}


