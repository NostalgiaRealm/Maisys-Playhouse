
/* ==== FUN_004332c0 @ 004332c0 ==== 
 * signature: undefined __cdecl FUN_004332c0(HLOCAL param_1, char * param_2)
 * body: 004332c0-00433338
 */

void __cdecl FUN_004332c0(HLOCAL param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  LPVOID pvVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  
  pcVar2 = LocalLock(param_1);
  uVar4 = 0xffffffff;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  LocalUnlock(param_1);
  uVar5 = 0xffffffff;
  pcVar2 = param_2;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_0043f730(param_1,~uVar5 + (~uVar4 - 1));
  pvVar3 = LocalLock(param_1);
  uVar5 = 0xffffffff;
  do {
    pcVar2 = param_2;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar2 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar2;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar2 = pcVar2 + -uVar5;
  pcVar7 = (char *)((~uVar4 - 1) + (int)pvVar3);
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar7 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar7 = pcVar7 + 1;
  }
  LocalUnlock(param_1);
  return;
}


