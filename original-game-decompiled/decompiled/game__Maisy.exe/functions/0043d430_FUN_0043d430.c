
/* ==== FUN_0043d430 @ 0043d430 ==== 
 * signature: uint __cdecl FUN_0043d430(char * param_1, char * param_2)
 * body: 0043d430-0043d484
 */

uint __cdecl FUN_0043d430(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  
  do {
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    iVar3 = _toupper((int)cVar1);
    cVar1 = (char)iVar3;
    iVar3 = _toupper((int)*param_2);
    cVar2 = (char)iVar3;
    if ((cVar1 == '\0') || (cVar2 == '\0')) break;
    param_2 = param_2 + 1;
  } while (cVar1 == cVar2);
  if (cVar1 < cVar2) {
    return 0xffffffff;
  }
  return (uint)(cVar2 < cVar1);
}


