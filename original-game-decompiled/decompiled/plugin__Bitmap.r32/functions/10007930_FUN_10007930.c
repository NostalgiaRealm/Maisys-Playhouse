
/* ==== FUN_10007930 @ 10007930 ==== 
 * signature: undefined __cdecl FUN_10007930(char * param_1)
 * body: 10007930-1000795b
 */

void __cdecl FUN_10007930(char *param_1)

{
  char *pcVar1;
  
  GetModuleFileNameA((HMODULE)0x0,param_1,0x100);
  pcVar1 = _strrchr(param_1,0x5c);
  if (pcVar1 != (char *)0x0) {
    *pcVar1 = '\0';
    return;
  }
  *param_1 = '\0';
  return;
}


