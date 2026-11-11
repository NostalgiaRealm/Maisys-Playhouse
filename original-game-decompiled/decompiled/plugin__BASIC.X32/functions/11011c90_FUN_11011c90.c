
/* ==== FUN_11011c90 @ 11011c90 ==== 
 * signature: undefined __cdecl FUN_11011c90(undefined4 * param_1, char * param_2, undefined4 * param_3, undefined4 * param_4)
 * body: 11011c90-11011dae
 */

void __cdecl FUN_11011c90(undefined4 *param_1,char *param_2,undefined4 *param_3,undefined4 *param_4)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_4;
  
  iVar3 = 0;
  if (*param_2 == '(') {
    param_2 = param_2 + 1;
  }
  while( true ) {
    pcVar1 = param_2 + iVar3;
    cVar2 = FUN_11015470(*pcVar1);
    if (((cVar2 == '\0') && (*pcVar1 != ' ')) && (*pcVar1 != '-')) break;
    if (*pcVar1 == '\0') {
      *param_3 = 0;
      *param_4 = 0;
      return;
    }
    iVar3 = iVar3 + 1;
  }
  pcVar1 = param_2 + iVar3;
  if (*pcVar1 == '\0') {
    *param_3 = 0;
    *param_4 = 0;
    return;
  }
  *pcVar1 = '\0';
  pcVar4 = pcVar1 + 1;
  FUN_11020cf0(param_1,param_2,&local_4);
  *param_3 = local_4;
  cVar2 = FUN_11015470(*pcVar4);
  for (iVar3 = 0; (cVar2 == '\0' && (pcVar4[iVar3] != '-')); iVar3 = iVar3 + 1) {
    cVar2 = FUN_11015470(pcVar1[iVar3 + 2]);
  }
  pcVar4 = pcVar4 + iVar3;
  cVar2 = *pcVar4;
  if (cVar2 == '\0') {
    *param_3 = 0;
    *param_4 = 0;
    return;
  }
  iVar3 = 0;
  while ((cVar2 != ')' && (pcVar4[iVar3] != '\0'))) {
    iVar3 = iVar3 + 1;
    cVar2 = pcVar4[iVar3];
  }
  pcVar4[iVar3] = '\0';
  FUN_11020cf0(param_1,pcVar4,&local_4);
  *param_4 = local_4;
  return;
}


