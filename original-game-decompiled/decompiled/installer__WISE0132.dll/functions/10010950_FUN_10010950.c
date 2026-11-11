
/* ==== FUN_10010950 @ 10010950 ==== 
 * signature: char * __cdecl FUN_10010950(char * param_1, char * param_2)
 * body: 10010950-10010977
 */

char * __cdecl FUN_10010950(char *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  
  cVar2 = *param_2;
  while ((cVar2 != '\0' && (cVar2 != '\x7f'))) {
    *param_1 = cVar2;
    pcVar1 = param_2 + 1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    cVar2 = *pcVar1;
  }
  *param_1 = '\0';
  if (*param_2 == '\x7f') {
    param_2 = param_2 + 1;
  }
  return param_2;
}


