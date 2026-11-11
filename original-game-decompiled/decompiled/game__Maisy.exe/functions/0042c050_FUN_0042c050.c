
/* ==== FUN_0042c050 @ 0042c050 ==== 
 * signature: undefined4 __cdecl FUN_0042c050(int param_1, char * param_2, char * param_3)
 * body: 0042c050-0042c09b
 */

undefined4 __cdecl FUN_0042c050(int param_1,char *param_2,char *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  
  if (param_1 != 0) {
    iVar3 = -1;
    pcVar4 = param_2;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (iVar3 != -2) {
      if (*param_2 != ':') {
        uVar2 = FUN_0042bba0(param_1,param_2,param_3);
        return uVar2;
      }
      uVar2 = FUN_0042ba80(param_1,param_2,param_3);
      return uVar2;
    }
  }
  return 0x10000;
}


