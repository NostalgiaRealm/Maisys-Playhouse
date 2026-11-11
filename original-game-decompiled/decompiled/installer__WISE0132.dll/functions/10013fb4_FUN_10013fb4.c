
/* ==== FUN_10013fb4 @ 10013fb4 ==== 
 * signature: undefined __cdecl FUN_10013fb4(LPSTR param_1, int param_2)
 * body: 10013fb4-1001400f
 */

void __cdecl FUN_10013fb4(LPSTR param_1,int param_2)

{
  int iVar1;
  _SYSTEMTIME local_14;
  
  GetLocalTime(&local_14);
  wsprintfA(param_1,s__02d__02d__02d__d__02d__02d_1001f534,(uint)local_14.wMonth,(uint)local_14.wDay
            ,(uint)local_14.wYear % 100,(uint)local_14.wHour,(uint)local_14.wMinute,
            (uint)local_14.wSecond);
  if (param_2 == 0) {
    iVar1 = lstrlenA(param_1);
    param_1[iVar1 + -3] = '\0';
  }
  return;
}


