
/* ==== FUN_100102fe @ 100102fe ==== 
 * signature: undefined __cdecl FUN_100102fe(LPSTR param_1, LPCSTR param_2)
 * body: 100102fe-10010335
 */

void __cdecl FUN_100102fe(LPSTR param_1,LPCSTR param_2)

{
  char cVar1;
  
  *param_1 = '\0';
  cVar1 = *param_2;
  if (cVar1 != '\0') {
    while (cVar1 == ' ') {
      param_2 = param_2 + 1;
      cVar1 = *param_2;
    }
    lstrcpyA(param_1,param_2);
    if (*param_1 != '\0') {
      FUN_1001488c(param_1,(uint *)&DAT_1001f288);
    }
  }
  return;
}


