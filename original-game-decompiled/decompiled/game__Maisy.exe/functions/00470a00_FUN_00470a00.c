
/* ==== FUN_00470a00 @ 00470a00 ==== 
 * signature: bool __cdecl FUN_00470a00(char * param_1)
 * body: 00470a00-00470a3c
 */

bool __cdecl FUN_00470a00(char *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  if (param_1 != (char *)0x0) {
    iVar2 = -1;
    pcVar3 = param_1;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (iVar2 != -2) {
      iVar2 = _strncmp(param_1,s_http____004dc9a8,7);
      return iVar2 == 0;
    }
  }
  return false;
}


