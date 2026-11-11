
/* ==== FUN_00405e01 @ 00405e01 ==== 
 * signature: undefined4 __cdecl FUN_00405e01(char * param_1, int param_2, HFILE param_3, int param_4)
 * body: 00405e01-00405e9f
 */

undefined4 __cdecl FUN_00405e01(char *param_1,int param_2,HFILE param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  
  param_2 = param_2 + -1;
  pcVar2 = param_1;
  do {
    while( true ) {
      if ((int)DAT_00413bdc <= DAT_004138c4) {
        DAT_004138e0 = DAT_004138e0 + DAT_004138c4;
        DAT_004138c4 = 0;
        DAT_00413bdc = _lread(param_3,DAT_00413808,0x4000);
        if ((int)DAT_00413bdc < 1) {
          *pcVar2 = '\0';
          return 0;
        }
      }
      cVar1 = *(char *)(DAT_004138c4 + (int)DAT_00413808);
      if (cVar1 == '\r') break;
      if ((cVar1 != '\n') && (0 < param_2)) {
        param_2 = param_2 + -1;
        *pcVar2 = cVar1;
        pcVar2 = pcVar2 + 1;
      }
      DAT_004138c4 = DAT_004138c4 + 1;
    }
    DAT_004138c4 = DAT_004138c4 + 1;
  } while ((pcVar2 == param_1) && (param_4 == 0));
  *pcVar2 = '\0';
  return 1;
}


