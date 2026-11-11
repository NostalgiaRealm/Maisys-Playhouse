
/* ==== FUN_130066f0 @ 130066f0 ==== 
 * signature: int * __stdcall FUN_130066f0(void)
 * body: 130066f0-130066f8
 */

int * FUN_130066f0(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  return &p_Var1->_terrno;
}


