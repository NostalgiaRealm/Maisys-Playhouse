
/* ==== FUN_1102e850 @ 1102e850 ==== 
 * signature: int * __stdcall FUN_1102e850(void)
 * body: 1102e850-1102e858
 */

int * FUN_1102e850(void)

{
  _ptiddata p_Var1;
  
  p_Var1 = __getptd();
  return &p_Var1->_terrno;
}


