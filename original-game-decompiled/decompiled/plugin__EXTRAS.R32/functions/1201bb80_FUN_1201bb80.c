
/* ==== FUN_1201bb80 @ 1201bb80 ==== 
 * signature: int __cdecl FUN_1201bb80(char * param_1)
 * body: 1201bb80-1201bcab
 */

int __cdecl FUN_1201bb80(char *param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  char *pcVar7;
  
  iVar6 = -1;
  pcVar7 = param_1;
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  if ((((short)iVar6 == -10) && (param_1[2] == ':')) && (param_1[5] == '.')) {
    cVar1 = param_1[7];
    if ((cVar1 < '0') || (bVar5 = true, '9' < cVar1)) {
      bVar5 = false;
    }
    if (bVar5) {
      if ((param_1[6] < '0') || (bVar5 = true, '9' < param_1[6])) {
        bVar5 = false;
      }
      if (bVar5) {
        if ((param_1[4] < '0') || (bVar5 = true, '9' < param_1[4])) {
          bVar5 = false;
        }
        if (bVar5) {
          cVar2 = param_1[3];
          if ((cVar2 < '0') || (bVar5 = true, '9' < cVar2)) {
            bVar5 = false;
          }
          if (bVar5) {
            cVar3 = param_1[1];
            if ((cVar3 < '0') || (bVar5 = true, '9' < cVar3)) {
              bVar5 = false;
            }
            if (bVar5) {
              cVar4 = *param_1;
              if ((cVar4 < '0') || (bVar5 = true, '9' < cVar4)) {
                bVar5 = false;
              }
              if (bVar5) {
                return (((int)cVar1 +
                        ((int)param_1[6] +
                        ((int)param_1[4] + ((int)cVar2 + ((int)cVar3 + cVar4 * 10) * 6) * 10) * 10)
                        * 10) * 3 + -0x9375f0) * 2;
              }
            }
          }
        }
      }
    }
  }
  *(undefined4 *)param_1 = DAT_120370fc;
  *(undefined4 *)(param_1 + 4) = DAT_12037100;
  param_1[8] = DAT_12037104;
  return 0;
}


