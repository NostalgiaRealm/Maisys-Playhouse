
/* ==== FUN_00482020 @ 00482020 ==== 
 * signature: undefined __cdecl FUN_00482020(char * param_1)
 * body: 00482020-00482038
 */

void __cdecl FUN_00482020(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  do {
    if (cVar1 == '\0') {
      return;
    }
  } while ((cVar1 == ' ') || (cVar1 == '\t'));
  return;
}


