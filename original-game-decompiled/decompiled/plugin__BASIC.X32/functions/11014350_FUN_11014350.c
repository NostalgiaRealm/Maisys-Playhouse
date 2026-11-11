
/* ==== FUN_11014350 @ 11014350 ==== 
 * signature: int __cdecl FUN_11014350(char * param_1, char * param_2)
 * body: 11014350-110143d5
 */

int __cdecl FUN_11014350(char *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  
  if ((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) {
    if ((param_1 == (char *)0x0) || (iVar1 = 1, *param_1 == '\0')) {
      iVar1 = 0;
    }
    if ((param_2 == (char *)0x0) || (iVar2 = 1, *param_2 == '\0')) {
      iVar2 = 0;
    }
    if (iVar2 == iVar1) {
      return 0;
    }
    iVar1 = (-(uint)(iVar2 == 0) & 2) - 1;
  }
  else {
    do {
      cVar3 = *param_1;
      cVar4 = *param_2;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      if (('`' < cVar3) && (cVar3 < '{')) {
        cVar3 = cVar3 + -0x20;
      }
      if (('`' < cVar4) && (cVar4 < '{')) {
        cVar4 = cVar4 + -0x20;
      }
    } while (((cVar3 != '\0') && (cVar4 != '\0')) && (cVar4 == cVar3));
    if (cVar3 < cVar4) {
      return -1;
    }
    iVar1 = 1;
    if (cVar3 <= cVar4) {
      return 0;
    }
  }
  return iVar1;
}


