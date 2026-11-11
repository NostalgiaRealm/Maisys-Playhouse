
/* ==== FUN_0043bae0 @ 0043bae0 ==== 
 * signature: undefined __cdecl FUN_0043bae0(uint param_1, char * param_2)
 * body: 0043bae0-0043bb4c
 */

void __cdecl FUN_0043bae0(uint param_1,char *param_2)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  
  uVar4 = 0xf0000000;
  uVar2 = 0xffffffff;
  pcVar6 = &DAT_004d99e4;
  do {
    pcVar7 = pcVar6;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar7 = pcVar6 + 1;
    cVar5 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar5 != '\0');
  uVar2 = ~uVar2;
  pcVar6 = pcVar7 + -uVar2;
  pcVar7 = param_2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  sVar1 = 0;
  do {
    cVar5 = (char)((uVar4 & param_1) >> ((7U - (char)sVar1 & 7) << 2));
    if (cVar5 < '\n') {
      cVar5 = cVar5 + '0';
    }
    else {
      cVar5 = cVar5 + 'W';
    }
    uVar4 = uVar4 >> 4;
    iVar8 = (int)sVar1;
    sVar1 = sVar1 + 1;
    param_2[iVar8] = cVar5;
  } while (sVar1 < 8);
  param_2[8] = '\0';
  return;
}


