
/* ==== FUN_11023440 @ 11023440 ==== 
 * signature: undefined __cdecl FUN_11023440(undefined4 * param_1, char * param_2, undefined2 * param_3)
 * body: 11023440-110234d4
 */

void __cdecl FUN_11023440(undefined4 *param_1,char *param_2,undefined2 *param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined2 local_4 [2];
  
  iVar2 = 0;
  if (*param_2 == '(') {
    param_2 = param_2 + 1;
  }
  cVar1 = *param_2;
  while( true ) {
    if (cVar1 == ',') {
      param_2[iVar2] = '\0';
      pcVar3 = param_2 + iVar2 + 1;
      FUN_11020cf0(param_1,param_2,local_4);
      *param_3 = local_4[0];
      iVar2 = 0;
      cVar1 = *pcVar3;
      while ((cVar1 != ')' && (pcVar3[iVar2] != '\0'))) {
        iVar2 = iVar2 + 1;
        cVar1 = pcVar3[iVar2];
      }
      pcVar3[iVar2] = '\0';
      FUN_11020cf0(param_1,pcVar3,local_4);
      param_3[1] = local_4[0];
      return;
    }
    if (param_2[iVar2] == '\0') break;
    iVar2 = iVar2 + 1;
    cVar1 = param_2[iVar2];
  }
  param_3[1] = 0;
  *param_3 = 0;
  return;
}


