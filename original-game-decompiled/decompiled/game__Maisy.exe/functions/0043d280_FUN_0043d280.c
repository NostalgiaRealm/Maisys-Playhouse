
/* ==== FUN_0043d280 @ 0043d280 ==== 
 * signature: short __cdecl FUN_0043d280(char * param_1, char param_2)
 * body: 0043d280-0043d2b9
 */

short __cdecl FUN_0043d280(char *param_1,char param_2)

{
  char cVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  char *pcVar5;
  
  iVar4 = -1;
  pcVar5 = param_1;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  sVar2 = 0;
  sVar3 = ~(ushort)iVar4 - 1;
  if (0 < sVar3) {
    do {
      if (param_1[sVar2] == param_2) {
        return sVar2;
      }
      sVar2 = sVar2 + 1;
    } while (sVar2 < sVar3);
  }
  return -1;
}


