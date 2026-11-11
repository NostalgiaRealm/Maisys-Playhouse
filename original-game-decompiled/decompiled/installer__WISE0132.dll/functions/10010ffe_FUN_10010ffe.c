
/* ==== FUN_10010ffe @ 10010ffe ==== 
 * signature: undefined __cdecl FUN_10010ffe(HANDLE param_1, HANDLE param_2, LPCSTR param_3)
 * body: 10010ffe-10011023
 */

void __cdecl FUN_10010ffe(HANDLE param_1,HANDLE param_2,LPCSTR param_3)

{
  if (-1 < (int)param_1) {
    CloseHandle(param_1);
  }
  CloseHandle(param_2);
  DeleteFileA(param_3);
  return;
}


