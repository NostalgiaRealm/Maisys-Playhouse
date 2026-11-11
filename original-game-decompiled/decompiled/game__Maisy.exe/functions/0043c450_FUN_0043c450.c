
/* ==== FUN_0043c450 @ 0043c450 ==== 
 * signature: undefined __cdecl FUN_0043c450(undefined2 * param_1)
 * body: 0043c450-0043c47c
 */

void __cdecl FUN_0043c450(undefined2 *param_1)

{
  int iVar1;
  
  param_1[1] = 0;
  *param_1 = 0;
  iVar1 = GetSystemMetrics(0);
  param_1[2] = (short)iVar1;
  iVar1 = GetSystemMetrics(1);
  param_1[3] = (short)iVar1;
  return;
}


