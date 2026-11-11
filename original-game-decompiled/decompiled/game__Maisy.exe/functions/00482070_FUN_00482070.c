
/* ==== FUN_00482070 @ 00482070 ==== 
 * signature: uint __stdcall FUN_00482070(int param_1, char * param_2)
 * body: 00482070-004820bc
 */

uint FUN_00482070(int param_1,char *param_2)

{
  char cVar1;
  uint in_EAX;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  
  if ((param_1 == 0) || (param_2 == (char *)0x0)) {
    return in_EAX & 0xffffff00;
  }
  uVar2 = 0xffffffff;
  pcVar3 = param_2;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  iVar4 = 0;
  if (0 < (int)(~uVar2 - 1)) {
    do {
      if (param_2[iVar4] != *(char *)(iVar4 + param_1)) {
        return 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(~uVar2 - 1));
  }
  return 1;
}


