
/* ==== FUN_0043c240 @ 0043c240 ==== 
 * signature: undefined4 __cdecl FUN_0043c240(short param_1)
 * body: 0043c240-0043c258
 */

undefined4 __cdecl FUN_0043c240(short param_1)

{
  SHORT SVar1;
  undefined2 extraout_var;
  
  SVar1 = GetKeyState((int)param_1);
  return CONCAT31((int3)(CONCAT22(extraout_var,SVar1) >> 8),SVar1 < 0);
}


