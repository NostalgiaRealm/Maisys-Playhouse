
/* ==== FUN_14019700 @ 14019700 ==== 
 * signature: undefined __cdecl FUN_14019700(char * param_1)
 * body: 14019700-14019758
 */

void __cdecl FUN_14019700(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  cVar1 = *param_1;
  while ((cVar1 != '\0' && (*param_1 != DAT_14027080))) {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  pcVar2 = param_1 + 1;
  if (*param_1 != '\0') {
    cVar1 = *pcVar2;
    while (((cVar1 != '\0' && (*pcVar2 != 'e')) && (*pcVar2 != 'E'))) {
      pcVar2 = pcVar2 + 1;
      cVar1 = *pcVar2;
    }
    pcVar3 = pcVar2 + -1;
    cVar1 = *pcVar3;
    while (cVar1 == '0') {
      pcVar3 = pcVar3 + -1;
      cVar1 = *pcVar3;
    }
    if (*pcVar3 == DAT_14027080) {
      pcVar3 = pcVar3 + -1;
    }
    do {
      cVar1 = *pcVar2;
      pcVar3 = pcVar3 + 1;
      pcVar2 = pcVar2 + 1;
      *pcVar3 = cVar1;
    } while (cVar1 != '\0');
  }
  return;
}


