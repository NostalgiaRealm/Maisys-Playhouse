
/* ==== FUN_100132c8 @ 100132c8 ==== 
 * signature: undefined __cdecl FUN_100132c8(char * param_1, int param_2, HANDLE param_3)
 * body: 100132c8-1001337e
 */

void __cdecl FUN_100132c8(char *param_1,int param_2,HANDLE param_3)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  if ((int)DAT_10024048 <= DAT_10023f10) {
    DAT_10023f10 = 0;
    DAT_10024048 = FUN_100122b9(param_3,DAT_10024170,0x7800);
    if ((int)DAT_10024048 < 1) {
      *param_1 = '\0';
      return;
    }
  }
  do {
    do {
      cVar1 = *(char *)(DAT_10023f10 + (int)DAT_10024170);
      if (cVar1 == '\r') {
        DAT_10023f10 = DAT_10023f10 + 1;
        *pcVar2 = '\n';
        pcVar2[1] = '\0';
        return;
      }
      if ((cVar1 != '\n') && (*pcVar2 = cVar1, (int)pcVar2 - (int)param_1 < param_2 + -2)) {
        pcVar2 = pcVar2 + 1;
      }
      DAT_10023f10 = DAT_10023f10 + 1;
    } while (DAT_10023f10 < (int)DAT_10024048);
    DAT_10023f10 = 0;
    DAT_10024048 = FUN_100122b9(param_3,DAT_10024170,0x7800);
  } while (0 < (int)DAT_10024048);
  *pcVar2 = '\0';
  return;
}


