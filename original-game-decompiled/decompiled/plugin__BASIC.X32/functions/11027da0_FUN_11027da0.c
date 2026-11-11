
/* ==== FUN_11027da0 @ 11027da0 ==== 
 * signature: char * __cdecl FUN_11027da0(char * param_1)
 * body: 11027da0-11027e04
 */

char * __cdecl FUN_11027da0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  
  if (param_1 == (char *)0x0) {
    pcVar3 = (char *)FUN_11029420(1);
    if (pcVar3 != (char *)0x0) {
      pcVar3[1] = '\0';
    }
  }
  else {
    uVar4 = 0xffffffff;
    pcVar3 = param_1;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    pcVar2 = (char *)FUN_11029420(~uVar4);
    pcVar3 = (char *)0x0;
    if (pcVar2 != (char *)0x0) {
      uVar4 = 0xffffffff;
      do {
        pcVar3 = param_1;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar3 = param_1 + 1;
        cVar1 = *param_1;
        param_1 = pcVar3;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar3 = pcVar3 + -uVar4;
      pcVar6 = pcVar2;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar6 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar6 = pcVar6 + 1;
      }
      return pcVar2;
    }
  }
  return pcVar3;
}


