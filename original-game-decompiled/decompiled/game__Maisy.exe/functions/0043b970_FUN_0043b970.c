
/* ==== FUN_0043b970 @ 0043b970 ==== 
 * signature: char * __cdecl FUN_0043b970(char * param_1)
 * body: 0043b970-0043b9bd
 */

char * __cdecl FUN_0043b970(char *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  iVar2 = FUN_0043ba40(param_1);
  pcVar3 = (char *)FUN_0043b950(iVar2);
  if (param_1 == (char *)0x0) {
    *pcVar3 = '\0';
    return pcVar3;
  }
  uVar4 = 0xffffffff;
  do {
    pcVar6 = param_1;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar6 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar6;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar6 + -uVar4;
  pcVar7 = pcVar3;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  return pcVar3;
}


