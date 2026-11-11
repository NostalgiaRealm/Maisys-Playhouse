
/* ==== FUN_0046d200 @ 0046d200 ==== 
 * signature: char * __cdecl FUN_0046d200(char * param_1, char param_2)
 * body: 0046d200-0046d24f
 */

char * __cdecl FUN_0046d200(char *param_1,char param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  
  bVar2 = false;
  bVar3 = false;
  cVar1 = *param_1;
  while ((cVar1 != '\0' && (((cVar1 = *param_1, cVar1 != param_2 || (bVar2)) || (bVar3))))) {
    if ((cVar1 == '\"') && (!bVar2)) {
      bVar3 = !bVar3;
    }
    if ((cVar1 == '\'') && (!bVar3)) {
      bVar2 = !bVar2;
    }
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  if (*param_1 != param_2) {
    param_1 = (char *)0x0;
  }
  return param_1;
}


