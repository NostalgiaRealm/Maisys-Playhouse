
/* ==== FUN_00437580 @ 00437580 ==== 
 * signature: undefined __cdecl FUN_00437580(char * param_1)
 * body: 00437580-004375ab
 */

void __cdecl FUN_00437580(char *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  
  uVar4 = 0xffffffff;
  pcVar5 = param_1;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  do {
    uVar3 = uVar4 - 1;
    if ((int)uVar3 < 0) break;
    iVar2 = uVar4 - 2;
    uVar4 = uVar3;
  } while (param_1[iVar2] == ' ');
  param_1[uVar3] = '\0';
  return;
}


