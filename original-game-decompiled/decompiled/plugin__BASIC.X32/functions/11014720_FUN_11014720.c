
/* ==== FUN_11014720 @ 11014720 ==== 
 * signature: undefined FUN_11014720(void)
 * body: 11014720-11014797
 */

void FUN_11014720(undefined4 *param_1,int param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char acStack_104 [260];
  
  uVar3 = 0xffffffff;
  do {
    pcVar2 = param_3;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar2 = param_3 + 1;
    cVar1 = *param_3;
    param_3 = pcVar2;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar2 = pcVar2 + -uVar3;
  pcVar5 = acStack_104;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar5 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar5 = pcVar5 + 1;
  }
  pcVar2 = acStack_104;
  while (acStack_104[0] != '\0') {
    cVar1 = *pcVar2;
    if (('@' < cVar1) && (cVar1 < '[')) {
      *pcVar2 = cVar1 + ' ';
    }
    pcVar2 = pcVar2 + 1;
    acStack_104[0] = *pcVar2;
  }
  FUN_110146b0(param_1,param_2,acStack_104);
  return;
}


