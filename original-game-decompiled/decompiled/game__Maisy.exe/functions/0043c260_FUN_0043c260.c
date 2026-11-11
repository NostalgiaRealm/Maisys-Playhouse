
/* ==== FUN_0043c260 @ 0043c260 ==== 
 * signature: undefined __stdcall FUN_0043c260(void)
 * body: 0043c260-0043c27f
 */

void FUN_0043c260(void)

{
  time_t tVar1;
  undefined4 local_8;
  
  tVar1 = _time((time_t *)0x0);
  local_8 = (undefined4)tVar1;
  _localtime((time_t *)&local_8);
  return;
}


