
/* ==== FUN_100122b9 @ 100122b9 ==== 
 * signature: DWORD __cdecl FUN_100122b9(HANDLE param_1, LPVOID param_2, DWORD param_3)
 * body: 100122b9-100122dc
 */

DWORD __cdecl FUN_100122b9(HANDLE param_1,LPVOID param_2,DWORD param_3)

{
  BOOL BVar1;
  
  BVar1 = ReadFile(param_1,param_2,param_3,&param_3,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    param_3 = 0;
  }
  return param_3;
}


