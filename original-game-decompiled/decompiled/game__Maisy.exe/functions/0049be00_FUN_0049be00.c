
/* ==== FUN_0049be00 @ 0049be00 ==== 
 * signature: undefined __stdcall FUN_0049be00(void)
 * body: 0049be00-0049be17
 */

void FUN_0049be00(void)

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


