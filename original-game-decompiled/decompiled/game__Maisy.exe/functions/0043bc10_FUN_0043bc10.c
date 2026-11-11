
/* ==== FUN_0043bc10 @ 0043bc10 ==== 
 * signature: undefined __cdecl FUN_0043bc10(char * param_1)
 * body: 0043bc10-0043bc58
 */

void __cdecl FUN_0043bc10(char *param_1)

{
  char cVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  short sVar5;
  char *pcVar6;
  
  iVar4 = -1;
  pcVar6 = param_1;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  sVar5 = 0;
  sVar3 = ~(ushort)iVar4 - 2;
  if (0 < sVar3) {
    do {
      iVar2 = (int)sVar5;
      sVar5 = sVar5 + 1;
      param_1[iVar2] = (param_1 + iVar2)[1];
    } while (sVar5 < sVar3);
  }
  if (param_1[sVar3] == '\"') {
    sVar3 = ~(ushort)iVar4 - 3;
  }
  param_1[sVar3] = '\0';
  return;
}


