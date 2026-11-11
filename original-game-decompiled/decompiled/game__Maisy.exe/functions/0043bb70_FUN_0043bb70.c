
/* ==== FUN_0043bb70 @ 0043bb70 ==== 
 * signature: undefined __cdecl FUN_0043bb70(undefined4 param_1, undefined4 param_2, char * param_3)
 * body: 0043bb70-0043bbe4
 */

void __cdecl FUN_0043bb70(undefined4 param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  _sprintf(param_3,&DAT_004db534,param_1,param_2);
  uVar3 = 0xffffffff;
  pcVar6 = param_3;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar2 = 0;
  if (~uVar3 != 1) {
    do {
      if (param_3[uVar2] == '.') {
        return;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < ~uVar3 - 1);
  }
  uVar3 = 0xffffffff;
  pcVar6 = &DAT_004db530;
  do {
    pcVar5 = pcVar6;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar5 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar5;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  iVar4 = -1;
  do {
    pcVar6 = param_3;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar6 = param_3 + 1;
    cVar1 = *param_3;
    param_3 = pcVar6;
  } while (cVar1 != '\0');
  pcVar5 = pcVar5 + -uVar3;
  pcVar6 = pcVar6 + -1;
  for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  return;
}


