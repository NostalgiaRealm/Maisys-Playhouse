
/* ==== FUN_0043f650 @ 0043f650 ==== 
 * signature: char * __cdecl FUN_0043f650(char * param_1)
 * body: 0043f650-0043f6cc
 */

char * __cdecl FUN_0043f650(char *param_1)

{
  char cVar1;
  char *pcVar2;
  SIZE_T SVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  SVar3 = 1;
  if (param_1 != (char *)0x0) {
    uVar4 = 0xffffffff;
    pcVar2 = param_1;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    SVar3 = ~uVar4;
  }
  if (param_1 == (char *)0x0) {
    pcVar2 = (char *)FUN_00434920(DAT_004d99ac,SVar3,1);
    if (pcVar2 == (char *)0x0) {
      return (char *)0x0;
    }
    *pcVar2 = '\0';
    return pcVar2;
  }
  pcVar2 = (char *)FUN_00434920(DAT_004d99ac,SVar3,1);
  if (pcVar2 == (char *)0x0) {
    return (char *)0x0;
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
  pcVar7 = pcVar2;
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
  return pcVar2;
}


