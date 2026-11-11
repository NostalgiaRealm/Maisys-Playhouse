
/* ==== FUN_0042ba80 @ 0042ba80 ==== 
 * signature: undefined4 __cdecl FUN_0042ba80(undefined4 param_1, char * param_2, char * param_3)
 * body: 0042ba80-0042bb9b
 */

undefined4 __cdecl FUN_0042ba80(undefined4 param_1,char *param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  
  uVar3 = 0xffffffff;
  pcVar8 = param_2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar4 = 0xffffffff;
  pcVar8 = param_2;
  do {
    pcVar10 = pcVar8;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar10 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar10;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar8 = pcVar10 + -uVar4;
  pcVar10 = param_3;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar4 = uVar4 & 3; iVar6 = 0, uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar10 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar10 = pcVar10 + 1;
  }
  do {
    iVar7 = iVar6;
    if ((int)(~uVar3 - 1) <= iVar6) break;
    iVar7 = iVar6 + 1;
    pcVar8 = param_2 + iVar6;
    iVar6 = iVar7;
  } while (*pcVar8 == ':');
  if (iVar7 < 2) {
    return 0;
  }
  FUN_0040f120(DAT_004d99a8,param_3);
  uVar3 = 0xffffffff;
  pcVar8 = param_3;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  iVar6 = ~uVar3 - 2;
  iVar2 = 0;
  while ((-1 < iVar6 && (iVar2 <= iVar7 + -2))) {
    if (param_3[iVar6] == '\\') {
      iVar2 = iVar2 + 1;
    }
    iVar6 = iVar6 + -1;
  }
  if ((iVar6 < 0) || (iVar2 < iVar7 + -2)) {
    return 0x10000;
  }
  param_3[iVar6 + 2] = '\0';
  uVar3 = 0xffffffff;
  pcVar8 = param_3;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  iVar6 = ~uVar3 - 1;
  uVar3 = 0xffffffff;
  pcVar8 = param_2 + iVar7 + -1;
  do {
    pcVar10 = pcVar8;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar10 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar10;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  iVar7 = -1;
  pcVar8 = param_3;
  do {
    pcVar9 = pcVar8;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar1 != '\0');
  pcVar8 = pcVar10 + -uVar3;
  pcVar10 = pcVar9 + -1;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar10 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar10 = pcVar10 + 1;
  }
  uVar3 = 0xffffffff;
  pcVar8 = param_3;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  for (; iVar6 < (int)(~uVar3 - 1); iVar6 = iVar6 + 1) {
    if (param_3[iVar6] == ':') {
      param_3[iVar6] = '\\';
    }
  }
  return 0;
}


