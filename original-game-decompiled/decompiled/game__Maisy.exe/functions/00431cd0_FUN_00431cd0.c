
/* ==== FUN_00431cd0 @ 00431cd0 ==== 
 * signature: int __cdecl FUN_00431cd0(char * param_1, char * param_2, char param_3)
 * body: 00431cd0-00431d32
 */

int __cdecl FUN_00431cd0(char *param_1,char *param_2,char param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  
  iVar5 = 0;
  cVar1 = *param_1;
  pcVar6 = param_1;
  cVar2 = '\0';
  while (cVar1 != '\0') {
    pcVar4 = _strchr(param_2,(int)*pcVar6);
    cVar3 = '\x01' - (pcVar4 == (char *)0x0);
    if ((cVar3 != '\0') && ((param_3 == '\0' || (cVar2 == '\0')))) {
      iVar5 = iVar5 + 1;
    }
    pcVar6 = pcVar6 + 1;
    cVar2 = cVar3;
    cVar1 = *pcVar6;
  }
  if (cVar2 == '\0') {
    iVar5 = iVar5 + 1;
  }
  pcVar6 = _strchr(param_2,(int)*param_1);
  if (pcVar6 != (char *)0x0) {
    iVar5 = iVar5 + -1;
  }
  return iVar5;
}


