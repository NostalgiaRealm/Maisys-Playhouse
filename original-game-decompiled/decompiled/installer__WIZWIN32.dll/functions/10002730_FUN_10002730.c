
/* ==== FUN_10002730 @ 10002730 ==== 
 * signature: undefined __cdecl FUN_10002730(char * param_1)
 * body: 10002730-1000289c
 */

void __cdecl FUN_10002730(char *param_1)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  
  bVar3 = false;
  iVar6 = 0;
  pcVar7 = &DAT_100042e0;
  cVar2 = *param_1;
  while (cVar2 != '\0') {
    if (cVar2 == '[') {
      if (iVar6 < 2) {
        bVar3 = true;
        pcVar5 = &DAT_100041c0;
        cVar2 = param_1[1];
        while (pcVar4 = param_1 + 1, cVar2 == ' ') {
          cVar2 = param_1[2];
          param_1 = pcVar4;
        }
        cVar2 = *pcVar4;
        while ((cVar2 != '^' && (cVar2 != '\0'))) {
          *pcVar5 = cVar2;
          pcVar1 = pcVar4 + 1;
          pcVar5 = pcVar5 + 1;
          pcVar4 = pcVar4 + 1;
          cVar2 = *pcVar1;
        }
        cVar2 = *pcVar5;
        while (cVar2 == ' ') {
          *pcVar5 = '\0';
          pcVar1 = pcVar5 + -1;
          pcVar5 = pcVar5 + -1;
          cVar2 = *pcVar1;
        }
        pcVar5 = &DAT_10004200;
        cVar2 = pcVar4[1];
        while (param_1 = pcVar4 + 1, cVar2 == ' ') {
          cVar2 = pcVar4[2];
          pcVar4 = param_1;
        }
        cVar2 = *param_1;
        while ((cVar2 != ']' && (cVar2 != '\0'))) {
          *pcVar5 = cVar2;
          pcVar4 = param_1 + 1;
          pcVar5 = pcVar5 + 1;
          param_1 = param_1 + 1;
          cVar2 = *pcVar4;
        }
        cVar2 = *pcVar5;
        while (cVar2 == ' ') {
          *pcVar5 = '\0';
          pcVar4 = pcVar5 + -1;
          pcVar5 = pcVar5 + -1;
          cVar2 = *pcVar4;
        }
      }
      else {
        if (!bVar3) {
          *pcVar7 = '%';
          pcVar7[1] = 's';
          pcVar7 = pcVar7 + 2;
        }
        pcVar5 = &DAT_10004120;
        cVar2 = param_1[1];
        while (pcVar4 = param_1 + 1, cVar2 == ' ') {
          cVar2 = param_1[2];
          param_1 = pcVar4;
        }
        cVar2 = *pcVar4;
        while ((cVar2 != '^' && (cVar2 != '\0'))) {
          *pcVar5 = cVar2;
          pcVar1 = pcVar4 + 1;
          pcVar5 = pcVar5 + 1;
          pcVar4 = pcVar4 + 1;
          cVar2 = *pcVar1;
        }
        cVar2 = *pcVar5;
        while (cVar2 == ' ') {
          *pcVar5 = '\0';
          pcVar1 = pcVar5 + -1;
          pcVar5 = pcVar5 + -1;
          cVar2 = *pcVar1;
        }
        pcVar5 = &DAT_10004160;
        cVar2 = pcVar4[1];
        while (param_1 = pcVar4 + 1, cVar2 == ' ') {
          cVar2 = pcVar4[2];
          pcVar4 = param_1;
        }
        cVar2 = *param_1;
        while ((cVar2 != ']' && (cVar2 != '\0'))) {
          *pcVar5 = cVar2;
          pcVar4 = param_1 + 1;
          pcVar5 = pcVar5 + 1;
          param_1 = param_1 + 1;
          cVar2 = *pcVar4;
        }
        cVar2 = *pcVar5;
        while (cVar2 == ' ') {
          *pcVar5 = '\0';
          pcVar4 = pcVar5 + -1;
          pcVar5 = pcVar5 + -1;
          cVar2 = *pcVar4;
        }
      }
      if (*param_1 != '\0') {
        param_1 = param_1 + 1;
      }
      *pcVar7 = '%';
      pcVar7[1] = 's';
      pcVar7 = pcVar7 + 2;
    }
    else {
      if (cVar2 == '%') {
        iVar6 = iVar6 + 1;
      }
      *pcVar7 = cVar2;
      pcVar7 = pcVar7 + 1;
      param_1 = param_1 + 1;
    }
    cVar2 = *param_1;
  }
  *pcVar7 = '\0';
  return;
}


