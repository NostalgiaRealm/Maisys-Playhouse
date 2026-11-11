
/* ==== FUN_00407b85 @ 00407b85 ==== 
 * signature: undefined4 __cdecl FUN_00407b85(char * param_1)
 * body: 00407b85-00407bc6
 */

undefined4 __cdecl FUN_00407b85(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  
  cVar3 = *param_1;
  pcVar2 = param_1;
  while ((cVar3 != '\0' && (cVar3 != '\r'))) {
    pcVar1 = pcVar2 + 1;
    pcVar2 = pcVar2 + 1;
    cVar3 = *pcVar1;
  }
  while( true ) {
    if (*pcVar2 != '\0') {
      pcVar2 = pcVar2 + 2;
    }
    cVar3 = *pcVar2;
    if (cVar3 == '\0') break;
    if (cVar3 == '\"') {
      return 0;
    }
    while ((cVar3 != '\0' && (cVar3 != '\r'))) {
      pcVar1 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
      cVar3 = *pcVar1;
    }
  }
  *param_1 = '*';
  return 1;
}


