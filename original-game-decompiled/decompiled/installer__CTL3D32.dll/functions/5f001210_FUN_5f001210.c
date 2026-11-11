
/* ==== FUN_5f001210 @ 5f001210 ==== 
 * signature: undefined __cdecl FUN_5f001210(undefined4 param_1, undefined4 param_2)
 * body: 5f001210-5f001243
 */

void __cdecl FUN_5f001210(undefined4 param_1,undefined4 param_2)

{
  DWORD dwThreadId;
  
  DAT_5f00510c = param_2;
  DAT_5f005104 = param_1;
  dwThreadId = GetCurrentThreadId();
  DAT_5f005108 = SetWindowsHookExA(4,FUN_5f001160,DAT_5f00514c,dwThreadId);
  return;
}


