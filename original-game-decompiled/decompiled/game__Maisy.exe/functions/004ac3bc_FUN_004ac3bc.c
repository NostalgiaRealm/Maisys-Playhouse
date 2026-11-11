
/* ==== FUN_004ac3bc @ 004ac3bc ==== 
 * signature: LPSTR __stdcall FUN_004ac3bc(LPSTR param_1, LPCWSTR param_2, int param_3)
 * body: 004ac3bc-004ac3e8
 */

LPSTR FUN_004ac3bc(LPSTR param_1,LPCWSTR param_2,int param_3)

{
  if (param_2 == (LPCWSTR)0x0) {
    param_1 = (LPSTR)0x0;
  }
  else {
    *param_1 = '\0';
    WideCharToMultiByte(0,0,param_2,-1,param_1,param_3,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  return param_1;
}


