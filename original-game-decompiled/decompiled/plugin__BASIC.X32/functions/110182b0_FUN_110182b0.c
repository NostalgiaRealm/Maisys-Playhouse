
/* ==== FUN_110182b0 @ 110182b0 ==== 
 * signature: undefined __cdecl FUN_110182b0(undefined4 * param_1, char * param_2, double * param_3, undefined4 * param_4)
 * body: 110182b0-110183e8
 */

void __cdecl FUN_110182b0(undefined4 *param_1,char *param_2,double *param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 local_8;
  undefined4 uStack_4;
  
  iVar2 = 0;
  if (*param_2 == '(') {
    param_2 = param_2 + 1;
  }
  while( true ) {
    pcVar3 = param_2 + iVar2;
    cVar1 = FUN_11015470(*pcVar3);
    if ((((cVar1 == '\0') && (cVar1 = *pcVar3, cVar1 != ' ')) && (cVar1 != '-')) && (cVar1 != '.'))
    break;
    if (*pcVar3 == '\0') {
      *(undefined4 *)param_3 = 0;
      *(undefined4 *)((int)param_3 + 4) = 0;
      *param_4 = 0;
      param_4[1] = 0;
      return;
    }
    iVar2 = iVar2 + 1;
  }
  pcVar3 = param_2 + iVar2;
  if (*pcVar3 == '\0') {
    *(undefined4 *)param_3 = 0;
    *(undefined4 *)((int)param_3 + 4) = 0;
    *param_4 = 0;
    param_4[1] = 0;
    return;
  }
  *pcVar3 = '\0';
  FUN_11013c40(param_1,param_2,&local_8);
  pcVar4 = pcVar3 + 1;
  *param_3 = (double)CONCAT44(uStack_4,local_8) * 3.141592653589793 * 0.005555555555555556;
  cVar1 = FUN_11015470(*pcVar4);
  for (iVar2 = 0; ((cVar1 == '\0' && (pcVar4[iVar2] != '-')) && (pcVar4[iVar2] != '.'));
      iVar2 = iVar2 + 1) {
    cVar1 = FUN_11015470(pcVar3[iVar2 + 2]);
  }
  pcVar4 = pcVar4 + iVar2;
  cVar1 = *pcVar4;
  if (cVar1 == '\0') {
    *(undefined4 *)param_3 = 0;
    *(undefined4 *)((int)param_3 + 4) = 0;
    *param_4 = 0;
    param_4[1] = 0;
    return;
  }
  iVar2 = 0;
  while ((cVar1 != ')' && (pcVar4[iVar2] != '\0'))) {
    iVar2 = iVar2 + 1;
    cVar1 = pcVar4[iVar2];
  }
  pcVar4[iVar2] = '\0';
  FUN_11013c40(param_1,pcVar4,&local_8);
  param_4[1] = uStack_4;
  *param_4 = local_8;
  return;
}


