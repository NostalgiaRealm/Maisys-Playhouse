
/* ==== FUN_15003010 @ 15003010 ==== 
 * signature: int * __stdcall FUN_15003010(void)
 * body: 15003010-15003018
 */

int * FUN_15003010(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  return &p_Var1->_terrno;
}


