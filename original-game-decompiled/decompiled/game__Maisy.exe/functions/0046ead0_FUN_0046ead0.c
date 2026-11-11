
/* ==== FUN_0046ead0 @ 0046ead0 ==== 
 * signature: uint __cdecl FUN_0046ead0(char * param_1, undefined4 param_2, char * param_3)
 * body: 0046ead0-0046ebe8
 */

uint __cdecl FUN_0046ead0(char *param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  
  uVar3 = 0xffffffff;
  pcVar2 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar4 = 0xffffffff;
  pcVar2 = param_1;
  do {
    pcVar10 = pcVar2;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar10 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar10;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar2 = pcVar10 + -uVar4;
  pcVar10 = param_3;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar5 = uVar4 & 3; uVar8 = 0, uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar10 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar10 = pcVar10 + 1;
  }
  do {
    uVar5 = uVar8;
    if ((int)(~uVar3 - 1) <= (int)uVar8) break;
    uVar5 = uVar8 + 1;
    pcVar2 = param_1 + uVar8;
    uVar4 = uVar8;
    uVar8 = uVar5;
  } while (*pcVar2 == ':');
  if ((int)uVar5 < 2) {
    return CONCAT31((int3)(uVar4 >> 8),1);
  }
  FUN_0040f120(DAT_004d99a8,param_3);
  uVar3 = 0xffffffff;
  pcVar2 = param_3;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  iVar6 = ~uVar3 - 2;
  uVar3 = 0;
  while ((-1 < iVar6 && ((int)uVar3 <= (int)(uVar5 - 2)))) {
    if (param_3[iVar6] == '\\') {
      uVar3 = uVar3 + 1;
    }
    iVar6 = iVar6 + -1;
  }
  if ((iVar6 < 0) || ((int)uVar3 < (int)(uVar5 - 2))) {
    return uVar3 & 0xffffff00;
  }
  param_3[iVar6 + 2] = '\0';
  uVar3 = 0xffffffff;
  pcVar2 = param_3;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  iVar6 = ~uVar3 - 1;
  uVar3 = 0xffffffff;
  pcVar2 = param_1 + (uVar5 - 1);
  do {
    pcVar10 = pcVar2;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar10 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar10;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  iVar7 = -1;
  pcVar2 = param_3;
  do {
    pcVar9 = pcVar2;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar9 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar9;
  } while (cVar1 != '\0');
  pcVar2 = pcVar10 + -uVar3;
  pcVar10 = pcVar9 + -1;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar10 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar10 = pcVar10 + 1;
  }
  uVar3 = 0xffffffff;
  pcVar2 = (char *)0x0;
  pcVar10 = param_3;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  for (; iVar6 < (int)(~uVar3 - 1); iVar6 = iVar6 + 1) {
    pcVar2 = param_3 + iVar6;
    if (*pcVar2 == ':') {
      *pcVar2 = '\\';
    }
  }
  return CONCAT31((int3)((uint)pcVar2 >> 8),1);
}


