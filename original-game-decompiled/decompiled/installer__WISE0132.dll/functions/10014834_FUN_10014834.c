
/* ==== FUN_10014834 @ 10014834 ==== 
 * signature: LPCSTR __cdecl FUN_10014834(LPCSTR param_1, int param_2)
 * body: 10014834-10014858
 */

LPCSTR __cdecl FUN_10014834(LPCSTR param_1,int param_2)

{
  LPCSTR pCVar1;
  
  pCVar1 = param_1;
  for (; *param_1 != '\0'; param_1 = CharNextA(param_1)) {
    if (*param_1 == param_2) {
      pCVar1 = param_1;
    }
  }
  return pCVar1;
}


