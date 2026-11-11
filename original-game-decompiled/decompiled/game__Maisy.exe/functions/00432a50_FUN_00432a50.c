
/* ==== FUN_00432a50 @ 00432a50 ==== 
 * signature: char * __cdecl FUN_00432a50(char * param_1, char * param_2, char param_3, int param_4)
 * body: 00432a50-00432aad
 */

char * __cdecl FUN_00432a50(char *param_1,char *param_2,char param_3,int param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar4 = (char *)0x0;
  uVar3 = 0xffffffff;
  pcVar5 = param_2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  pcVar5 = param_1;
  while ((param_4 != 0 && (param_4 = param_4 + -1, -1 < (int)pcVar4))) {
    iVar2 = FUN_00432ab0(pcVar5,param_2,param_3);
    pcVar4 = (char *)0xffffffff;
    if (-1 < iVar2) {
      pcVar4 = pcVar5 + (iVar2 - (int)param_1);
      pcVar5 = pcVar5 + iVar2 + (~uVar3 - 1);
    }
  }
  return pcVar4;
}


