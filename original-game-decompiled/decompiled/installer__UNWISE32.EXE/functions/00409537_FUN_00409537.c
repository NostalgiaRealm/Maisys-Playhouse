
/* ==== FUN_00409537 @ 00409537 ==== 
 * signature: undefined __cdecl FUN_00409537(LPSTR param_1)
 * body: 00409537-00409578
 */

void __cdecl FUN_00409537(LPSTR param_1)

{
  _SYSTEMTIME local_14;
  
  GetLocalTime(&local_14);
  wsprintfA(param_1,s__02d__02d__02d__d__02d_00410dcc,(uint)local_14.wMonth,(uint)local_14.wDay,
            (uint)local_14.wYear % 100,(uint)local_14.wHour,(uint)local_14.wMinute);
  return;
}


