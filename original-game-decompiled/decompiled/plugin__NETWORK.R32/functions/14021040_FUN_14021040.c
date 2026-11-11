
/* ==== FUN_14021040 @ 14021040 ==== 
 * signature: int * __stdcall FUN_14021040(void)
 * body: 14021040-14021048
 */

int * FUN_14021040(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  return &p_Var1->_terrno;
}


