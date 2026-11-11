
/* ==== FUN_110147a0 @ 110147a0 ==== 
 * signature: undefined FUN_110147a0(void)
 * body: 110147a0-1101481b
 */

undefined4 FUN_110147a0(undefined4 param_1,int param_2,int param_3,char *param_4)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  
  if ((param_3 < 0) || (*(int *)(param_2 + 0x20) <= param_3)) {
    return 0xffff;
  }
  uVar2 = FUN_11013ee0(param_2);
  if ((char)uVar2 == '\0') {
    FUN_11013e60();
  }
  uVar3 = 0xffffffff;
  pcVar5 = *(char **)(*(int *)(param_2 + 0x28) + param_3 * 4);
  do {
    pcVar6 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar6 + -uVar3;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)param_4 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    param_4 = param_4 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_4 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    param_4 = param_4 + 1;
  }
  if ((char)uVar2 == '\0') {
    FUN_11013e70();
  }
  return 0;
}


