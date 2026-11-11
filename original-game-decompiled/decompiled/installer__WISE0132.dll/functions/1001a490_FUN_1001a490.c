
/* ==== FUN_1001a490 @ 1001a490 ==== 
 * signature: undefined __cdecl FUN_1001a490(char * param_1)
 * body: 1001a490-1001a4c2
 */

void __cdecl FUN_1001a490(char *param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  cVar2 = *param_1;
  do {
    if (cVar2 == '\0') {
      return;
    }
    if ((cVar2 < '0') || ('9' < cVar2)) {
      pcVar3 = param_1;
      if (cVar2 != ';') goto LAB_1001a4a6;
      do {
        *pcVar3 = pcVar3[1];
        pcVar1 = pcVar3 + 1;
        pcVar3 = pcVar3 + 1;
      } while (*pcVar1 != '\0');
    }
    else {
      *param_1 = cVar2 + -0x30;
LAB_1001a4a6:
      param_1 = param_1 + 1;
    }
    cVar2 = *param_1;
  } while( true );
}


