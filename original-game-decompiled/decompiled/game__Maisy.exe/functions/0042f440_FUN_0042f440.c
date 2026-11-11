
/* ==== FUN_0042f440 @ 0042f440 ==== 
 * signature: undefined4 __cdecl FUN_0042f440(undefined4 param_1, char * param_2, char * param_3)
 * body: 0042f440-0042f479
 */

undefined4 __cdecl FUN_0042f440(undefined4 param_1,char *param_2,char *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  
  uVar2 = 0xffffffff;
  do {
    pcVar5 = param_3;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = param_3 + 1;
    cVar1 = *param_3;
    param_3 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  iVar3 = -1;
  do {
    pcVar6 = param_2;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar6 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar6;
  } while (cVar1 != '\0');
  pcVar5 = pcVar5 + -uVar2;
  pcVar6 = pcVar6 + -1;
  for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  return 0;
}


