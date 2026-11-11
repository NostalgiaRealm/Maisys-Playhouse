
/* ==== FUN_1000cb80 @ 1000cb80 ==== 
 * signature: undefined __cdecl FUN_1000cb80(char * param_1)
 * body: 1000cb80-1000cbb2
 */

void __cdecl FUN_1000cb80(char *param_1)

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
      if (cVar2 != ';') goto LAB_1000cb96;
      do {
        *pcVar3 = pcVar3[1];
        pcVar1 = pcVar3 + 1;
        pcVar3 = pcVar3 + 1;
      } while (*pcVar1 != '\0');
    }
    else {
      *param_1 = cVar2 + -0x30;
LAB_1000cb96:
      param_1 = param_1 + 1;
    }
    cVar2 = *param_1;
  } while( true );
}


