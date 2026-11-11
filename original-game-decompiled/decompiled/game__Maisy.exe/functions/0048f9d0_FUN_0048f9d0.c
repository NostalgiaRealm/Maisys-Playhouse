
/* ==== FUN_0048f9d0 @ 0048f9d0 ==== 
 * signature: int * __stdcall FUN_0048f9d0(void)
 * body: 0048f9d0-0048f9d8
 */

int * FUN_0048f9d0(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  return &p_Var1->_terrno;
}


