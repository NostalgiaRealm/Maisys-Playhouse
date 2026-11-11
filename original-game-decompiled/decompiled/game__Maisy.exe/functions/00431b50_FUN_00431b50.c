
/* ==== FUN_00431b50 @ 00431b50 ==== 
 * signature: undefined __cdecl FUN_00431b50(char * param_1, char * param_2, int param_3, size_t * param_4, size_t * param_5, char param_6)
 * body: 00431b50-00431c3d
 */

void __cdecl
FUN_00431b50(char *param_1,char *param_2,int param_3,size_t *param_4,size_t *param_5,char param_6)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  size_t sVar4;
  
  *param_4 = 0;
  *param_5 = 0;
  if (param_3 != 0) {
    if (param_3 < 0) {
      iVar1 = FUN_00431cd0(param_1,param_2,param_6);
      param_3 = iVar1 + 1 + param_3;
      if (param_3 < 1) {
        return;
      }
    }
    if ((param_6 != '\0') && (pcVar2 = _strchr(param_2,(int)*param_1), pcVar2 != (char *)0x0)) {
      sVar3 = _strspn(param_1,param_2);
      *param_4 = sVar3;
    }
    sVar3 = *param_4;
    sVar4 = _strcspn(param_1 + sVar3,param_2);
    param_3 = param_3 + -1;
    *param_5 = sVar4 + sVar3;
    if (param_3 != 0) {
      while (param_1[*param_5] != '\0') {
        sVar3 = *param_5 + 1;
        *param_4 = sVar3;
        if (param_6 != '\0') {
          sVar4 = _strspn(param_1 + sVar3,param_2);
          *param_4 = sVar4 + sVar3;
        }
        sVar3 = *param_4;
        sVar4 = _strcspn(param_1 + sVar3,param_2);
        param_3 = param_3 + -1;
        *param_5 = sVar4 + sVar3;
        if (param_3 == 0) {
          return;
        }
      }
      *param_4 = *param_5;
    }
  }
  return;
}


