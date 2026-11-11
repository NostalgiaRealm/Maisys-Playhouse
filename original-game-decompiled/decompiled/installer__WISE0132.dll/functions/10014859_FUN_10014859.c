
/* ==== FUN_10014859 @ 10014859 ==== 
 * signature: LPCSTR __cdecl FUN_10014859(LPSTR param_1, uint * param_2)
 * body: 10014859-1001488b
 */

LPCSTR __cdecl FUN_10014859(LPSTR param_1,uint *param_2)

{
  uint *puVar1;
  LPCSTR pCVar2;
  
  pCVar2 = param_1;
  for (; *param_1 != '\0'; param_1 = CharNextA(param_1)) {
    puVar1 = FUN_10016a60(param_2,*param_1);
    if (puVar1 == (uint *)0x0) {
      pCVar2 = param_1;
    }
  }
  return pCVar2;
}


