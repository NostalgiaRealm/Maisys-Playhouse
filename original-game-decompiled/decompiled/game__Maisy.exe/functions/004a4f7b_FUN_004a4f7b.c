
/* ==== FUN_004a4f7b @ 004a4f7b ==== 
 * signature: undefined4 * __stdcall FUN_004a4f7b(undefined4 * param_1)
 * body: 004a4f7b-004a4f8f
 */

undefined4 * FUN_004a4f7b(undefined4 *param_1)

{
  time_t tVar1;
  
  tVar1 = _time((time_t *)0x0);
  *param_1 = (int)tVar1;
  return param_1;
}


